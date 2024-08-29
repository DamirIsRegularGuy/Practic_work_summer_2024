//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

int yo, num, yo_1, num_1, speciality_id;
String str, str_1;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{

	this->Constraints->MinWidth = this->Width;
	this->Constraints->MinHeight = this->Height;
	this->Constraints->MaxWidth = this->Width;
	this->Constraints->MaxHeight = this->Height;

}
//---------------------------------------------------------------------------
void __fastcall TForm7::DBGrid1CellClick(TColumn *Column)
{
	// Получаем значения из текущей записи в DBGrid1
yo = ADOQueryGroupe->FieldByName("id")->AsInteger;
str = DBGrid1->SelectedField->AsString;
num = ADOQueryGroupe->RecNo;

if (DBGrid1->DataSource && DBGrid1->DataSource->DataSet)
    yo = DBGrid1->DataSource->DataSet->FieldByName("id")->AsInteger;

// Получаем выбранную специальность и курс из текущей записи
int selectedSpec = ADOQueryGroupe->FieldByName("Speciality")->AsInteger; // "Speciality" заменено с "spec"
int selectedCours = ADOQueryGroupe->FieldByName("Course")->AsInteger; // "Course" заменено с "cours"

// Строим SQL запрос для второго DBGrid на основе выбранных значений
ADOQueryStudents->Close();
ADOQueryStudents->SQL->Clear();
ADOQueryStudents->SQL->Add("SELECT * FROM Students WHERE Speciality = :spec AND Cours = :cours");
ADOQueryStudents->Parameters->ParamByName("spec")->Value = selectedSpec;
ADOQueryStudents->Parameters->ParamByName("cours")->Value = selectedCours;
ADOQueryStudents->Open(); // Выполняем запрос и обновляем второй DBGrid

// Получаем ID специальности для дальнейшего использования
int speciality_id = ADOQueryGroupe->FieldByName("Speciality")->AsInteger; // Используем "Speciality" вместо "spec"

// Создаем новый временный запрос для получения имени специальности
TADOQuery *tempQuery = new TADOQuery(this);
tempQuery->Connection = ADOQueryGroupe->Connection; // Подключаемся к той же базе данных

// Формируем запрос для получения имени специальности
tempQuery->SQL->Text = "SELECT name FROM Speciality WHERE id = :speciality_id";
tempQuery->Parameters->ParamByName("speciality_id")->Value = speciality_id;

tempQuery->Open();

// Заполняем Edit1 именем специальности
if (!tempQuery->IsEmpty())
{
    Edit1->Text = tempQuery->FieldByName("name")->AsString;
}

// Заполняем Edit2 именем группы
Edit2->Text = ADOQueryGroupe->FieldByName("GroupName")->AsString; // Используем "GroupName" вместо "name"

// Заполняем Edit3 курсом
Edit3->Text = ADOQueryGroupe->FieldByName("Course")->AsString; // Используем "Course" вместо "cours"

// Закрываем и освобождаем временный запрос
tempQuery->Close();
delete tempQuery;


}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
		if(RegistrationRoot != "Гость")
   {
 int specialityId;

// Найдите id специальности по имени
ADOQuerySpeciality->SQL->Text = "SELECT id FROM Speciality WHERE Name = :name";
ADOQuerySpeciality->Parameters->ParamByName("Name")->Value = Edit1->Text;
ADOQuerySpeciality->Open();

if (!ADOQuerySpeciality->IsEmpty()) {
	specialityId = ADOQuerySpeciality->FieldByName("id")->AsInteger;
	ADOQuerySpeciality->Close();
} else {
	ShowMessage("Специальность не найдена.");
	ADOQuerySpeciality->Close();
	return;
}
// Закройте текущий запрос перед выполнением INSERT
ADOQueryGroupe->Close();

// Подготовьте SQL-запрос для вставки новой записи в таблицу Groupe
String insertQuery = "INSERT INTO Groupe (spec, name, cours) "
                     "VALUES (:spec, :name, :cours)";

// Установите текст SQL-запроса
ADOQueryGroupe->SQL->Text = insertQuery;

// Установите параметры для запроса
ADOQueryGroupe->Parameters->ParamByName("spec")->Value = specialityId;
ADOQueryGroupe->Parameters->ParamByName("name")->Value = Edit2->Text;
ADOQueryGroupe->Parameters->ParamByName("cours")->Value = Edit3->Text;

// Выполните запрос INSERT
ADOQueryGroupe->ExecSQL();

ADOQueryGroupe->Close();
ADOQueryGroupe->SQL->Clear();

// Используем строку для добавления запроса по частям
ADOQueryGroupe->SQL->Add("USE Practic_work;");
ADOQueryGroupe->SQL->Add("SELECT Groupe.id, ");
ADOQueryGroupe->SQL->Add("Groupe.Name AS GroupName, ");
ADOQueryGroupe->SQL->Add("Groupe.spec AS Speciality, ");
ADOQueryGroupe->SQL->Add("Groupe.cours AS Course, ");
ADOQueryGroupe->SQL->Add("Speciality.name AS SpecialityName, ");
ADOQueryGroupe->SQL->Add("COUNT(Students.id) AS StudentCount ");
ADOQueryGroupe->SQL->Add("FROM Groupe ");
ADOQueryGroupe->SQL->Add("INNER JOIN Speciality ON Groupe.spec = Speciality.id ");
ADOQueryGroupe->SQL->Add("LEFT JOIN Students ON Groupe.cours = Students.Cours AND Groupe.spec = Students.Speciality ");
ADOQueryGroupe->SQL->Add("GROUP BY Groupe.id, Groupe.Name, Groupe.spec, Groupe.cours, Speciality.name;");

ADOQueryGroupe->Open();

}else{
			ShowMessage("Гости не могут использовать данный функционал");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
		if(RegistrationRoot != "Гость")
   {
ADOQuerySpeciality->SQL->Text = "SELECT id FROM Speciality WHERE Name = :name";
	ADOQuerySpeciality->Parameters->ParamByName("name")->Value = Edit1->Text;
	ADOQuerySpeciality->Open();

	// Получаем ID специальности
	int specialityId;
	if (!ADOQuerySpeciality->IsEmpty()) {
		specialityId = ADOQuerySpeciality->FieldByName("id")->AsInteger;
		ADOQuerySpeciality->Close(); // Закрываем запрос после получения данных
	} else {
		ShowMessage("Специальность не найдена.");
		ADOQuerySpeciality->Close(); // Закрываем запрос
		return;
	}

	// Подтверждение удаления
	if (MessageDlg("Вы уверены, что хотите удалить запись с указанными значениями?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes) {
		try {
			// Настройка запроса удаления
			ADOQueryGroupe->Close();
			ADOQueryGroupe->SQL->Text = "DELETE FROM Groupe WHERE spec = :spec AND name = :name AND cours = :cours";
			ADOQueryGroupe->Parameters->ParamByName("spec")->Value = specialityId; // Используем ID специальности
			ADOQueryGroupe->Parameters->ParamByName("name")->Value = Edit2->Text;
			ADOQueryGroupe->Parameters->ParamByName("cours")->Value = Edit3->Text;
			ADOQueryGroupe->ExecSQL(); // Выполнение запроса удаления

			ADOQueryGroupe->Close();
ADOQueryGroupe->SQL->Clear();

// Используем строку для добавления запроса по частям
ADOQueryGroupe->SQL->Add("USE Practic_work;");
ADOQueryGroupe->SQL->Add("SELECT Groupe.id, ");
ADOQueryGroupe->SQL->Add("Groupe.Name AS GroupName, ");
ADOQueryGroupe->SQL->Add("Groupe.spec AS Speciality, ");
ADOQueryGroupe->SQL->Add("Groupe.cours AS Course, ");
ADOQueryGroupe->SQL->Add("Speciality.name AS SpecialityName, ");
ADOQueryGroupe->SQL->Add("COUNT(Students.id) AS StudentCount ");
ADOQueryGroupe->SQL->Add("FROM Groupe ");
ADOQueryGroupe->SQL->Add("INNER JOIN Speciality ON Groupe.spec = Speciality.id ");
ADOQueryGroupe->SQL->Add("LEFT JOIN Students ON Groupe.cours = Students.Cours AND Groupe.spec = Students.Speciality ");
ADOQueryGroupe->SQL->Add("GROUP BY Groupe.id, Groupe.Name, Groupe.spec, Groupe.cours, Speciality.name;");

ADOQueryGroupe->Open();
		}
		catch (const Exception &e) {
			ShowMessage("Ошибка при удалении записи: " + e.Message);
		}
	}
    }else{
			ShowMessage("Гости не могут использовать данный функционал");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Edit1DropDown(TObject *Sender)
{
   Edit1->Items->Clear();
   Form1->Napr_search->Items->Clear();
   Form1->Napr->Close();
   Form1->Napr->SQL->Clear();
   Form1->Napr->SQL->Add("use Practic_work");
   Form1->Napr->SQL->Add("SELECT * FROM Speciality");
   Form1->Napr->Open();
   while (!Form1->Napr->Eof)
   {
	  Edit1->Items->Add(Form1->Napr->FieldByName("name")->AsString);
	  Form1->Napr->Next();
   }

}
//---------------------------------------------------------------------------
void __fastcall TForm7::DBGrid2CellClick(TColumn *Column)
{
		Edit4->Text = ADOQueryStudents->FieldByName("First_Name")->AsString;
		Edit5->Text = ADOQueryStudents->FieldByName("Name")->AsString;
		Edit6->Text = ADOQueryStudents->FieldByName("Last_Name")->AsString;
		Edit7->Text = ADOQueryStudents->FieldByName("Adres")->AsString;
		Edit8->Text = ADOQueryStudents->FieldByName("Telephone")->AsString;
		Edit9->Text = ADOQueryStudents->FieldByName("Email")->AsString;
		Edit10->Text = ADOQueryStudents->FieldByName("Birthday")->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button3Click(TObject *Sender)
{
        if(RegistrationRoot != "Гость")
   {
	int specialityId;
	ADOQuerySpeciality->Close();
	ADOQuerySpeciality->SQL->Text = "SELECT id FROM Speciality WHERE Name = :name";
	ADOQuerySpeciality->Parameters->ParamByName("name")->Value = Edit1->Text;
	ADOQuerySpeciality->Open();

	if (!ADOQuerySpeciality->IsEmpty()) {
		specialityId = ADOQuerySpeciality->FieldByName("id")->AsInteger;
	} else {
		ShowMessage("Специальность не найдена.");
		ADOQuerySpeciality->Close();
		ADOQuerySpeciality->SQL->Clear();
		return;
	}
	ADOQuerySpeciality->Close();
	ADOQuerySpeciality->SQL->Clear();

	// Проверяем правильность формата даты в Edit10

	//TDateTime birthday;
	//birthday = StrToDate(Edit10->Text);

	  String dst2, dst3, year, birthday;
	  dst2 = Edit10->Text;
	  dst3 = dst2.SubString(4,2);
	  dst2.Delete(3,3);
	  dst2 = dst3 + "." + dst2;
	  dst2.Delete(11,9);
	  dst3=dst2;
	  dst3.Delete(3,8);
	  birthday = dst2;


	// Вставляем новую запись в таблицу Students
	try {
		ADOQueryStudents->Close();
		ADOQueryStudents->SQL->Text =
			"INSERT INTO Students (First_name, Name, Last_name, Cours, Speciality, Adres, Telephone, Email, Birthday) "
			"VALUES (:First_name, :Name, :Last_name, :Cours, :Speciality, :Adres, :Telephone, :Email, :Birthday)";

		ADOQueryStudents->Parameters->ParamByName("First_name")->Value = Edit4->Text;
		ADOQueryStudents->Parameters->ParamByName("Name")->Value = Edit5->Text;
		ADOQueryStudents->Parameters->ParamByName("Last_name")->Value = Edit6->Text;
		ADOQueryStudents->Parameters->ParamByName("Cours")->Value = Edit3->Text;
		ADOQueryStudents->Parameters->ParamByName("Speciality")->Value = specialityId; // Используем ID специальности
		ADOQueryStudents->Parameters->ParamByName("Adres")->Value = Edit7->Text;
		ADOQueryStudents->Parameters->ParamByName("Telephone")->Value = Edit8->Text;
		ADOQueryStudents->Parameters->ParamByName("Email")->Value = Edit9->Text;
		ADOQueryStudents->Parameters->ParamByName("Birthday")->Value = birthday; // Используем дату в формате TDateTime

		ADOQueryStudents->ExecSQL(); // Выполняем SQL-запрос



				ADOQueryStudents->Close();
		ADOQueryStudents->SQL->Clear();

		// Формируем SQL-запрос, который включает подзапрос для получения id специальности
		ADOQueryStudents->SQL->Text =
			"SELECT * FROM Students "
			"WHERE Speciality = (SELECT id FROM Speciality WHERE Name = :name) "
			"AND Cours = :cours";

		// Устанавливаем параметры для подзапроса и основного запроса
		ADOQueryStudents->Parameters->ParamByName("name")->Value = Edit1->Text;
		ADOQueryStudents->Parameters->ParamByName("cours")->Value = Edit3->Text;

		// Выполняем запрос
		ADOQueryStudents->Open();
		ShowMessage("Студент успешно добавлен.");
	}
	catch (const Exception &e) {
		ShowMessage("Ошибка при добавлении студента: " + e.Message);
	}
    }else{
			ShowMessage("Гости не могут использовать данный функционал");
}

}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button4Click(TObject *Sender)
{
           if(RegistrationRoot != "Гость")
   {
	   int specialityId;
	ADOQuerySpeciality->Close();
	ADOQuerySpeciality->SQL->Text = "SELECT id FROM Speciality WHERE Name = :name";
	ADOQuerySpeciality->Parameters->ParamByName("name")->Value = Edit1->Text;
	ADOQuerySpeciality->Open();

	if (!ADOQuerySpeciality->IsEmpty()) {
		specialityId = ADOQuerySpeciality->FieldByName("id")->AsInteger;
	} else {
		ShowMessage("Специальность не найдена.");
		ADOQuerySpeciality->Close();
		ADOQuerySpeciality->SQL->Clear();
		return;
	}
	ADOQuerySpeciality->Close();
	ADOQuerySpeciality->SQL->Clear();

	// Удаляем студента
	try {
		ADOQueryStudents->Close();
		ADOQueryStudents->SQL->Text =
			"DELETE FROM Students WHERE First_name = :First_name AND Name = :Name AND Last_name = :Last_name "
			"AND Cours = :Cours AND Speciality = :Speciality AND Adres = :Adres AND Telephone = :Telephone "
			"AND Email = :Email AND Birthday = :Birthday";

		ADOQueryStudents->Parameters->ParamByName("First_name")->Value = Edit4->Text;
		ADOQueryStudents->Parameters->ParamByName("Name")->Value = Edit5->Text;
		ADOQueryStudents->Parameters->ParamByName("Last_name")->Value = Edit6->Text;
		ADOQueryStudents->Parameters->ParamByName("Cours")->Value = Edit3->Text;
		ADOQueryStudents->Parameters->ParamByName("Speciality")->Value = specialityId; // Используем ID специальности
		ADOQueryStudents->Parameters->ParamByName("Adres")->Value = Edit7->Text;
		ADOQueryStudents->Parameters->ParamByName("Telephone")->Value = Edit8->Text;
		ADOQueryStudents->Parameters->ParamByName("Email")->Value = Edit9->Text;
		ADOQueryStudents->Parameters->ParamByName("Birthday")->Value = Edit10->Text;

		ADOQueryStudents->ExecSQL(); // Выполняем SQL-запрос



		ADOQueryStudents->Close();

		ADOQueryStudents->SQL->Clear();

		// Формируем SQL-запрос, который включает подзапрос для получения id специальности
		ADOQueryStudents->SQL->Text =
			"SELECT * FROM Students "
			"WHERE Speciality = (SELECT id FROM Speciality WHERE Name = :name) "
			"AND Cours = :cours";

		// Устанавливаем параметры для подзапроса и основного запроса
		ADOQueryStudents->Parameters->ParamByName("name")->Value = Edit1->Text;
		ADOQueryStudents->Parameters->ParamByName("cours")->Value = Edit3->Text;

		// Выполняем запрос
		ADOQueryStudents->Open();


		ShowMessage("Студент успешно удален.");
	}
	catch (const Exception &e) {
		ShowMessage("Ошибка при удалении студента: " + e.Message);
	}
    }else{
			ShowMessage("Гости не могут использовать данный функционал");
}


}
//---------------------------------------------------------------------------

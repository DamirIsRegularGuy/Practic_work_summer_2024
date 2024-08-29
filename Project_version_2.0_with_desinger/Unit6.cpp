//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{



this->Constraints->MinWidth = this->Width;
	this->Constraints->MinHeight = this->Height;
	this->Constraints->MaxWidth = this->Width;
	this->Constraints->MaxHeight = this->Height;
}

void __fastcall TForm6::MoveToFirstMatchingItem()
{
	// Проверяем, что выбрана буква
	if (CheckListBox1->ItemIndex != -1) {
		String selectedLetter = CheckListBox1->Items->Strings[CheckListBox1->ItemIndex].UpperCase();

		// Открываем первый предмет, соответствующий выбранной букве
		TDataSet *dataSet = DBGrid1->DataSource->DataSet;

		dataSet->First();
		while (!dataSet->Eof) {
			String subjectName = dataSet->FieldByName("Subjects")->AsString; // Замените "SubjectFieldName" на имя вашего поля

			// Проверяем, совпадает ли первая буква предмета с выбранной буквой
			if (!subjectName.IsEmpty() && subjectName.UpperCase().SubString(1, 1) == selectedLetter) {
				// Перемещаем фокус на найденный предмет
				DBGrid1->DataSource->DataSet->Bookmark = dataSet->GetBookmark();
				break;
			}

			dataSet->Next();
		}
	}
}

//---------------------------------------------------------------------------
void __fastcall TForm6::CheckListBox1Click(TObject *Sender)
{

	// Проверяем, что элемент был выбран
	if (CheckListBox1->ItemIndex != -1)
	{
		// Убираем выбор с остальных элементов
		for (int i = 0; i < CheckListBox1->Items->Count; i++)
		{
			if (i != CheckListBox1->ItemIndex)
			{
				CheckListBox1->Checked[i] = false;
			}
		}
	}

DBGrid1->Refresh();
MoveToFirstMatchingItem();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
		  int DataCol, TColumn *Column, TGridDrawState State)
{


	// Получаем выбранную букву из CheckListBox (если выбрана)
	String selectedLetter;
	if (CheckListBox1->ItemIndex != -1) {
		selectedLetter = CheckListBox1->Items->Strings[CheckListBox1->ItemIndex].UpperCase();
    }

    // Получаем значение текущей ячейки
    String subjectName = Column->Field->AsString;

    // Проверяем, совпадает ли первая буква предмета с выбранной буквой
    if (!selectedLetter.IsEmpty() && !subjectName.IsEmpty() && subjectName.UpperCase().SubString(1, 1) == selectedLetter) {
        // Изменяем цвет фона для ячейки
		DBGrid1->Canvas->Brush->Color = clPurple; // Цвет фона
        DBGrid1->Canvas->Font->Color = clBlack; // Цвет текста
    }
    else {
        // Восстанавливаем стандартные цвета
		DBGrid1->Canvas->Brush->Color = clBlack;
		DBGrid1->Canvas->Font->Color = clWhite;
	}

    // Отрисовка ячейки с выбранными цветами
	DBGrid1->DefaultDrawColumnCell(Rect, DataCol, Column, State);

}
//---------------------------------------------------------------------------
void __fastcall TForm6::AddButtonClick(TObject *Sender)
{
      if(RegistrationRoot != "Гость")
   {
  // Получаем значение из TEdit
	String newItem = Edit1->Text.Trim();

	// Проверяем, что значение не пустое
	if (!newItem.IsEmpty()) {
		TADOQuery *adoQuery = ADOQuery1; // Замените ADOQuery1 на имя вашего TADOQuery

		// Открываем запрос для добавления
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("INSERT INTO Subjects (subjects) VALUES (:NewItem)"); // Замените на ваше имя таблицы и поле
		adoQuery->Parameters->ParamByName("NewItem")->Value = newItem;
		adoQuery->ExecSQL(); // Выполняем запрос

		// Обновляем данные в DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Subjects order by subjects"); // Замените на ваш SQL запрос для загрузки данных
		adoQuery->Open();

		// Очищаем поле TEdit
		Edit1->Clear();
	} else {
		ShowMessage("Введите название предмета.");
	}
    }else{
			ShowMessage("Гости не могут использовать данный функционал");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DeleteButtonClick(TObject *Sender)
{
        if(RegistrationRoot != "Гость")
   {

  String itemToDelete = Edit1->Text.Trim();

	// Проверяем, что значение не пустое
	if (!itemToDelete.IsEmpty()) {
		TADOQuery *adoQuery = ADOQuery1; // Замените ADOQuery1 на имя вашего TADOQuery

		// Открываем запрос для удаления
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("DELETE FROM Subjects WHERE subjects = :ItemToDelete"); // Замените на ваше имя таблицы и поле
		adoQuery->Parameters->ParamByName("ItemToDelete")->Value = itemToDelete;
		adoQuery->ExecSQL(); // Выполняем запрос

		// Обновляем данные в DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Subjects order by subjects"); // Замените на ваш SQL запрос для загрузки данных
		adoQuery->Open();

		// Очищаем поле TEdit
		Edit1->Clear();
	} else {
		ShowMessage("Введите название предмета.");
	}
    }else{
			ShowMessage("Гости не могут использовать данный функционал");
}

}
//---------------------------------------------------------------------------
void __fastcall TForm6::DBGrid1CellClick(TColumn *Column)
{
  if (!ADOQuery1->IsEmpty()) {
		String selectedItem = ADOQuery1->FieldByName("subjects")->AsString; // Замените "SubjectFieldName" на имя вашего поля
		Edit1->Text = selectedItem;
	}
}
//---------------------------------------------------------------------------



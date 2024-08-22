//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

String selectedLetter = "";
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{



   audit->EditLabel->Caption = "���������� ����";
   lec->EditLabel->Caption = "������";
   prac->EditLabel->Caption = "��������";
   lab->EditLabel->Caption = "������������";
   semenar->EditLabel->Caption = "��������";
   sam->EditLabel->Caption = "���������������";




	ComboBoxFamiliya->Clear();
	ComboBoxImya->Clear();
	ComboBoxOtchestvo->Clear();

	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("use Practic_work");
	ADOQuery2->SQL->Add("SELECT * FROM Prepods");
	ADOQuery2->Open();


   ADOQuery2->Close();
   ADOQuery2->SQL->Clear();
   ADOQuery2->SQL->Add("use Practic_work");
   ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
   ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
   ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
   ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
   ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
   ADOQuery2->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Napr_searchChange(TObject *Sender)
{
   ADOQuery2->Close();
   ADOQuery2->SQL->Clear();
   ADOQuery2->SQL->Add("use Practic_work");
   ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
   ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
   ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
   ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
   ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
   ADOQuery2->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "';");
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   try
   {
	ADOQuery2->Open();
   }
   catch (Exception &e)
   {
	ShowMessage("������ ���������� �������: " + e.Message);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Napr_searchDropDown(TObject *Sender)
{
   Napr_search->Items->Clear();
   Napr->Close();
   Napr->SQL->Clear();
   Napr->SQL->Add("use Practic_work");
   Napr->SQL->Add("SELECT * FROM Speciality");
   Napr->Open();
   while (!Napr->Eof)
   {
	  Napr_search->Items->Add(Napr->FieldByName("name")->AsString);
	  Napr->Next();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::DissiplChange(TObject *Sender)
{


	String selectedSubject = Dissipl->Text;

	// �������� �� ������ ��������
	if (selectedSubject.IsEmpty())
	{
		ShowMessage("����������, �������� �������.");
		return;
	}

	// ������� ���������� ��������
	ComboBox3->Clear();
	Semestr->Clear();

	// ��������� ���������� �������� ������ ��� ���������� ��������
	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("SELECT DISTINCT Cours FROM Dist WHERE Name_Dist = (SELECT id FROM Subjects WHERE subjects = :SubjectName)");
	ADOQuery2->Parameters->ParamByName("SubjectName")->Value = selectedSubject;
	ADOQuery2->Open();

	// ���������� ���������� ������
	while (!ADOQuery2->Eof)
	{
		ComboBox3->Items->Add(ADOQuery2->FieldByName("Cours")->AsString);
		ADOQuery2->Next();
	}

	// ��������� ���������� �������� ��������� ��� ���������� ��������
	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("SELECT DISTINCT Semestr FROM Dist WHERE Name_Dist = (SELECT id FROM Subjects WHERE subjects = :SubjectName)");
	ADOQuery2->Parameters->ParamByName("SubjectName")->Value = selectedSubject;
	ADOQuery2->Open();

	// ���������� ���������� ���������
	while (!ADOQuery2->Eof)
	{
		Semestr->Items->Add(ADOQuery2->FieldByName("Semestr")->AsString);
		ADOQuery2->Next();
	}

	Semestr->Text = "�������";
    ComboBox3->Text = "����";

   ADOQuery2->Close();
   ADOQuery2->SQL->Clear();
   ADOQuery2->SQL->Add("use Practic_work");
   ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
   ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
   ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
   ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
   ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
   ADOQuery2->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "'and subjects='" + Dissipl->Text + "'");
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery2->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::DissiplDropDown(TObject *Sender)
{
   Dissipl->Items->Clear();
   Napr->Close();
   Napr->SQL->Clear();
   Napr->SQL->Add("use Practic_work");
   Napr->SQL->Add("SELECT * FROM Dist");
   Napr->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id");
   Napr->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id");
   Napr->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id");
   Napr->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "';");
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   Napr->Open();

   for(int i=0; i<(Napr->RecordCount); i++)
   {
	  bool pool=true;
	  for(int j=0; j < Dissipl->Items->Count; j++ )
	   if((Napr->FieldByName("subjects")->AsString)==(Dissipl->Items->Strings[j]))
	   {
		 pool=false;
		 break;
	   }
		if(pool) Dissipl->Items->Add(Napr->FieldByName("subjects")->AsString);
		Napr->Next();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SemestrChange(TObject *Sender)
{
   ADOQuery2->Close();
   ADOQuery2->SQL->Clear();
   ADOQuery2->SQL->Add("use Practic_work");
   ADOQuery2->SQL->Add("SELECT * FROM Dist");
   ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id");
   ADOQuery2->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id");
   ADOQuery2->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id");
   ADOQuery2->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "'and subjects='" + Dissipl->Text + "' and semestr="+Semestr->Text);
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery2->Open();


   if(!ADOQuery2->IsEmpty())
   {
			audit->Text = ADOQuery2->FieldByName("In_Audience")->AsString;

			lec->Text = ADOQuery2->FieldByName("Lecture_Hours")->AsString;

			prac->Text = ADOQuery2->FieldByName("Practice_Hours")->AsString;

			lab->Text = ADOQuery2->FieldByName("Lab_Hours")->AsString;

			semenar->Text = ADOQuery2->FieldByName("Semenars")->AsString;

			sam->Text = ADOQuery2->FieldByName("Independent_Hours")->AsString;

			String controlDist = ADOQuery2->FieldByName("Form_Of_Control")->AsString;

			ADOQuery2->Close();
			ADOQuery2->SQL->Clear();
			ADOQuery2->SQL->Add("use Practic_work");
			ADOQuery2->SQL->Add("SELECT * FROM Form_Of_Control");
			ADOQuery2->SQL->Add("where id = " + controlDist);
			ADOQuery2->Open();

			tipeControl->Caption = "����� ��������: " + ADOQuery2->FieldByName("Name")->AsString;


			ADOQuery2->Close();
			ADOQuery2->SQL->Clear();
			ADOQuery2->SQL->Add("use Practic_work");
			ADOQuery2->SQL->Add("SELECT * FROM Students");
			ADOQuery2->SQL->Add("Where Cours = " + ComboBox3->Text + " and Speciality IN(SELECT id FROM Speciality WHERE Name = '" + Napr_search->Text + "')");
			ADOQuery2->Open();

			queStudent->Caption = "���-�� ��������� � ������: " + IntToStr(ADOQuery2->RecordCount);
   }
   else
   {
		   audit->Clear();
		   lec->Clear();
		   prac->Clear();
		   lab->Clear();
		   semenar->Clear();
		   sam->Clear();

		   tipeControl->Caption = "����� ��������: ";
		   queStudent->Caption = "���-�� ��������� � ������: ";
   }



   ADOQuery2->Close();
   ADOQuery2->SQL->Clear();
   ADOQuery2->SQL->Add("use Practic_work");
   ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
   ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
   ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
   ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
   ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
   ADOQuery2->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "'and subjects='" + Dissipl->Text + "' and semestr="+Semestr->Text);
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery2->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::DBGrid1CellClick(TColumn *Column)
{
	String familiya = ADOQuery1->FieldByName("First_name")->AsString;
	String imya = ADOQuery1->FieldByName("Name")->AsString;
	String otchestvo = ADOQuery1->FieldByName("Last_name")->AsString;
	String doljnost = ADOQuery1->FieldByName("Position")->AsString;

	/*
	int kurs = StrToInt(ComboBox3->Text);
	int semestr = StrToInt(Semestr->Text);
	String speciality_name = Napr_search->Text;
	String subject_name =  Dissipl->Text;
	*/

	ComboBoxFamiliya->Text = familiya;
	ComboBoxImya->Text = imya;
	ComboBoxOtchestvo->Text = otchestvo;

	String chasy;

	if (doljnost == "���������")
	 {
		chasy = "600-650";
	} else if (doljnost == "������")
	 {
		chasy = "650-700";
	} else if (doljnost == "������� �������������")
	{
		chasy = "750-800";
	} else if (doljnost == "���������")
	{
		chasy = "850-900";
	} else
	 {
		chasy = "����������� ���������";
	}

	Label3->Caption = "����� �����: " + chasy;


	// �������� �������� �����������
	String comboBox3Text = ComboBox3->Text;
	String semestrText = Semestr->Text;
	String naprSearchText = Napr_search->Text;
	String dissiplText = Dissipl->Text;


	// ������� � ��������� ������� ��� ���������� ������ ���������� �����
	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("use Practic_work");
	ADOQuery2->SQL->Add("SELECT SUM(Dist_With_Prepod.Lecture_Hours + Dist_With_Prepod.Practice_Hours + Dist_With_Prepod.Lab_Hours + Dist_With_Prepod.Semenars) AS TotalHours");
	ADOQuery2->SQL->Add("FROM Dist_With_Prepod");
	ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
	ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
	ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
	ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
	ADOQuery2->SQL->Add("WHERE Prepods.First_name = :FirstName AND Prepods.Name = :Name AND Prepods.Last_name = :LastName");


	// ��������� �������� ����������
	ADOQuery2->Parameters->ParamByName("FirstName")->Value = familiya;
	ADOQuery2->Parameters->ParamByName("Name")->Value = imya;
	ADOQuery2->Parameters->ParamByName("LastName")->Value = otchestvo;

	// ���������� �������
	ADOQuery2->Open();

	// �������� � ��������� �������� Label4
	if (!ADOQuery2->Eof)
	{
		int totalHours = ADOQuery2->FieldByName("TotalHours")->AsInteger;
		Label4->Caption = "�������: " + IntToStr(totalHours);
	}
	else
	{
		Label4->Caption = "������ �� �������.";
	}





	// �������� ������� SQL ������
	String sqlQuery = "use Practic_work; "
					  "SELECT Dist_With_Prepod.*, Form_Of_Control.*, "
					  "Speciality.*, Subjects.*, Prepods.* "
					  "FROM Dist_With_Prepod "
					  "JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id "
					  "JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id "
					  "JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id "
					  "JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id "
					  "WHERE Prepods.First_name = :FirstName AND Prepods.Name = :Name AND Prepods.Last_name = :LastName ";


	bool hasFilter = false;

	// ���������� ������� ��� �����������
	if (comboBox3Text != "" && comboBox3Text != "����")
	{
		sqlQuery += "AND Dist_With_Prepod.Cours = :Cours ";
		hasFilter = true;
	}

	if (semestrText != "" && semestrText != "�������")
	{
		sqlQuery += "AND Dist_With_Prepod.Semestr = :Semestr ";
		hasFilter = true;
	}

	if (naprSearchText != "" && naprSearchText != "�����������")
	{
		sqlQuery += "AND Speciality.Name = :SpecialityName ";
		hasFilter = true;
	}

	if (dissiplText != "" && dissiplText != "�������")
	{
		sqlQuery += "AND Subjects.subjects = :SubjectName ";
		hasFilter = true;
	}

	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add(sqlQuery);

	// ��������� ���������� �������
	ADOQuery2->Parameters->ParamByName("FirstName")->Value = familiya; // �������������
	ADOQuery2->Parameters->ParamByName("Name")->Value = imya;
	ADOQuery2->Parameters->ParamByName("LastName")->Value = otchestvo;

	if (comboBox3Text != "" && comboBox3Text != "����")
		ADOQuery2->Parameters->ParamByName("Cours")->Value = StrToInt(comboBox3Text);
	if (semestrText != "" && semestrText != "�������")
		ADOQuery2->Parameters->ParamByName("Semestr")->Value = StrToInt(semestrText);
	if (naprSearchText != "" && naprSearchText != "�����������")
		ADOQuery2->Parameters->ParamByName("SpecialityName")->Value = naprSearchText;
	if (dissiplText != "" && dissiplText != "�������")
		ADOQuery2->Parameters->ParamByName("SubjectName")->Value = dissiplText;
	//ShowMessage(ADOQuery2->SQL->Text);
	// ��������� ������

	ADOQuery2->Open();


	int posTotalHours = Label3->Caption.Pos(":") + 2;
	UnicodeString hoursRange = Label3->Caption.SubString(posTotalHours, Label3->Caption.Length() - posTotalHours + 1);

	int posCurrentHours = Label4->Caption.Pos(":") + 2;
	UnicodeString currentHoursStr = Label4->Caption.SubString(posCurrentHours, Label4->Caption.Length() - posCurrentHours + 1);

	int minHours = hoursRange.SubString(1, hoursRange.Pos("-") - 1).ToInt();
	int maxHours = hoursRange.SubString(hoursRange.Pos("-") + 1, hoursRange.Length()).ToInt();
	int currentHours = currentHoursStr.ToInt();

	int remainingHours = maxHours - currentHours;

	if (remainingHours < 0)
	{
		remainingHours = 0;
	}

	Label5->Caption = "��������: " + IntToStr(remainingHours);


	CheckListBox1->ItemIndex = -1;
	for (int i = 0; i < CheckListBox1->Items->Count; i++)
	{
		CheckListBox1->Checked[i] = false;
	}

	// �������� ��������� �����
	selectedLetter = "";

	// �������� ������ � ����������� � TDBGrid
	ADOQuery2->Close();
	ADOQuery2->Open();
	DBGrid1->Invalidate();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::ComboBoxOtchestvoChange(TObject *Sender)
{
	String familiya = ComboBoxFamiliya->Text;
	String imya = ComboBoxImya->Text;
	String otchestvo = ComboBoxOtchestvo->Text;

	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("use Practic_work");
	ADOQuery1->SQL->Add("select * from Prepods");
	ADOQuery1->SQL->Add("where First_name = '" + familiya + "' and Name = '" + imya + "'and Last_name = '" + otchestvo + "'");
	ADOQuery1->Open();
	String doljnost = ADOQuery1->FieldByName("Position")->AsString;

	String chasy;

	if (doljnost == "���������")
	 {
		chasy = "600-650";
	} else if (doljnost == "������")
	 {
		chasy = "650-700";
	} else if (doljnost == "������� �������������")
	{
		chasy = "750-800";
	} else if (doljnost == "���������")
	{
		chasy = "850-900";
	} else
	 {
		chasy = "����������� ���������";
	}

	Label3->Caption = "����� �����: " + chasy;

	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("use Practic_work");
	ADOQuery1->SQL->Add("select * from Prepods");
	ADOQuery1->SQL->Add("JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id");
	ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::AddButtonClick(TObject *Sender)
{
	String familiya = ComboBoxFamiliya->Text;
    String imya = ComboBoxImya->Text;
    String otchestvo = ComboBoxOtchestvo->Text;
    int kurs = StrToInt(ComboBox3->Text);
    int semestr = StrToInt(Semestr->Text);
    String speciality_name = Napr_search->Text;
    String subject_name = Dissipl->Text;
    String form_of_control_name = tipeControl->Caption;
    int in_audience = audit->Text.IsEmpty() ? 0 : StrToInt(audit->Text);
    int lecture_hours = lec->Text.IsEmpty() ? 0 : StrToInt(lec->Text);
    int practice_hours = prac->Text.IsEmpty() ? 0 : StrToInt(prac->Text);
    int lab_hours = lab->Text.IsEmpty() ? 0 : StrToInt(lab->Text);
    int seminars = semenar->Text.IsEmpty() ? 0 : StrToInt(semenar->Text);
    int independent_hours = sam->Text.IsEmpty() ? 0 : StrToInt(sam->Text);
	int control_hours = 0;

    if (form_of_control_name.Pos("����� ��������: ") == 1)
	{
		form_of_control_name.Delete(1, 16); // 15 - ����� ������ "����� ��������:"
        form_of_control_name.Trim(); // ������� ������� � ������ � � �����
	}

    String queStudentCaption = queStudent->Caption;
    String prefix = "���-�� ��������� � ������: ";
    if (queStudentCaption.Pos(prefix) == 1)
    {
		queStudentCaption.Delete(1, prefix.Length()); // ������� �������
		queStudentCaption.Trim(); // ������� ������� � ������ � �����
    }

	int numStudents = StrToIntDef(queStudentCaption, 0);

	if (form_of_control_name == "�����")
		control_hours = numStudents * 0.35;
	else if (form_of_control_name == "�������")
		control_hours = numStudents * 0.55;
	else if (form_of_control_name == "����� � �������")
		control_hours = numStudents * 0.35 + numStudents * 0.55;

    // ��������� ������� ������
	ADOQuery2->Close();
    ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod WHERE ");
    ADOQuery2->SQL->Add("Name_Dist = (SELECT id FROM Subjects WHERE subjects = '" + subject_name + "') AND ");
	ADOQuery2->SQL->Add("Semestr = " + IntToStr(semestr) + " AND ");
    ADOQuery2->SQL->Add("Cours = " + IntToStr(kurs) + " AND ");
    ADOQuery2->SQL->Add("Speciality_Id = (SELECT id FROM Speciality WHERE Name = '" + speciality_name + "') AND ");
    ADOQuery2->SQL->Add("Prepod_Id = (SELECT id FROM Prepods WHERE First_name = '" + familiya + "' AND Name = '" + imya + "' AND Last_name = '" + otchestvo + "') AND ");
    ADOQuery2->SQL->Add("In_Audience = " + IntToStr(in_audience) + " AND ");
    ADOQuery2->SQL->Add("Lecture_Hours = " + IntToStr(lecture_hours) + " AND ");
    ADOQuery2->SQL->Add("Practice_Hours = " + IntToStr(practice_hours) + " AND ");
    ADOQuery2->SQL->Add("Lab_Hours = " + IntToStr(lab_hours) + " AND ");
	ADOQuery2->SQL->Add("Semenars = " + IntToStr(seminars) + " AND ");
	ADOQuery2->SQL->Add("Independent_Hours = 0 AND ");
	ADOQuery2->SQL->Add("Form_Of_Control = (SELECT id FROM Form_Of_Control WHERE Name = '" + form_of_control_name + "') AND ");
	ADOQuery2->SQL->Add("Control_Hours = " + IntToStr(control_hours));
	ShowMessage(ADOQuery2->SQL->Text);
	ADOQuery2->Open();

	if (!ADOQuery2->IsEmpty())
        {
			ShowMessage("������ ��� ����������.");
			ADOQuery2->Close();
			ADOQuery2->SQL->Clear();
			ADOQuery2->SQL->Add("use Practic_work");
			ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
			ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
			ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
			ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
			ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
			ADOQuery2->Open();
            return;
		}

	// ������ �� �������, ��������� �
	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("INSERT INTO Dist_With_Prepod (Name_Dist, Semestr, Cours, Speciality_Id, Prepod_Id, In_Audience, Lecture_Hours, Practice_Hours, Lab_Hours, Semenars, Independent_Hours, Form_Of_Control, Control_Hours) ");
	ADOQuery2->SQL->Add("VALUES (");
	ADOQuery2->SQL->Add("(SELECT id FROM Subjects WHERE subjects = '" + subject_name + "'), ");
	ADOQuery2->SQL->Add(IntToStr(semestr) + ", ");
	ADOQuery2->SQL->Add(IntToStr(kurs) + ", ");
	ADOQuery2->SQL->Add("(SELECT id FROM Speciality WHERE Name = '" + speciality_name + "'), ");
	ADOQuery2->SQL->Add("(SELECT id FROM Prepods WHERE First_name = '" + familiya + "' AND Name = '" + imya + "' AND Last_name = '" + otchestvo + "'), ");
	ADOQuery2->SQL->Add(IntToStr(in_audience) + ", ");
	ADOQuery2->SQL->Add(IntToStr(lecture_hours) + ", ");
	ADOQuery2->SQL->Add(IntToStr(practice_hours) + ", ");
	ADOQuery2->SQL->Add(IntToStr(lab_hours) + ", ");
	ADOQuery2->SQL->Add(IntToStr(seminars) + ", ");
	ADOQuery2->SQL->Add( " 0 , ");
	ADOQuery2->SQL->Add("(SELECT id FROM Form_Of_Control WHERE Name = '" + form_of_control_name + "'), ");
	ADOQuery2->SQL->Add(IntToStr(control_hours) + ")");
	ShowMessage(ADOQuery2->SQL->Text);
	ADOQuery2->ExecSQL();


	// ��������� ������
	ADOQuery2->Close();
	ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("use Practic_work");
	ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
	ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
	ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
	ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
	ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
	ADOQuery2->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::DeleteButtonClick(TObject *Sender)
{
    String familiya = ComboBoxFamiliya->Text;
    String imya = ComboBoxImya->Text;
    String otchestvo = ComboBoxOtchestvo->Text;
    int kurs = StrToIntDef(ComboBox3->Text, 0);
    int semestr = StrToIntDef(Semestr->Text, 0);
    String speciality_name = Napr_search->Text;
    String subject_name = Dissipl->Text;
    String form_of_control_name = tipeControl->Caption;

    if (form_of_control_name.Pos("����� ��������: ") == 1)
	{
		form_of_control_name.Delete(1, 16); // ������� ������� "����� ��������:"
        form_of_control_name.Trim(); // ������� ������� � ������ � � �����
	}

    // ��������� ������� ������ ����� ���������
	ADOQuery2->Close();
    ADOQuery2->SQL->Clear();
	ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod WHERE ");
    ADOQuery2->SQL->Add("Name_Dist = (SELECT id FROM Subjects WHERE subjects = '" + subject_name + "') AND ");
	ADOQuery2->SQL->Add("Semestr = " + IntToStr(semestr) + " AND ");
    ADOQuery2->SQL->Add("Cours = " + IntToStr(kurs) + " AND ");
    ADOQuery2->SQL->Add("Speciality_Id = (SELECT id FROM Speciality WHERE Name = '" + speciality_name + "') AND ");
    ADOQuery2->SQL->Add("Prepod_Id = (SELECT id FROM Prepods WHERE First_name = '" + familiya + "' AND Name = '" + imya + "' AND Last_name = '" + otchestvo + "')");
	ADOQuery2->Open();

	if (ADOQuery2->IsEmpty())
	{
		ShowMessage("������ �� �������.");
		ADOQuery2->Close();
		return;
	}

	// ������ �������, ������������ ��������
	if (MessageDlg("�� �������, ��� ������ ������� ��� ������?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
	{
		// ������� ������
		ADOQuery2->Close();
		ADOQuery2->SQL->Clear();
		ADOQuery2->SQL->Add("DELETE FROM Dist_With_Prepod WHERE ");
		ADOQuery2->SQL->Add("Name_Dist = (SELECT id FROM Subjects WHERE subjects = '" + subject_name + "') AND ");
		ADOQuery2->SQL->Add("Semestr = " + IntToStr(semestr) + " AND ");
		ADOQuery2->SQL->Add("Cours = " + IntToStr(kurs) + " AND ");
		ADOQuery2->SQL->Add("Speciality_Id = (SELECT id FROM Speciality WHERE Name = '" + speciality_name + "') AND ");
		ADOQuery2->SQL->Add("Prepod_Id = (SELECT id FROM Prepods WHERE First_name = '" + familiya + "' AND Name = '" + imya + "' AND Last_name = '" + otchestvo + "')");
		ADOQuery2->ExecSQL();

		ShowMessage("������ �������.");

		// ��������� ������
		ADOQuery2->Close();
		ADOQuery2->SQL->Clear();
		ADOQuery2->SQL->Add("use Practic_work");
		ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod");
		ADOQuery2->SQL->Add("JOIN Form_Of_Control ON Dist_With_Prepod.Form_Of_Control = Form_Of_Control.id");
		ADOQuery2->SQL->Add("JOIN Speciality ON Dist_With_Prepod.Speciality_Id = Speciality.id");
		ADOQuery2->SQL->Add("JOIN Subjects ON Dist_With_Prepod.Name_Dist = Subjects.id");
		ADOQuery2->SQL->Add("JOIN Prepods ON Dist_With_Prepod.Prepod_Id = Prepods.id");
		ADOQuery2->Open();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::CheckListBox1Click(TObject *Sender)
{
   TCheckListBox *checkListBox = dynamic_cast<TCheckListBox*>(Sender);

	// ���������, ��� ������� ��� ������
	if (checkListBox->ItemIndex != -1)
	{
		// ������� ����� � ��������� ���������
		for (int i = 0; i < checkListBox->Items->Count; i++)
		{
			if (i != checkListBox->ItemIndex)
			{
				checkListBox->Checked[i] = false;
			}
		}
	}


	selectedLetter = "";

	// ������� ��������� ����� �� TCheckListBox
	for (int i = 0; i < CheckListBox1->Items->Count; i++)
	{
		if (CheckListBox1->Checked[i])
		{
			selectedLetter = CheckListBox1->Items->Strings[i];
			break;
		}
	}

	// �������� ������� ������ � ���������� SQL-������ ��� ��������� ������
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("select * from Prepods");
	ADOQuery1->SQL->Add("JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id");
	ADOQuery1->SQL->Add("order by First_name");

	ADOQuery1->Open();

	// ����������� ����� �� ������ ������, ������������ � ��������� �����
	ADOQuery1->First();
	while (!ADOQuery1->Eof)
	{
		String surname = ADOQuery1->FieldByName("First_name")->AsString;
		if (surname.Length() > 0 && surname[1] == selectedLetter[1])
		{
			// ���������� ����� �� ������ ������, ������������ � ���� �����
			ADOQuery1->Bookmark = ADOQuery1->GetBookmark();
			break;
		}
		ADOQuery1->Next();
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm3::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
		  int DataCol, TColumn *Column, TGridDrawState State)
{
	   TDBGrid *dbGrid = dynamic_cast<TDBGrid*>(Sender);
	if (dbGrid)
	{
		String surname = dbGrid->DataSource->DataSet->FieldByName("First_name")->AsString;
		String firstLetter;
		if (surname.Length() > 0)
		{
			firstLetter = surname.SubString(1, 1);
		}

		// ���� selectedLetter �����, ����������� ���� ���� �� ���������
		if (selectedLetter.IsEmpty() || firstLetter == selectedLetter)
		{
			dbGrid->Canvas->Brush->Color = (selectedLetter.IsEmpty()) ? dbGrid->Color : clYellow;
		}
		else
		{
			dbGrid->Canvas->Brush->Color = dbGrid->Color; // ���� ���� DBGrid
		}

        dbGrid->Canvas->FillRect(Rect); // ��������� ������� ������

        // ���������� ���� ������
        dbGrid->Canvas->Font->Color = clBlack; // ���������� ���� ������

		// ��������� �����
		dbGrid->Canvas->TextRect(Rect, Rect.Left + 2, Rect.Top + 2, dbGrid->DataSource->DataSet->FieldByName(Column->Field->FieldName)->AsString);


	}
}
//---------------------------------------------------------------------------

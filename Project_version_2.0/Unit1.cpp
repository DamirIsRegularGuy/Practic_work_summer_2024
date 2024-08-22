//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"

#include <map>
#include <vector>
#include <string>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TForm1 *Form1;
bool piir=false, btn1, btn2;
String dist_id, py, py1, gr_id, para, reep, delet_id, delet_year;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	DateTimePicker2->Date = DateTimePicker2->Date.CurrentDate();
	DateTimePicker4->Date = DateTimePicker4->Date.CurrentDate();
	DateTimePicker7->Date = DateTimePicker7->Date.CurrentDate();



	SpeedButton1->Caption="1 ����\n8:00 - 9:30";
	SpeedButton2->Caption="2 ����\n9:45 - 11:15";
	SpeedButton3->Caption="3 ����\n11:30 - 13:00";
	SpeedButton4->Caption="4 ����\n14:00 - 15:30";
	SpeedButton5->Caption="5 ����\n15:45 - 17:15";
	SpeedButton6->Caption="�����������";
	SpeedButton7->Caption="�������";
	SpeedButton8->Caption="�����";
	SpeedButton9->Caption="�������";
	SpeedButton10->Caption="�������";
	SpeedButton11->Caption="�������";
	SpeedButton12->Caption="�����������";


	SpeedButton13->Caption="1 ����\n8:00 - 9:30";
	SpeedButton14->Caption="2 ����\n9:45 - 11:15";
	SpeedButton15->Caption="3 ����\n11:30 - 13:00";
	SpeedButton16->Caption="4 ����\n14:00 - 15:30";
	SpeedButton17->Caption="5 ����\n15:45 - 17:15";
	SpeedButton18->Caption="�����������";
	SpeedButton19->Caption="�������";
	SpeedButton20->Caption="�����";
	SpeedButton21->Caption="�������";
	SpeedButton22->Caption="�������";
	SpeedButton23->Caption="�������";
	SpeedButton24->Caption="�����������";

}


std::map<String, int> TForm1::GetFilledHours(TADOQuery* ADOQuery1) {
    std::map<String, int> hours;

    // ������ � ���������� ����� ��� ��������
    String fieldNames[] = {"Lecture_Hours", "Practice_Hours", "Lab_Hours", "Semenars"};

    // �������� �� ������� ���� � ��������� ��� ��������
    for (int i = 0; i < sizeof(fieldNames)/sizeof(fieldNames[0]); i++) {
        String fieldName = fieldNames[i];
		int value = ADOQuery1->FieldByName(fieldName)->AsInteger;
        if (value != 0) {
            hours[fieldName] = value;
        }
    }

    return hours;
}


//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	const int numColumns = 7;

	int totalWidth = StringGrid6->Width-10;
	int columnWidth = totalWidth / numColumns;

	StringGrid6->ColCount = numColumns;
	for (int i = 0; i < numColumns; i++) StringGrid6->ColWidths[i] = columnWidth;

	SpeedButton6->Left = 1 * 147;
	SpeedButton6->Width = columnWidth;

	SpeedButton7->Left = SpeedButton6->Width + 147;
	SpeedButton7->Width = columnWidth;

	SpeedButton8->Left = SpeedButton6->Width + SpeedButton7->Width + 147;
	SpeedButton8->Width = columnWidth;

	SpeedButton9->Left = SpeedButton6->Width + SpeedButton7->Width + SpeedButton8->Width + 147;
	SpeedButton9->Width = columnWidth;

	SpeedButton10->Left = SpeedButton6->Width + SpeedButton7->Width + SpeedButton8->Width + SpeedButton9->Width + 147;
	SpeedButton10->Width = columnWidth;

	SpeedButton11->Left = SpeedButton6->Width + SpeedButton7->Width + SpeedButton8->Width + SpeedButton9->Width + SpeedButton10->Width + 147;
	SpeedButton11->Width = columnWidth;

	SpeedButton12->Left = SpeedButton6->Width + SpeedButton7->Width + SpeedButton8->Width + SpeedButton9->Width + SpeedButton10->Width + SpeedButton11->Width + 147;
	SpeedButton12->Width = columnWidth;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Napr_searchDropDown(TObject *Sender)
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
void __fastcall TForm1::Napr_searchChange(TObject *Sender)
{
ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("SELECT * FROM Dist");
   ADOQuery1->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id");
   ADOQuery1->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id");
   ADOQuery1->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id");
   ADOQuery1->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "';");
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   try
   {
	ADOQuery1->Open();
   }
   catch (Exception &e)
   {
	ShowMessage("������ ���������� �������: " + e.Message);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DissiplDropDown(TObject *Sender)
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
void __fastcall TForm1::DissiplChange(TObject *Sender)
{
ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("SELECT * FROM Dist");
   ADOQuery1->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id");
   ADOQuery1->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id");
   ADOQuery1->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id");
   ADOQuery1->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "'and subjects='" + Dissipl->Text + "'");
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::SemestrChange(TObject *Sender)
{
ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("SELECT * FROM Dist");
   ADOQuery1->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id");
   ADOQuery1->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id");
   ADOQuery1->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id");
   ADOQuery1->SQL->Add("where Speciality.Name = '" + Napr_search->Text + "'and subjects='" + Dissipl->Text + "' and semestr="+Semestr->Text);
   //ADOQuery1->SQL->Add("where Speciality.Name = '���������� ���������� �  �����������';");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

   if(!ADOQuery1->IsEmpty())
   {
	   audit->Clear();
	   audit->Text = ADOQuery1->FieldByName("In_Audience")->AsString;

	   lec->Clear();
	   lec->Text = ADOQuery1->FieldByName("Lecture_Hours")->AsString;

	   prac->Clear();
	   prac->Text = ADOQuery1->FieldByName("Practice_Hours")->AsString;

	   lab->Clear();
	   lab->Text = ADOQuery1->FieldByName("Lab_Hours")->AsString;

	   semenar->Clear();
	   semenar->Text = ADOQuery1->FieldByName("Semenars")->AsString;

	   sam->Clear();
	   sam->Text = ADOQuery1->FieldByName("Independent_Hours")->AsString;
   }
   else
   {
	   audit->Clear();
		   lec->Clear();
		   prac->Clear();
		   lab->Clear();
		   semenar->Clear();
		   sam->Clear();

		   audit->Text = "���������� ����";
		   lec->Text = "������";
		   prac->Text = "��������";
		   lab->Text = "������������";
		   semenar->Text = "��������";
		   sam->Text = "���������������";
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::deletClick(TObject *Sender)
{
int p = MessageDlg("�� ������������� ������ ������� ������ ����������?", mtConfirmation, TMsgDlgButtons() << mbOK << mbCancel, 0);
		if(p == mrOk)
		{
		   String deleteQuery = "DELETE FROM Dist WHERE Speciality_Id IN "
					 "(SELECT id FROM Speciality WHERE Name = '" + Napr_search->Text + "') "
					 "AND Name_Dist IN "
					 "(SELECT id FROM Subjects WHERE subjects = '" + Dissipl->Text + "') "
					 "AND Semestr = " + Semestr->Text;

		   ADOQuery1->Close();
		   ADOQuery1->SQL->Clear();
		   ADOQuery1->SQL->Add(deleteQuery);

		   try
		   {
			  ADOQuery1->ExecSQL();
			  ShowMessage("�������� ������ �������");
		   }
		   catch (Exception &e)
		   {
			  ShowMessage("������ ���������� �������: " + e.Message);
		   }


		   ADOQuery1->SQL->Clear();
		   ADOQuery1->SQL->Add("SELECT * FROM Dist ");
		   ADOQuery1->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id ");
		   ADOQuery1->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id ");
		   ADOQuery1->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id ");

		   try
		   {
			 ADOQuery1->Open();
		   }
		   catch (Exception &e)
		   {
			 ShowMessage("������ ���������� �������: " + e.Message);
		   }     audit->Clear();
		   lec->Clear();
		   prac->Clear();
		   lab->Clear();
		   semenar->Clear();
		   sam->Clear();

		   audit->Text = "���������� ����";
		   lec->Text = "������";
		   prac->Text = "��������";
		   lab->Text = "������������";
		   semenar->Text = "��������";
		   sam->Text = "���������������";





		   contr->Text = "����� ��������";


		   Semestr->Text = "������� ";

		   Dissipl->Text = "�������";

		   Napr_search->Text = "�����������";
		}


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1Resize(TObject *Sender)
{
int gap = 17; // ���������� ����� ������������
	int panelWidth = Panel1->ClientWidth;
	int panelHeight = Panel1->ClientHeight;

	// ������ ������� ��� �����������
	int comboBoxWidth = (panelWidth - 3 * gap - 2 * 185) / 2; // �������� ������ ������ � ����������
	int editWidth = (panelWidth - 3 * gap - 2 * 185) / 2; // �������� ������ ������ � ����������

	// ���������������� ComboBox'�� (����� �����)
	Napr_search->SetBounds(gap, gap, comboBoxWidth, Napr_search->Height);
	Dissipl->SetBounds(gap, Napr_search->Top + Napr_search->Height + gap, comboBoxWidth, Dissipl->Height);
	Semestr->SetBounds(gap, Dissipl->Top + Dissipl->Height + gap, comboBoxWidth / 2, Semestr->Height);
	contr->SetBounds(Semestr->Left + Semestr->Width + gap - 17, Semestr->Top, comboBoxWidth / 2, contr->Height);

	// ���������������� Edit'�� (����������� �����)
	audit->SetBounds(2 * gap + comboBoxWidth , gap, editWidth / 2, audit->Height);
	lec->SetBounds(2 * gap + comboBoxWidth, audit->Top + audit->Height + gap, editWidth / 2, lec->Height);
	prac->SetBounds(2 * gap + comboBoxWidth, lec->Top + lec->Height + gap, editWidth / 2, prac->Height);
	sam->SetBounds(prac->Left + prac->Width + gap, prac->Top, editWidth / 2, sam->Height);
	lab->SetBounds(audit->Left + audit->Width + gap, audit->Top, editWidth / 2, lab->Height);

	semenar->SetBounds(lec->Left + lec->Width + gap, lec->Top, editWidth / 2, semenar->Height);

	// ���������������� ������ (������ �����)
	int buttonWidth = 185;
	int buttonHeight = add->Height;

	add->SetBounds(3 * gap + 2 * comboBoxWidth, gap, buttonWidth, buttonHeight);
	update->SetBounds(3 * gap + 2 * comboBoxWidth + buttonWidth, gap, buttonWidth, buttonHeight);
	delet->SetBounds(3 * gap + 2 * comboBoxWidth, add->Top + add->Height, buttonWidth, buttonHeight);
	prepodWindow->SetBounds(3 * gap + 2 * comboBoxWidth + buttonWidth, add->Top + add->Height, buttonWidth, buttonHeight);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::addClick(TObject *Sender)
{
int p = MessageDlg("�������� ������ ����������?", mtConfirmation, TMsgDlgButtons() << mbOK << mbCancel, 0);
	  if(p == mrOk)
	  {
		   int cours;
		   if(StrToInt(Semestr->Text)%2 == 0) cours = StrToInt(Semestr->Text)/2;
		   else  cours = StrToInt(Semestr->Text)/2 + 1;

		   String auditor;
		   String lection;
		   String practic;
		   String labic;
		   String semenaric;
		   String samosto;

		   if(audit->Text != "") auditor = audit->Text;
		   else auditor = "NULL";

		   if(lec->Text != "") lection = lec->Text;
		   else lection = "NULL";

		   if(prac->Text != "") practic = prac->Text;
		   else practic = "NULL";

		   if(audit->Text != "") auditor = audit->Text;
		   else auditor = "NULL";

		   if(lab->Text != "") labic = lab->Text;
		   else labic = "NULL";

		   if(semenar->Text != "") semenaric = semenar->Text;
		   else semenaric = "NULL";

		   if(sam->Text != "") samosto = sam->Text;
		   else samosto = "NULL";


		   String addQuery = "use Practic_work\n"
							 "insert into Dist(Name_Dist, Semestr, Cours, Speciality_Id, Prepod_Id, In_Audience, Lecture_Hours, Practice_Hours, Lab_Hours, Semenars, Independent_Hours, Form_Of_Control)"
							 "values((SELECT id FROM Subjects WHERE subjects = '" + Dissipl->Text + "')," + Semestr->Text + "," + cours + ", (SELECT id FROM Speciality WHERE Name = '" + Napr_search->Text + "'), NULL," + auditor + "," + lection + "," + practic + "," + labic + "," + semenaric + "," + samosto + ", (SELECT id FROM Form_of_Control where name = '" + contr->Text + "'))";

		   ADOQuery1->Close();
		   ADOQuery1->SQL->Clear();
		   ADOQuery1->SQL->Add(addQuery);

		   try
		   {
			  ADOQuery1->ExecSQL();
			  ShowMessage("���������� ������ �������");
		   }
		   catch (Exception &e)
		   {
			  ShowMessage("������ ���������� �������: " + e.Message);
		   }


		   ADOQuery1->SQL->Clear();
		   ADOQuery1->SQL->Add("SELECT * FROM Dist ");
		   ADOQuery1->SQL->Add("JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.id ");
		   ADOQuery1->SQL->Add("JOIN Speciality ON Dist.Speciality_Id = Speciality.id ");
		   ADOQuery1->SQL->Add("JOIN Subjects ON Dist.Name_Dist = Subjects.id ");

		   try
		   {
			 ADOQuery1->Open();
		   }
		   catch (Exception &e)
		   {
			 ShowMessage("������ ���������� �������: " + e.Message);
		   }


		   audit->Clear();
		   lec->Clear();
		   prac->Clear();
		   lab->Clear();
		   semenar->Clear();
		   sam->Clear();

		   audit->Text = "���������� ����";
		   lec->Text = "������";
		   prac->Text = "��������";
		   lab->Text = "������������";
		   semenar->Text = "��������";
		   sam->Text = "���������������";



		   contr->Text = "����� ��������";


		   Semestr->Text = "������� ";


		   Dissipl->Text = "�������";

		   Napr_search->Text = "�����������";
	  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::updateClick(TObject *Sender)
{
int p = MessageDlg("�������� ������ ����������?", mtConfirmation, TMsgDlgButtons() << mbOK << mbCancel, 0);
if(p == mrOk)
{
	int cours;
	if(StrToInt(Semestr->Text) % 2 == 0)
		cours = StrToInt(Semestr->Text) / 2;
	else
		cours = StrToInt(Semestr->Text) / 2 + 1;

	String auditor;
	String lection;
	String practic;
	String labic;
	String semenaric;
	String samosto;

	if(audit->Text != "")
		auditor = audit->Text;
	else
		auditor = "NULL";

	if(lec->Text != "")
		lection = lec->Text;
	else
		lection = "NULL";

	if(prac->Text != "")
		practic = prac->Text;
	else
		practic = "NULL";

	if(lab->Text != "")
		labic = lab->Text;
	else
		labic = "NULL";

	if(semenar->Text != "")
		semenaric = semenar->Text;
	else
		semenaric = "NULL";

	if(sam->Text != "")
		samosto = sam->Text;
	else
		samosto = "NULL";

	String updateQuery = "use Practic_work\n"
						 "UPDATE Dist SET "
						 "Semestr = " + Semestr->Text + ", "
						 "Cours = " + cours + ", "
						 "In_Audience = " + auditor + ", "
						 "Lecture_Hours = " + lection + ", "
						 "Practice_Hours = " + practic + ", "
						 "Lab_Hours = " + labic + ", "
						 "Semenars = " + semenaric + ", "
						 "Independent_Hours = " + samosto + ", "
						 "Form_Of_Control = (SELECT id FROM Form_of_Control WHERE name = '" + contr->Text + "') "
						 "WHERE Name_Dist = (SELECT id FROM Subjects WHERE subjects = '" + Dissipl->Text + "') "
						 "AND Speciality_Id = (SELECT id FROM Speciality WHERE Name = '" + Napr_search->Text + "')";

	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add(updateQuery);

	try
	{
		ADOQuery1->ExecSQL();
		ShowMessage("��������� ������ �������");
	}
	catch (Exception &e)
	{
		ShowMessage("������ ���������� �������: " + e.Message);
	}

	// ������� ����� ����� ����� ���������
	audit->Clear();
	lec->Clear();
	prac->Clear();
	lab->Clear();
	semenar->Clear();
	sam->Clear();

	audit->Text = "���������� ����";
	lec->Text = "������";
	prac->Text = "��������";
	lab->Text = "������������";
	semenar->Text = "��������";
	sam->Text = "���������������";

	contr->Text = "����� ��������";
	Semestr->Text = "������� ";
	Dissipl->Text = "�������";
	Napr_search->Text = "�����������";
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::prepodWindowClick(TObject *Sender)
{
  Form3->Show();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid6DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State)
{

	/*
	TStringGrid *hGrid = dynamic_cast<TStringGrid*>(Sender);

	String Line1, Line2, Line3, Line4, Line5;

	int ptr = Pos(L'\n', hGrid->Cells[ACol][ARow]);
	Line3 = hGrid->Cells[ACol][ARow];

	if (ptr > 0)
	{
		Line1 = hGrid->Cells[ACol][ARow].SubString(1, ptr - 1);
		Line2 = hGrid->Cells[ACol][ARow].SubString(ptr + 1, hGrid->Cells[ACol][ARow].Length() - ptr);
	}
	else
	{
		Line1 = hGrid->Cells[ACol][ARow];
	}

	hGrid->Canvas->FillRect(Rect);

	// ��������� ������ ������
	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 2, Line1);

	if (ptr > 0)
	{
		// ��������� ������ ������
		hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + hGrid->Canvas->TextHeight(Line1) + 3, Line2);
	}



	ptr = Line3.Pos("\n");
	int ptr1=ptr+1;
	Line3.Delete(0,ptr1);
	ptr = Line3.Pos("\n");
	ptr1 = ptr1+ptr+1;
	Line3.Delete(0, ptr+1);
	ptr = Line3.Pos("\n");
	Line1 = hGrid->Cells[ACol][ARow].SubString(ptr1,ptr);
	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 35, Line1);



	Line3 = hGrid->Cells[ACol][ARow];
	ptr1=ptr+1;
	Line3.Delete(0,ptr+1);
	ptr = Pos(L'\n', Line3);
	Line3.Delete(0, ptr+1);
	ptr1=ptr1+ptr+1;
	ptr = Pos(L'\n', Line3);
	Line1 = hGrid->Cells[ACol][ARow].SubString(ptr1, ptr);
	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 55, Line1);
	*/




	TStringGrid *hGrid = dynamic_cast<TStringGrid*>(Sender);

	String Line1, Line2, Line3, Line4, Line5;

	int ptr = Pos(L'\n', hGrid->Cells[ACol][ARow]);
	int ptr1 = Pos(L';', hGrid->Cells[ACol][ARow]);

	Line1 = hGrid->Cells[ACol][ARow].SubString(1, ptr-1);
	Line2 = hGrid->Cells[ACol][ARow].SubString(ptr + 1, hGrid->Cells[ACol][ARow].Length() - ptr - hGrid->Cells[ACol][ARow].Length() + ptr1 - 1);

	ptr = Pos(L';', hGrid->Cells[ACol][ARow]);
	ptr1 = Pos(L':', hGrid->Cells[ACol][ARow]);

	Line3 = hGrid->Cells[ACol][ARow].SubString(ptr + 1, hGrid->Cells[ACol][ARow].Length() - ptr - hGrid->Cells[ACol][ARow].Length() + ptr1 - 1);

	ptr = Pos(L':', hGrid->Cells[ACol][ARow]);

	Line4 = hGrid->Cells[ACol][ARow].SubString(ptr + 1, hGrid->Cells[ACol][ARow].Length() - ptr);

	hGrid->Canvas->FillRect(Rect);

	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 2, Line1);

	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + hGrid->Canvas->TextHeight(Line1) + 3, Line2);

	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 35, Line3);

	hGrid->Canvas->TextOut(Rect.Left + 2, Rect.Top + 55, Line4);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox11DropDown(TObject *Sender)
{
int i, j;
	  bool pool;
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe");
	  ADOQuery1->Open();
	  ComboBox11->Items->Clear();
	  for(i=0; i<(ADOQuery1->RecordCount); i++)
	  {
		pool=true;
		for(j=0; j < ComboBox11->Items->Count; j++ )
		  if((ADOQuery1->FieldByName("Name")->AsString)==(ComboBox11->Items->Strings[j]))
		  {
		   pool=false;
		   break;
		  }
		if(pool) ComboBox11->Items->Add(ADOQuery1->FieldByName("Name")->AsString);
		ADOQuery1->Next();
	  }

	  ComboBox12->Text="����";

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox12DropDown(TObject *Sender)
{
int i, j;
	  bool pool;
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use project51");
	  ADOQuery1->SQL->Add("select * from Groupe where Groupe.Name = '" + ComboBox11->Text + "'");
	  ADOQuery1->Open();
	  ADOQuery1->First();
	  ComboBox12->Items->Clear();
	  for(i=0; i<ADOQuery1->RecordCount; i++)
	  {
		  pool = true;
		  for(j=0; j<ComboBox12->Items->Count; j++)
		  {
			if((ADOQuery1->FieldByName("cours")->AsString) == (ComboBox12->Items->Strings[j]))
			{
				pool=false;
				break;
			}
		  }
		  if(pool) ComboBox12->Items->Add(ADOQuery1->FieldByName("Cours")->AsString);
		  ADOQuery1->Next();
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("use project51");
	ADOQuery1->SQL->Add("select * from Rasp where year = '" + Edit22->Text + "'");
	ADOQuery1->Open();

	ADOQuery1->First();
	ListBox1->Clear(); // ������� ListBox ����� ����������� ����� ���������
	String reet;
	for (int i = 0; i < ADOQuery1->RecordCount; i++)
	{
		String week = ADOQuery1->FieldByName("week")->AsString;
		if (reet.Pos(week) <= 0) // �������� �� ������� ������ � ���������� reet
		{
			reet = reet + " " + week; // ���������� ������ � ���������� reet ��� �������� ������������
			ListBox1->Items->Add("������: " + week + " ���: " + ADOQuery1->FieldByName("year")->AsString); // ���������� ������ � ���� � ListBox
		}
		ADOQuery1->Next();
	}






}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
  for (int row = 0; row < StringGrid6->RowCount; ++row)
	   {
		  for (int col = 0; col < StringGrid6->ColCount; ++col)
		  {
			 StringGrid6->Cells[col][row] = ""; // ������������� �������� ������ � ������ ������
		  }
	   }

	   SpeedButton6->Caption="�����������";
	   SpeedButton7->Caption="�������";
	   SpeedButton8->Caption="�����";
	   SpeedButton9->Caption="�������";
	   SpeedButton10->Caption="�������";
	   SpeedButton11->Caption="�������";
	   SpeedButton12->Caption="�����������";

	  String top;
	  top = DateTimePicker4->Date;
	  top.Delete(1,6);
	  top.Delete(5,9);


	  /*
	  int semest = StrToInt(ComboBox13->Text);
	  int yo = StrToInt(top);
	  if(semest % 2 != 0) top = IntToStr(yo) + "-" + IntToStr(yo+1);
	  else top = IntToStr(yo-1) + "-" + IntToStr(yo);
	  //ShowMessage(top);
	  */

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe where name = '" + ComboBox11->Text + "' and cours = " + ComboBox12->Text);
	  ADOQuery1->Open();
	  String id_gr = ADOQuery1->FieldByName("id")->AsString;

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Rasp order by week");
	  ADOQuery1->Open();
	  ADOQuery1->Last();
	  String one = ADOQuery1->FieldByName("year")->AsString;
	  String two = ADOQuery1->FieldByName("week")->AsString;

	  if(Edit21->Text != "������")
	  {
		 ADOQuery1->Close();
		 ADOQuery1->SQL->Clear();
		 ADOQuery1->SQL->Add("use Practic_work");
		 ADOQuery1->SQL->Add("select * from Rasp where week = " + Edit21->Text + " and year = '" + Edit22->Text + "' and id_gr = " + id_gr);
		 ADOQuery1->Open();
	  }

	  else
	  {
		 ADOQuery1->Close();
		 ADOQuery1->SQL->Clear();
		 ADOQuery1->SQL->Add("use Practic_work");
		 ADOQuery1->SQL->Add("select * from Rasp where week = " + two + " and year = '" + one + "' and id_gr = " + id_gr);
		 ADOQuery1->Open();
	  }

	  int i,j;
	  String day, info, id;
	  i = ADOQuery1->RecordCount;
	  for(int i=0; i<ADOQuery1->RecordCount; i++)
	  {
		 id = ADOQuery1->FieldByName("id_pred")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select * from Subjects where id = " + id + " ");
		 ADOQuery2->Open();
		 info = ADOQuery2->FieldByName("subjects")->AsString;

		 String id = ADOQuery1->FieldByName("id_prep")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		ADOQuery2->SQL->Add("use Practic_work");
		ADOQuery2->SQL->Add("select * from Prepods where id = " + id);
		ADOQuery2->Open();

		// �������� ������ � �������������
		String lastName = ADOQuery2->FieldByName("Last_name")->AsString;
		String firstName = ADOQuery2->FieldByName("First_name")->AsString;
		String middleName = ADOQuery2->FieldByName("Name")->AsString;

		 info = info + "\n" + firstName + " " + middleName.SubString(1, 1) + "." + lastName.SubString(1, 1) + ".";
		 info = info + ";" + ADOQuery1->FieldByName("tipe")->AsString;

		 id = ADOQuery1->FieldByName("id_kabin")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select * from Kabin where id = " + id);
		 ADOQuery2->Open();
		 info = info + ":" + ADOQuery2->FieldByName("room")->AsString;

		 day = ADOQuery1->FieldByName("week_day")->AsString;

		 //ShowMessage(info);

		 String dst2,dst3;
		 dst2 = ADOQuery1->FieldByName("data")->AsString;
		 //ListBox1->Items->Strings[0] = dst2;
		 /*
		 dst2 = StringReplace(dst2, "-", ".", TReplaceFlags()<<rfReplaceAll);
		 dst3 = dst2.SubString(6,2);
		 dst2.Delete(5,3);
		 dst2 = dst3 + "." + dst2;
		 dst3 = dst2.SubString(9,2);
		 dst2.Delete(8,3);
		 dst2 = dst3 + "." + dst2;
		 dst2.Delete(6,5);
		 //Edit23->Text = dst2;
		 */

		 if(day == "�����������")
		 {
			 SpeedButton6->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[0][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton7->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[1][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�����")
		 {
			 SpeedButton8->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[2][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton9->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[3][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton10->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[4][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton11->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[5][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�����������")
		 {
			 SpeedButton12->Caption = day + "\n" + dst2;
			 StringGrid6->Cells[6][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }

		 ADOQuery1->Next();
	  }



}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button10Click(TObject *Sender)
{
ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Rasp where year = '" + Edit13->Text + "'");
   ADOQuery1->Open();

   ADOQuery1->First();
   Edit14->Clear();
   String reet;
   for(int i=0; i<ADOQuery1->RecordCount; i++)
   {
	   //Edit23->Text =  Edit23->Text + " " + ADOQuery1->FieldByName("week")->AsString;
	   int op = reet.Pos(ADOQuery1->FieldByName("week")->AsString);
	   if ( op <= 0) reet =  reet + " " + ADOQuery1->FieldByName("week")->AsString;
	   ADOQuery1->Next();
   }
   Edit14->Text = "������ ������: " + reet;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	  for (int row = 0; row < StringGrid3->RowCount; ++row)
	   {
		  for (int col = 0; col < StringGrid3->ColCount; ++col)
		  {
			 StringGrid3->Cells[col][row] = ""; // ������������� �������� ������ � ������ ������
		  }
	   }

	  SpeedButton18->Caption="�����������";
	  SpeedButton19->Caption="�������";
	  SpeedButton20->Caption="�����";
	  SpeedButton21->Caption="�������";
	  SpeedButton22->Caption="�������";
	  SpeedButton23->Caption="�������";
	  SpeedButton24->Caption="�����������";

	  String top;
	  top = DateTimePicker2->Date;
	  top.Delete(1,6);
	  top.Delete(5,9);

	  int semest = StrToInt(ComboBox6->Text);
	  int yo = StrToInt(top);
	  if(semest % 2 != 0) top = IntToStr(yo) + "-" + IntToStr(yo+1);
	  else top = IntToStr(yo-1) + "-" + IntToStr(yo);
	  //ShowMessage(top);

	  delet_year = top;

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe where name = '" + ComboBox4->Text + "' and cours = " + ComboBox5->Text);
	  ADOQuery1->Open();

	  String id_gr = ADOQuery1->FieldByName("id")->AsString;

	  if(Edit12->Text == "" || Edit12->Text == "����� ������")
	  {
		  ADOQuery1->Close();
		  ADOQuery1->SQL->Clear();
		  ADOQuery1->SQL->Add("use Practic_work");
		  ADOQuery1->SQL->Add("select * from Rasp where week = " + Edit7->Text + " and year = '" + top + "' and id_gr = " + id_gr);
		  ADOQuery1->Open();
	  }
	  else
	  {
		   ADOQuery1->Close();
		   ADOQuery1->SQL->Clear();
		   ADOQuery1->SQL->Add("use Practic_work");
		   ADOQuery1->SQL->Add("select * from Rasp where week = " + Edit12->Text + " and year = '" + top + "' and id_gr = " + id_gr);
		   ADOQuery1->Open();
	  }


	  int i,j;
	  String day, info, id;
	  for(int i=0; i<ADOQuery1->RecordCount; i++)
	  {
		 id = ADOQuery1->FieldByName("id_pred")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select * from Subjects where id = " + id + " ");
		 ADOQuery2->Open();
		 info = ADOQuery2->FieldByName("subjects")->AsString;

		 String id = ADOQuery1->FieldByName("id_prep")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		ADOQuery2->SQL->Add("use Practic_work");
		ADOQuery2->SQL->Add("select * from Prepods where id = " + id);
		ADOQuery2->Open();

		// �������� ������ � �������������
		String lastName = ADOQuery2->FieldByName("Last_name")->AsString;
		String firstName = ADOQuery2->FieldByName("First_name")->AsString;
		String middleName = ADOQuery2->FieldByName("Name")->AsString;

		 info = info + "\n" + firstName + " " + middleName.SubString(1, 1) + "." + lastName.SubString(1, 1) + ".";
		 info = info + ";" + ADOQuery1->FieldByName("tipe")->AsString;

		 id = ADOQuery1->FieldByName("id_kabin")->AsString;
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select * from Kabin where id = " + id);
		 ADOQuery2->Open();
		 info = info + ":" + ADOQuery2->FieldByName("room")->AsString;

		 day = ADOQuery1->FieldByName("week_day")->AsString;
		 String dst2,dst3;
		 dst2 = ADOQuery1->FieldByName("data")->AsString;

		 /*
		 dst2 = StringReplace(dst2, "-", ".", TReplaceFlags()<<rfReplaceAll);
		 dst3 = dst2.SubString(6,2);
		 dst2.Delete(5,3);
		 dst2 = dst3 + "." + dst2;
		 dst3 = dst2.SubString(9,2);
		 dst2.Delete(8,3);
		 dst2 = dst3 + "." + dst2;
		 dst2.Delete(6,5);
		 */

		 if(day == "�����������")
		 {
			 SpeedButton18->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[0][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton19->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[1][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�����")
		 {
			 SpeedButton20->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[2][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton21->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[3][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton22->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[4][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�������")
		 {
			 SpeedButton23->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[5][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }
		 else if(day == "�����������")
		 {
			 SpeedButton24->Caption = day + "\n" + dst2;
			 StringGrid3->Cells[6][(ADOQuery1->FieldByName("para")->AsInteger)-1] = info;
		 }

		 ADOQuery1->Next();
	  }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid3SelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{
if(StringGrid3->Cells[ACol][ARow] == "")
	 {
		 Edit8->Text=IntToStr(ARow+1)+"-�� ����";
		 int g = ACol+1;
		 switch(g)
		 {
		   case 1:
		   Edit6->Text = "�����������";
		   break;
		   case 2:
		   Edit6->Text="�������";
		   break;
		   case 3:
		   Edit6->Text="�����";
		   break;
		   case 4:
		   Edit6->Text="�������";
		   break;
		   case 5:
		   Edit6->Text="�������";
		   break;
		   case 6:
		   Edit6->Text="�������";
		   break;
		   case 7:
		   Edit6->Text="�����������";
		   break;
		 }

	 }
	 else
	 {

		 reep = StringGrid3->Cells[ACol][ARow];
		 int puk = reep.Pos('\n');
		 int puk1 = Pos(L';', reep);

		 String name_pred = reep.SubString(1, puk-1);

		 String name_prep = reep.SubString(puk + 1, reep.Length() - puk - reep.Length() + puk1 - 1);

		 puk = Pos(L';', reep);
		 puk1 = Pos(L':', reep);

		 String name_vid = reep.SubString(puk + 1, reep.Length() - puk - reep.Length() + puk1 - 1);

		 puk = Pos(L':', reep);
		 String name_kabin = reep.SubString(puk + 1, reep.Length() - puk);

		 //Memo1->Lines->Add(name_pred);
		 //Memo1->Lines->Add(name_prep);
		 //Memo1->Lines->Add(name_vid);
		 //Memo1->Lines->Add(name_kabin);

		 String par_1;
		 switch(ARow)
		 {
			 case 0:
			 par_1 = "1";
			 break;
			 case 1:
			 par_1 = "2";
			 break;
			 case 2:
			 par_1 = "3";
			 break;
			 case 3:
			 par_1 = "4";
			 break;
			 case 4:
			 par_1 = "5";
			 break;
		 }

		 //Edit8->Text = par_1;

		 String week_day, date_1;
		 switch(ACol)
		 {
			 case 0:
			 week_day = "�����������";
			 date_1 = SpeedButton18->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 1:
			 week_day = "�������";
			 date_1 = SpeedButton19->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 2:
			 week_day = "�����";
			 date_1 = SpeedButton20->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 3:
			 week_day = "�������";
			 date_1 = SpeedButton21->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 4:
			 week_day = "�������";
			 date_1 = SpeedButton22->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 5:
			 week_day = "�������";
			 date_1 = SpeedButton23->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
			 case 6:
			 week_day = "�����������";
			 date_1 = SpeedButton24->Caption;
			 date_1.Delete(1,week_day.Length());
			 break;
		 }

		 //Memo1->Lines->Add(week_day);
		 //Memo1->Lines->Add(date_1);

		 String dst2 = date_1.SubString(5,2);
		 date_1.Delete(4,3);
		 date_1 = dst2 + "." + date_1;
		 //Memo1->Lines->Add(date_1);
		 date_1 = StringReplace(date_1, "\n", "", TReplaceFlags()<<rfReplaceAll);
		 //ShowMessage(date_1);


		 ADOQuery1->Close();
		 ADOQuery1->SQL->Clear();
		 ADOQuery1->SQL->Add("use Practic_work");
		 ADOQuery1->SQL->Add("select * from Rasp where data = '" + date_1 + "' and year = '" + delet_year + "'");
		 ShowMessage(ADOQuery1->SQL->Text);
		 ADOQuery1->Open();
		 String week_1 = ADOQuery1->FieldByName("week")->AsString;

		 String hoop = "13";
		 // ������ ���������� name, ���������� ������ ������� � ������ ����� ����� � ��������
		String fullName = name_prep;

		// ���������� ������ �� ������� � ��������
		int spacePos = fullName.Pos(" ");
		String lastName = fullName.SubString(1, spacePos - 1); // �������
		String initials = fullName.SubString(spacePos + 1, fullName.Length() - spacePos); // ��������

		// ���������� ��������� �� ��� � ��������
		String firstInitial = initials.SubString(1, 1);
		String middleInitial = initials.SubString(3, 1); // ������������, ��� ����� ����� ���� ������ � �����

		// SQL-������ � ������ ������� � ������ ���� ����� � ��������
		ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("use Practic_work");
		ADOQuery1->SQL->Add("select Rasp.*, Kabin.room, Prepods.Last_name, Prepods.First_name, Prepods.Name, Subjects.subjects as SubjectName, dist.Semestr, Groupe.name as GroupName, Groupe.cours");
		ADOQuery1->SQL->Add("from Rasp");
		ADOQuery1->SQL->Add("inner join Kabin on Rasp.id_kabin = Kabin.id");
		ADOQuery1->SQL->Add("inner join Prepods on Rasp.id_prep = Prepods.id");
		ADOQuery1->SQL->Add("inner join Groupe on Rasp.id_gr = Groupe.id");
		ADOQuery1->SQL->Add("inner join Subjects on Rasp.id_pred = Subjects.id");
		ADOQuery1->SQL->Add("inner join dist on Rasp.id_pred = dist.Name_Dist");
		ADOQuery1->SQL->Add("where para = " + par_1 +
							" and week_day = '" + week_day + "'" +
							" and week = " + week_1 +
							" and data = '" + date_1 + "'" +
							" and year = '" + delet_year + "'" +
							" and Prepods.First_name = '" + lastName + "'" +
							" and LEFT(Prepods.Name, 1) = '" + firstInitial + "'" +
							" and LEFT(Prepods.Last_name, 1) = '" + middleInitial + "'" +
							" and Subjects.subjects = '" + name_pred + "'" +
							" and Rasp.tipe = '" + name_vid + "'" +
							" and Kabin.room = " + name_kabin +
							" and Groupe.name = '" + ComboBox4->Text + "'" +
							" and dist.Semestr = " + ComboBox6->Text +
							" and Groupe.cours = " + ComboBox5->Text);
		ShowMessage(ADOQuery1->SQL->Text);
		ADOQuery1->Open();



		 delet_id = ADOQuery1->FieldByName("id")->AsString;
		 Edit8->Text = delet_id;

	 }

	 //Memo1->Lines->Clear();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox4DropDown(TObject *Sender)
{
int i, j;
	  bool pool;
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe");
	  ADOQuery1->Open();
	  ComboBox4->Items->Clear();
	  for(i=0; i<(ADOQuery1->RecordCount); i++)
	  {
		pool=true;
		for(j=0; j < ComboBox4->Items->Count; j++ )
		  if((ADOQuery1->FieldByName("Name")->AsString)==(ComboBox4->Items->Strings[j]))
		  {
		   pool=false;
		   break;
		  }
		if(pool) ComboBox4->Items->Add(ADOQuery1->FieldByName("Name")->AsString);
		ADOQuery1->Next();
	  }

	  ComboBox5->Text="����";

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox5DropDown(TObject *Sender)
{
	  int i, j;
	  bool pool;
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe where Groupe.Name = '" + ComboBox4->Text + "'");
	  ADOQuery1->Open();
	  ADOQuery1->First();
	  ComboBox5->Items->Clear();
	  for(i=0; i<ADOQuery1->RecordCount; i++)
	  {
		  pool = true;
		  for(j=0; j<ComboBox5->Items->Count; j++)
		  {
			if((ADOQuery1->FieldByName("cours")->AsString) == (ComboBox5->Items->Strings[j]))
			{
				pool=false;
				break;
			}
		  }
		  if(pool) ComboBox5->Items->Add(ADOQuery1->FieldByName("Cours")->AsString);
		  ADOQuery1->Next();
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox6DropDown(TObject *Sender)
{
   int g = StrToInt(ComboBox5->Text);
   switch(g)
   {
	   //ShowMessage(StrToInt(ComboBox5->Text));
	   case 1:
	   ComboBox6->Items->Clear();
	   ComboBox6->Items->Add("1");
	   ComboBox6->Items->Add("2");
	   break;
	   case 2:
	   ComboBox6->Items->Clear();
	   ComboBox6->Items->Add("3");
	   ComboBox6->Items->Add("4");
	   break;
	   case 3:
	   ComboBox6->Items->Clear();
	   ComboBox6->Items->Add("5");
	   ComboBox6->Items->Add("6");
	   break;
	   case 4:
	   ComboBox6->Items->Clear();
	   ComboBox6->Items->Add("7");
	   ComboBox6->Items->Add("8");
	   break;

   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1DropDown(TObject *Sender)
{
// �������� �������� �� ��������������� ComboBox
String groupName = ComboBox4->Text;
String course = ComboBox5->Text;
String semester = ComboBox6->Text;

ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT s.subjects");
ADOQuery1->SQL->Add("FROM Dist d");
ADOQuery1->SQL->Add("JOIN Groupe g ON d.Speciality_Id = g.spec");
ADOQuery1->SQL->Add("JOIN subjects s ON d.Name_Dist = s.id");
ADOQuery1->SQL->Add("WHERE g.Name = :GroupName AND d.Cours = :Course AND d.Semestr = :Semester");
ADOQuery1->Parameters->ParamByName("GroupName")->Value = groupName;
ADOQuery1->Parameters->ParamByName("Course")->Value = course;
ADOQuery1->Parameters->ParamByName("Semester")->Value = semester;
ADOQuery1->Open();

ComboBox1->Items->Clear();
while (!ADOQuery1->Eof) {
	ComboBox1->Items->Add(ADOQuery1->FieldByName("subjects")->AsString);
	ADOQuery1->Next();
}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button12Click(TObject *Sender)
{
Edit13->Text = "���";
  Edit14->Text = "������ ������:";
  Edit12->Text = "����� ������";
  ComboBox4->Text = "������";
  ComboBox5->Text = "����";
  ComboBox6->Text = "�������";
  ComboBox1->Text = "�������";
  ComboBox2->Text = "������";
  ComboBox3->Text = "�������";
  Edit6->Text = "���� ������";
  Edit7->Text = "������";
  Edit8->Text = "����";
  Edit9->Text = "������������ �������";
  Edit11->Text = "����� ��������";
  Edit15->Text = "��� �������";
  Memo1->Text = "��������� ���� ��� ����������, �����)";

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox2DropDown(TObject *Sender)
{

	  String dst2, dst3, year, top;
	  top = DateTimePicker2->Date;
	  top.Delete(1,6);
	  top.Delete(5,9);
	  dst2 = DateTimePicker2->Date;
	  dst3 = dst2.SubString(4,2);
	  dst2.Delete(3,3);
	  dst2 = dst3 + "." + dst2;
	  dst2.Delete(11,9);
	  dst3=dst2;
	  dst3.Delete(3,8);
	  int dst33, week;
	  dst33 = StrToInt(dst3);
	  //Edit6->Text = dst33;
	  year = Edit8->Text.Delete(2,8);

	  int semest = StrToInt(ComboBox6->Text);
	  int yo = StrToInt(top);
	  if(semest % 2 != 0) top = IntToStr(yo) + "-" + IntToStr(yo+1);
	  else top = IntToStr(yo-1) + "-" + IntToStr(yo);

	  ADOQuery2->Close();
	  ADOQuery2->SQL->Clear();
	  ADOQuery2->SQL->Add("use Practic_work");
	  ADOQuery2->SQL->Add("select Dist.*, Subjects.*");
	  ADOQuery2->SQL->Add("from Dist");
	  ADOQuery2->SQL->Add("inner join Subjects on Dist.Name_Dist = Subjects.id");
	  ADOQuery2->SQL->Add("where subjects = '" + ComboBox1->Text + "' and Dist.Semestr = " + ComboBox6->Text);
	  //ShowMessage(ADOQuery2->SQL->Text);
	  ADOQuery2->Open();
	  String id_pred = ADOQuery2->FieldByName("Name_Dist")->AsString;

	  ADOQuery2->Close();
	  ADOQuery2->SQL->Clear();
	  ADOQuery2->SQL->Add("use Practic_work");
	  ADOQuery2->SQL->Add("select * from Dist_With_Prepod");
	  ADOQuery2->SQL->Add("where Dist_With_Prepod.Name_Dist = " + id_pred);
	  //ShowMessage(ADOQuery2->SQL->Text);
	  ADOQuery2->Open();
	  String id_prep = ADOQuery2->FieldByName("Prepod_Id")->AsString;

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select Rasp.*, Kabin.room, Prepods.name, Subjects.subjects, Groupe.name");
	  ADOQuery1->SQL->Add("from Rasp");
	  ADOQuery1->SQL->Add("inner join Kabin on Rasp.id_kabin=Kabin.id");
	  ADOQuery1->SQL->Add("inner join Subjects on Rasp.id_pred = Subjects.id");
	  ADOQuery1->SQL->Add("inner join Prepods on Rasp.id_prep = Prepods.id");
	  ADOQuery1->SQL->Add("inner join Groupe on Rasp.id_gr = Groupe.id");
	  ADOQuery1->SQL->Add("where para = " + year + " and week_day = '" + Edit6->Text + "' and week = " + Edit7->Text + " and data = '" + dst2 + "' and year = '" + top + "' and id_prep = " + id_prep);
	  //ShowMessage(ADOQuery1->SQL->Text);
	  ADOQuery1->Open();

	  if(!ADOQuery1->IsEmpty())
	  {

			// �������� id ������ �� ADOQuery1
			String id_gr = ADOQuery1->FieldByName("id_gr")->AsString;

			// ������� ����� ������ ��� ��������� �������� �� ������� Groupe
			ADOQuery3->Close();
			ADOQuery3->SQL->Clear();
			ADOQuery3->SQL->Add("use Practic_work");
			ADOQuery3->SQL->Add("SELECT spec, cours FROM Groupe WHERE id = " + id_gr);
			ADOQuery3->Open();

			// �������� �������� �� ���������� �������
			String id_spec = ADOQuery3->FieldByName("spec")->AsString;
			String course = ADOQuery3->FieldByName("cours")->AsString;

			// ���������� ���������� �������� ��� ��������� ������� � ������� dist
			String id_pred = ADOQuery1->FieldByName("id_pred")->AsString;
			String id_prep = ADOQuery1->FieldByName("id_prep")->AsString;

			ADOQuery2->Close();
			ADOQuery2->SQL->Clear();
			ADOQuery2->SQL->Add("use Practic_work");
			ADOQuery2->SQL->Add("SELECT * FROM Dist_With_Prepod d");
			ADOQuery2->SQL->Add("WHERE Name_Dist = " + id_pred);
			ADOQuery2->SQL->Add("AND Speciality_Id = " + id_spec);
			ADOQuery2->SQL->Add("AND Cours = " + course);
			ADOQuery2->SQL->Add("AND Prepod_Id <> " + id_prep);
			ADOQuery2->Open();



		  String ur;

		  ComboBox2->Clear();
		  for(int i=0; i<ADOQuery2->RecordCount; i++)
		  {
			 ADOQuery3->Close();
			 ADOQuery3->SQL->Clear();
			 ADOQuery3->SQL->Add("use Practic_work");
			 ADOQuery3->SQL->Add("select * Prepods where id = " + ADOQuery2->FieldByName("id_prep")->AsString);
			 ADOQuery3->Open();
			 ComboBox2->Items->Add(ADOQuery3->FieldByName("Name")->AsString);
			 ADOQuery2->Next();
		  }
	  }
	  else
	  {
		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select Dist_With_Prepod.*, Subjects.* from Dist_With_Prepod");
		 ADOQuery2->SQL->Add("inner join Subjects on Dist_With_Prepod.Name_Dist = Subjects.id");
		 ADOQuery2->SQL->Add("where Subjects.subjects = '" + ComboBox1->Text + "' and Dist_With_Prepod.Semestr = " + ComboBox6->Text);
		 ADOQuery2->Open();
		 String hp = ADOQuery2->FieldByName("Name_Dist")->AsString;

		 ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select * from groupe");
		 ADOQuery2->SQL->Add("where name = '" + ComboBox4->Text + "' and cours = " + ComboBox5->Text);
		 ADOQuery2->Open();
		 String hd = ADOQuery2->FieldByName("id")->AsString;

					 // �������� id ������ �� ADOQuery1
			String id_gr = hd;

			// ������� ����� ������ ��� ��������� �������� �� ������� Groupe
			ADOQuery3->Close();
			ADOQuery3->SQL->Clear();
			ADOQuery3->SQL->Add("use Practic_work");
			ADOQuery3->SQL->Add("SELECT spec, cours FROM Groupe WHERE id = " + id_gr);
			ADOQuery3->Open();

			// �������� �������� �� ���������� �������
			String id_spec = ADOQuery3->FieldByName("spec")->AsString;
			String course = ADOQuery3->FieldByName("cours")->AsString;

			// ���������� ��� �������� � ����� �������� �������
			String id_pred = hp;

			ADOQuery2->Close();
			ADOQuery2->SQL->Clear();
			ADOQuery2->SQL->Add("use Practic_work");
			ADOQuery2->SQL->Add("SELECT d.*");
			ADOQuery2->SQL->Add("FROM Dist_With_Prepod d");
			ADOQuery2->SQL->Add("WHERE d.Name_Dist = " + id_pred);
			ADOQuery2->SQL->Add("AND d.Speciality_Id = " + id_spec);
			ADOQuery2->SQL->Add("AND d.Semestr = " + ComboBox6->Text);
			ADOQuery2->SQL->Add("AND d.Cours = " + course);
			//ShowMessage(ADOQuery2->SQL->Text);
			ADOQuery2->Open();


		  ComboBox2->Clear();
		  for(int i=0; i<ADOQuery2->RecordCount; i++)
		  {
				ADOQuery3->Close();
				ADOQuery3->SQL->Clear();
				ADOQuery3->SQL->Add("use Practic_work");
				ADOQuery3->SQL->Add("select * from Prepods where id = " + ADOQuery2->FieldByName("Prepod_Id")->AsString);
				// ShowMessage(ADOQuery3->SQL->Text);
				ADOQuery3->Open();

				// ���������� ��������
				String firstName = ADOQuery3->FieldByName("First_name")->AsString;
				String name = ADOQuery3->FieldByName("Name")->AsString;
				String lastName = ADOQuery3->FieldByName("Last_name")->AsString;

				// �������������� ������: First_name, ������ ����� Name, ������ ����� Last_name
				String formattedName = firstName + " " + name.SubString(1, 1) + "." + lastName.SubString(1, 1) + ".";

				// ���������� ������ � ComboBox
				ComboBox2->Items->Add(formattedName);

				ADOQuery2->Next();

		  }
	  }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox3DropDown(TObject *Sender)
{
	  String top;
	  top = DateTimePicker2->Date;
	  top.Delete(1,6);
	  top.Delete(5,9);
	  int yo = StrToInt(top);
	  int semest = StrToInt(ComboBox6->Text);
	  if(semest % 2 != 0) top = IntToStr(yo) + "-" + IntToStr(yo+1);
	  else top = IntToStr(yo-1) + "-" + IntToStr(yo);

	  String fullName = ComboBox2->Text;
	  int spacePos = fullName.Pos(" ");
	  String lastName = fullName.SubString(1, spacePos - 1); // �������
	  String initials = fullName.SubString(spacePos + 1, fullName.Length() - spacePos); // ��������

		// ���������� ��������� �� ��� � ��������
	  String firstInitial = initials.SubString(1, 1);
	  String middleInitial = initials.SubString(3, 1);

			// ��������� ������
			ADOQuery1->Close();
			ADOQuery1->SQL->Clear();
			ADOQuery1->SQL->Add("use Practic_work");
			ADOQuery1->SQL->Add("select * from Prepods where First_name = '" + lastName + "' AND Name LIKE '" + firstInitial + "%' AND Last_name LIKE '" + middleInitial + "%'");
			//ShowMessage(ADOQuery1->SQL->Text);
			ADOQuery1->Open();


	  String id_prepod = ADOQuery1->FieldByName("id")->AsString;

	  ADOQuery2->Close();
		 ADOQuery2->SQL->Clear();
		 ADOQuery2->SQL->Add("use Practic_work");
		 ADOQuery2->SQL->Add("select Dist_With_Prepod.*, Subjects.* from Dist_With_Prepod");
		 ADOQuery2->SQL->Add("inner join Subjects on Dist_With_Prepod.Name_Dist = Subjects.id");
		 ADOQuery2->SQL->Add("where Subjects.subjects = '" + ComboBox1->Text + "' and Dist_With_Prepod.Semestr = " + ComboBox6->Text);
		 ADOQuery2->Open();

	  String id_predmet = ADOQuery2->FieldByName("Name_Dist")->AsString;

	  /*int lec = ADOQuery1->FieldByName("Lec")->AsInteger;
	  int prac = ADOQuery1->FieldByName("Prac")->AsInteger;
	  int lec_1=0, prac_1=0;
	  */

	  GetFilledHours(ADOQuery2);

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select * from Groupe where name = '" + ComboBox4->Text + "' and cours = " + ComboBox5->Text);
	  ADOQuery1->Open();

	  String id_gr = ADOQuery1->FieldByName("id")->AsString;

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("SELECT [spec], [cours]");
		ADOQuery1->SQL->Add("FROM [Practic_work].[dbo].[Groupe]"); // �������� �� ���� ������� ������
		ADOQuery1->SQL->Add("WHERE [id] = " + id_gr);
		ADOQuery1->Open();
			// �������� �������� ������������� � �����
			String specialityId = ADOQuery1->FieldByName("spec")->AsString;
			String course = ADOQuery1->FieldByName("cours")->AsString;
	  /*
			ADOQuery1->Close();
			ADOQuery1->SQL->Clear();
			ADOQuery1->SQL->Add("USE Practic_work");
			ADOQuery1->SQL->Add("SELECT TOP 1000 [id], [Name_Dist], [Semestr], [Cours], [Speciality_Id], [Prepod_Id], [In_Audience], [Lecture_Hours], [Practice_Hours], [Lab_Hours], [Semenars], [Independent_Hours], [Form_Of_Control], [Control_Hours]");
			ADOQuery1->SQL->Add("FROM [Practic_work].[dbo].[Dist_With_Prepod]");
			ADOQuery1->SQL->Add("WHERE [Speciality_Id] = " + specialityId + " AND [Cours] = " + course + " AND [Prepod_Id] = " + id_prepod + "AND [Name_Dist] = " + id_predmet);
			ShowMessage(ADOQuery1->SQL->Text);
			ADOQuery1->Open();


	 std::map<String, int> totalHours;
	if (!ADOQuery1->Eof) {
		totalHours["Lecture_Hours"] = ADOQuery1->FieldByName("Lecture_Hours")->AsInteger;
		totalHours["Practice_Hours"] = ADOQuery1->FieldByName("Practice_Hours")->AsInteger;
		totalHours["Lab_Hours"] = ADOQuery1->FieldByName("Lab_Hours")->AsInteger;
		totalHours["Semenars"] = ADOQuery1->FieldByName("Semenars")->AsInteger;
	}


	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("USE Practic_work");
	ADOQuery1->SQL->Add("SELECT [tipe]");
	ADOQuery1->SQL->Add("FROM [Practic_work].[dbo].[Rasp]");
	ADOQuery1->SQL->Add("WHERE [id_pred] = " + id_predmet + " AND [id_prep] = " + id_prepod + " AND [id_gr] = " + id_gr + " AND [year] = " + "'" + top + "'");
	ADOQuery1->Open();

	// ������� ��� �������������� ���� �� ������� � ����������
	std::map<String, String> typeTranslation;
	typeTranslation["��������"] = "Practice_Hours";
	typeTranslation["������"] = "Lecture_Hours";
	typeTranslation["������������"] = "Lab_Hours";
	typeTranslation["�������"] = "Semenars";

	// ���������� ��� ���������� ����������� �����
	std::map<String, int> filledHours;

	 // �������� �� ������� � ��������� ����������� ����
	while (!ADOQuery1->Eof) {
		String type = ADOQuery1->FieldByName("tipe")->AsString;

		// ��������� ��� �� ������� � ����������
		std::map<String, String>::iterator it = typeTranslation.find(type);
		if (it != typeTranslation.end()) {
			String englishType = it->second;

			// ����������� ���������� ����� �� ������ ����
			if (totalHours.find(englishType) != totalHours.end()) {
				filledHours[englishType] += 2; // ���������� ���� �������
			}
		}
		ADOQuery1->Next();
	}

	 typeTranslation["�������"] = "Semenars";

    // ���������� ���������
    String result;
    for (std::map<String, int>::iterator it = totalHours.begin(); it != totalHours.end(); ++it) {
        String key = it->first;
        int total = it->second;

        // ���������, ��� ���������� ����� ������ ����
        if (total > 0) {
            // ������� ��������������� ������� ���
            String russianType;
            for (std::map<String, String>::iterator transIt = typeTranslation.begin(); transIt != typeTranslation.end(); ++transIt) {
                if (transIt->second == key) {
                    russianType = transIt->first;
                    break;
                }
            }

            // ��������� ���������� ����
            int filled = (filledHours.find(key) != filledHours.end()) ? filledHours[key] : 0;
			int remaining = total - filled;

			if (remaining > 0) {
				result += russianType + ": " + IntToStr(remaining) + " �����\n";
			}
		}
	}

	// ������� ��������� � Edit9
	Edit9->Text = "���������� ����:\n" + result;
	*/

	// ������� SQL � ����������� ������ ��� ��������� ������ ���������� �����
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("USE Practic_work");
	ADOQuery1->SQL->Add("SELECT [Lecture_Hours], [Practice_Hours], [Lab_Hours], [Semenars]");
	ADOQuery1->SQL->Add("FROM [Practic_work].[dbo].[Dist_With_Prepod]");
	ADOQuery1->SQL->Add("WHERE [Speciality_Id] = " + specialityId + " AND [Cours] = " + course + " AND [Prepod_Id] = " + id_prepod);
	ADOQuery1->Open();

	// �������� ������ �� Dist_With_Prepod
	int totalLectureHours = 0;
	int totalPracticeHours = 0;
	int totalLabHours = 0;
	int totalSemenars = 0;

	if (!ADOQuery1->Eof) {
		totalLectureHours = ADOQuery1->FieldByName("Lecture_Hours")->AsInteger;
		totalPracticeHours = ADOQuery1->FieldByName("Practice_Hours")->AsInteger;
		totalLabHours = ADOQuery1->FieldByName("Lab_Hours")->AsInteger;
		totalSemenars = ADOQuery1->FieldByName("Semenars")->AsInteger;
	}

	// ��������� � ������� ������
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();

	// ������� ������ ��� ��������� ����������� �����
	ADOQuery1->SQL->Add("USE Practic_work");
	ADOQuery1->SQL->Add("SELECT [tipe]");
	ADOQuery1->SQL->Add("FROM [Practic_work].[dbo].[Rasp]");
	ADOQuery1->SQL->Add("WHERE [id_pred] = " + id_predmet + " AND [id_prep] = " + id_prepod + " AND [id_gr] = " + id_gr);
	ADOQuery1->Open();

	// ���������� ��� ���������� ����������� �����
	int filledLectureHours = 0;
	int filledPracticeHours = 0;
	int filledLabHours = 0;
	int filledSemenars = 0;

	// ������� ��� �������������� ���� �� ������� � ����������
	std::map<String, String> typeTranslation;
	typeTranslation["��������"] = "Practice_Hours";
	typeTranslation["������"] = "Lecture_Hours";
	typeTranslation["������������"] = "Lab_Hours";
	typeTranslation["�������"] = "Semenars";

	// �������� �� ������� � ��������� ����������� ����
	while (!ADOQuery1->Eof) {
		String type = ADOQuery1->FieldByName("tipe")->AsString;

		// ��������� ��� �� ������� � ����������
		std::map<String, String>::iterator it = typeTranslation.find(type);
		if (it != typeTranslation.end()) {
			String englishType = it->second;

			// ����������� ���������� ����� �� ������ ����
			if (englishType == "Practice_Hours") {
				filledPracticeHours += 2; // ���������� ���� �������
			} else if (englishType == "Lecture_Hours") {
				filledLectureHours += 2;
			} else if (englishType == "Lab_Hours") {
				filledLabHours += 2;
			} else if (englishType == "Semenars") {
				filledSemenars += 2;
			}
		}
		ADOQuery1->Next();
	}

	// ��������� � ������� ������
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();

	// ��������� ���������� ���� �� ������ ������
	String result;

	if (totalLectureHours > 0) {
		int remaining = totalLectureHours - filledLectureHours;
		if (remaining > 0) {
			result += "������: " + IntToStr(remaining) + " �����\n";
		}
	}

	if (totalPracticeHours > 0) {
		int remaining = totalPracticeHours - filledPracticeHours;
		if (remaining > 0) {
			result += "������������: " + IntToStr(remaining) + " �����\n";
		}
	}

	if (totalLabHours > 0) {
		int remaining = totalLabHours - filledLabHours;
		if (remaining > 0) {
			result += "������������: " + IntToStr(remaining) + " �����\n";
		}
	}

	if (totalSemenars > 0) {
		int remaining = totalSemenars - filledSemenars;
		if (remaining > 0) {
			result += "��������: " + IntToStr(remaining) + " �����\n";
		}
	}

	// ������� ��������� � Edit9
	Edit9->Text = "���������� ����:\n" + result;

	  String dst2, dst3, year;
	  dst2 = DateTimePicker2->Date;
	  dst3 = dst2.SubString(4,2);
	  dst2.Delete(3,3);
	  dst2 = dst3 + "." + dst2;
	  dst2.Delete(11,9);
	  dst3=dst2;
	  dst3.Delete(3,8);
	  int dst33, week;
	  dst33 = StrToInt(dst3);
	  //Edit6->Text = dst33;
	  year = Edit8->Text.Delete(2,8);

	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
	  ADOQuery1->SQL->Add("use Practic_work");
	  ADOQuery1->SQL->Add("select Rasp.*, Kabin.room, Prepods.name, Subjects.subjects, Groupe.name");
	  ADOQuery1->SQL->Add("from Rasp");
	  ADOQuery1->SQL->Add("inner join Kabin on Rasp.id_kabin=Kabin.id");
	  ADOQuery1->SQL->Add("inner join Subjects on Rasp.id_pred = Subjects.id");
	  ADOQuery1->SQL->Add("inner join Prepods on Rasp.id_prep = Prepods.id");
	  ADOQuery1->SQL->Add("inner join Groupe on Rasp.id_gr = Groupe.id");
	  ADOQuery1->SQL->Add("where para = " + year + " and week_day = '" + Edit6->Text + "' and week = " + Edit7->Text + " and data = '" + dst2 + "' and year = '" + top + "'");
	  ADOQuery1->SQL->Add("order by id_kabin asc");
	  //ShowMessage(ADOQuery1->SQL->Text);
	  ADOQuery1->Open();
	  bool pool =  !ADOQuery1->IsEmpty();

	   if(pool)
	  {
		  ADOQuery2->Close();
		  ADOQuery2->SQL->Clear();
		  ADOQuery2->SQL->Add("use Practic_work");
		  ADOQuery2->SQL->Add("select * from Kabin");
		  ADOQuery2->Open();

		  ComboBox3->Clear();
		  for(int i=0; i<ADOQuery2->RecordCount; i++)
		  {
			   if(ADOQuery1->FieldByName("id_kabin")->AsString != ADOQuery2->FieldByName("id")->AsString) ComboBox3->Items->Add(ADOQuery2->FieldByName("room")->AsString);
			   else if(ADOQuery1->FieldByName("id_kabin")->AsString == ADOQuery2->FieldByName("id")->AsString) ADOQuery1->Next();
			   ADOQuery2->Next();
		  }
	  }
	  else
	  {
		  ADOQuery2->Close();
		  ADOQuery2->SQL->Clear();
		  ADOQuery2->SQL->Add("use Practic_work");
		  ADOQuery2->SQL->Add("select * from Kabin");
		  ADOQuery2->Open();

		  ComboBox3->Clear();
		  for(int i=0; i<ADOQuery2->RecordCount; i++)
		  {
			   ComboBox3->Items->Add(ADOQuery2->FieldByName("room")->AsString);
			   ADOQuery2->Next();
		  }

	  }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
int result = MessageDlg("������������� ������ ������� ������ ������?", mtConfirmation, TMsgDlgButtons() << mbOK << mbCancel, 0);
   if (result == mrOk)
	{

	   ADOQuery1->Close();
	   ADOQuery1->SQL->Clear();
	   ADOQuery1->SQL->Add("use Practic_work");
	   ADOQuery1->SQL->Add("delete from Rasp where id = " + delet_id);
	   ADOQuery1->ExecSQL();

	   Memo1->Text = "���������� �� ���� ���� ������:)";

	   Button9Click(Sender);
	}
   else Memo1->Text = "���������� �� �������:)";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
  String top;
	  top = DateTimePicker2->Date;
	  top.Delete(1,6);
	  top.Delete(5,9);
	  int yo = StrToInt(top);
	  int semest = StrToInt(ComboBox6->Text);
	  if(semest % 2 != 0) top = IntToStr(yo) + "-" + IntToStr(yo+1);
	  else top = IntToStr(yo-1) + "-" + IntToStr(yo);

	  String dst2, dst3, year;
	  dst2 = DateTimePicker2->Date;
	  dst3 = dst2.SubString(4,2);
	  dst2.Delete(3,3);
	  dst2 = dst3 + "." + dst2;
	  dst2.Delete(11,9);
	  dst3=dst2;
	  dst3.Delete(3,8);
	  int dst33, week;
	  dst33 = StrToInt(dst3);
	  //Edit6->Text = dst33;
	  year = Edit8->Text.Delete(2,8);

	  String fullName = ComboBox2->Text;
	  int spacePos = fullName.Pos(" ");
	  String lastName = fullName.SubString(1, spacePos - 1); // �������
	  String initials = fullName.SubString(spacePos + 1, fullName.Length() - spacePos); // ��������

		// ���������� ��������� �� ��� � ��������
	  String firstInitial = initials.SubString(1, 1);
	  String middleInitial = initials.SubString(3, 1);

	// ��������� SQL-������
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("USE Practic_work");
	ADOQuery1->SQL->Add("SELECT Rasp.*, Kabin.room, Prepods.*, Subjects.*, Dist_With_Prepod.semestr, Groupe.name, Groupe.cours");
	ADOQuery1->SQL->Add("FROM Rasp");
	ADOQuery1->SQL->Add("INNER JOIN Kabin ON Rasp.id_kabin = Kabin.id");
	ADOQuery1->SQL->Add("INNER JOIN Subjects ON Rasp.id_pred = Subjects.id");
	ADOQuery1->SQL->Add("INNER JOIN Prepods ON Rasp.id_prep = Prepods.id");
	ADOQuery1->SQL->Add("INNER JOIN Groupe ON Rasp.id_gr = Groupe.id");
	ADOQuery1->SQL->Add("INNER JOIN Dist_With_Prepod ON Rasp.id_pred = Dist_With_Prepod.Name_Dist");
	ADOQuery1->SQL->Add("WHERE para = " + year +
						" AND week_day = '" + Edit6->Text +
						"' AND week = " + Edit7->Text +
						" AND data = '" + dst2 +
						"' AND year = '" + top +
						"' AND room = " + ComboBox3->Text +
						" AND Prepods.First_Name = '" + lastName +
						"' AND Prepods.Name LIKE '" + firstInitial +
						"%' AND Prepods.Last_Name LIKE '" + middleInitial +
						"%' AND Subjects.subjects ='" + ComboBox1->Text +
						"' AND Dist_With_Prepod.Semestr = " + ComboBox6->Text +
						" AND Groupe.name = '" + ComboBox4->Text +
						"' AND Groupe.cours = " + ComboBox5->Text +
						" AND Rasp.tipe ='" + Edit15->Text + "'");
	//ShowMessage(ADOQuery1->SQL->Text);
	ADOQuery1->Open();


	  if(!ADOQuery1->IsEmpty())
	  {
		   Memo1->Clear();
		   Memo1->Lines->Add("!!!��������!!!");
		   Memo1->Lines->Add("� ���������� ��� ���� ��� ������, ������������� ������ � � ��������� ����)");
	  }
	  else
	  {

		   ADOQuery1->Close();
			ADOQuery1->SQL->Clear();
			ADOQuery1->SQL->Add("USE Practic_work");
			ADOQuery1->SQL->Add("SELECT Rasp.*, Kabin.room, Prepods.*, Subjects.*, Dist_With_Prepod.semestr, Groupe.name, Groupe.cours");
			ADOQuery1->SQL->Add("FROM Rasp");
			ADOQuery1->SQL->Add("INNER JOIN Kabin ON Rasp.id_kabin = Kabin.id");
			ADOQuery1->SQL->Add("INNER JOIN Subjects ON Rasp.id_pred = Subjects.id");
			ADOQuery1->SQL->Add("INNER JOIN Prepods ON Rasp.id_prep = Prepods.id");
			ADOQuery1->SQL->Add("INNER JOIN Groupe ON Rasp.id_gr = Groupe.id");
			ADOQuery1->SQL->Add("INNER JOIN Dist_With_Prepod ON Rasp.id_pred = Dist_With_Prepod.Name_Dist");
			ADOQuery1->SQL->Add("WHERE para = " + year +
								" AND week_day = '" + Edit6->Text +
								"' AND week = " + Edit7->Text +
								" AND data = '" + dst2 +
								"' AND year = '" + top +
								"' AND Prepods.First_Name = '" + lastName +
								"' AND Prepods.Name LIKE '" + firstInitial +
								"%' AND Prepods.Last_Name LIKE '" + middleInitial + "%'");
			ShowMessage(ADOQuery1->SQL->Text);
			ADOQuery1->Open();
				   if(!ADOQuery1->IsEmpty())
		   {
			  Memo1->Lines->Add("!!!��������!!!");
			  Memo1->Lines->Add("� ���������� ���� ����� � ����� ������������� ��� ���� �������, ������������� ������");
		   }
		   else
		   {
			  ADOQuery1->Close();
				ADOQuery1->SQL->Clear();
				ADOQuery1->SQL->Add("USE Practic_work");
				ADOQuery1->SQL->Add("SELECT Rasp.*, Kabin.room, Prepods.*, Subjects.*, Dist_With_Prepod.semestr, Groupe.name, Groupe.cours");
				ADOQuery1->SQL->Add("FROM Rasp");
				ADOQuery1->SQL->Add("INNER JOIN Kabin ON Rasp.id_kabin = Kabin.id");
				ADOQuery1->SQL->Add("INNER JOIN Subjects ON Rasp.id_pred = Subjects.id");
				ADOQuery1->SQL->Add("INNER JOIN Prepods ON Rasp.id_prep = Prepods.id");
				ADOQuery1->SQL->Add("INNER JOIN Groupe ON Rasp.id_gr = Groupe.id");
				ADOQuery1->SQL->Add("INNER JOIN Dist_With_Prepod ON Rasp.id_pred = Dist_With_Prepod.Name_Dist");
				ADOQuery1->SQL->Add("WHERE para = " + year +
									" AND week_day = '" + Edit6->Text +
									"' AND week = " + Edit7->Text +
									" AND data = '" + dst2 +
									"' AND year = '" + top +
									"' AND room = " + ComboBox3->Text);
				//ShowMessage(ADOQuery1->SQL->Text);
				ADOQuery1->Open();


			  if(!ADOQuery1->IsEmpty())
			  {
				 Memo1->Lines->Add("!!!��������!!!");
				 Memo1->Lines->Add("������ ������� � ��� ���� ���� ����� ��� �����, ������������� ���� ������)");
			  }
			  else
			  {
				 ADOQuery1->Close();
				 ADOQuery1->SQL->Clear();
				 ADOQuery1->SQL->Add("use Practic_work");
				 ADOQuery1->SQL->Add("select * from Prepods where Prepods.First_Name = '" + lastName +
								"' AND Prepods.Name LIKE '" + firstInitial +
								"%' AND Prepods.Last_Name LIKE '" + middleInitial + "%'");
				 ShowMessage(ADOQuery1->SQL->Text);
				 ADOQuery1->Open();
				 String id_prepod = ADOQuery1->FieldByName("id")->AsString;

				 ADOQuery1->Close();
				 ADOQuery1->SQL->Clear();
				 ADOQuery1->SQL->Add("use Practic_work");
				 ADOQuery1->SQL->Add("select * from Subjects where subjects = '" + ComboBox1->Text + "'");
				 ADOQuery1->Open();
				 String id_predmet = ADOQuery1->FieldByName("id")->AsString;

				 ADOQuery1->Close();
				 ADOQuery1->SQL->Clear();
				 ADOQuery1->SQL->Add("use Practic_work");
				 ADOQuery1->SQL->Add("select * from Groupe where name = '" + ComboBox4->Text + "' and cours = " + ComboBox5->Text);
				 ADOQuery1->Open();
				 String id_gr = ADOQuery1->FieldByName("id")->AsString;

				 ADOQuery1->Close();
				 ADOQuery1->SQL->Clear();
				 ADOQuery1->SQL->Add("use Practic_work");
				 ADOQuery1->SQL->Add("select * from kabin where room = " + ComboBox3->Text);
				 ADOQuery1->Open();
				 String id_kabinet = ADOQuery1->FieldByName("id")->AsString;

				 String prac = Edit9->Text;
				 prac.Delete(1,32);


				 ADOQuery1->Close();
				 ADOQuery1->SQL->Clear();
				 ADOQuery1->SQL->Add("use Practic_work");
				 ADOQuery1->SQL->Add("select * from Rasp where week = " + Edit7->Text + " and week_day = '" + Edit6->Text + "' and id_gr = " + id_gr + " and para = " + year);
				 ADOQuery1->Open();

				 if(!ADOQuery1->IsEmpty())
				 {
					 Memo1->Lines->Add("!!!��������!!!");
					 Memo1->Lines->Add("� �������� � ���� ������ ��� ���� ����� ���� ������, ������������� ����� ������)");

				 }

				 else
				 {
					/*
					ADOQuery1->Close();
					ADOQuery1->SQL->Clear();
					ADOQuery1->SQL->Add("use project51");
					ADOQuery1->SQL->Add("select * from Rasp where year = '" + top + "' and data = '" + dst2 + "' and week =" + Edit7->Text + " and id_gr = " + id_gr);
					ADOQuery1->Open();
					*/
					if(FormatDateTime("dddd",DateTimePicker2->Date) != Edit6->Text)
					{
					   Memo1->Text = "��������� ����, ���� ������ � ���� �� �����������, ��� ��� ��� ����� ��������� � ���� ����";
					}
					else
					{
							 ADOQuery1->Close();
							 ADOQuery1->SQL->Clear();
							 ADOQuery1->SQL->Add("use Practic_work");
							 ADOQuery1->SQL->Add("insert into Rasp (id_kabin, data, week, year, week_day, id_pred, id_prep, id_gr, para, tipe)");
							 ADOQuery1->SQL->Add("values(" + id_kabinet + ", '" + dst2 + "', " + Edit7->Text + ", '" + top + "', '" + Edit6->Text + "', " + id_predmet + ", " + id_prepod + ", " + id_gr + ", " + year + ", '" + Edit15->Text + "' )");
							 ADOQuery1->ExecSQL();

							 Button9Click(Sender);
					}
				 }
			  }
		   }
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
	  String query = "use Practic_work "
				   "select DISTINCT Rasp.*, Kabin.room, Prepods.*, Subjects.*, Groupe.*, Speciality.* "
                   "from Rasp "
                   "inner join Kabin on Rasp.id_kabin = Kabin.id "
                   "inner join Subjects on Rasp.id_pred = Subjects.id "
                   "inner join Prepods on Rasp.id_prep = Prepods.id "
                   "inner join Groupe on Rasp.id_gr = Groupe.id "
                   "inner join Speciality on Speciality.id = Groupe.spec "
				   "where 1=1"; // ��������� ������� ��� ��������� ���������� ������ �������

    // �������� ���������� �������������
    if (ComboBox21->Text != "������" && !ComboBox21->Text.IsEmpty())
    {
        try
        {
            ADOQuery1->Close();
            ADOQuery1->SQL->Clear();
            ADOQuery1->SQL->Add("select id from Prepods where name = '" + ComboBox21->Text + "'");
            ADOQuery1->Open();

            if (!ADOQuery1->IsEmpty())
            {
                String prepodId = ADOQuery1->FieldByName("id")->AsString;
                query += " and Rasp.id_prep = " + prepodId;
            }
        }
        catch (Exception &e)
        {
            ShowMessage("������ ��������� ID �������������: " + e.Message);
        }
    }

    // �������� ��������� ������
    if (ComboBox23->Text != "������" && !ComboBox23->Text.IsEmpty())
    {
        try
        {
            ADOQuery1->Close();
            ADOQuery1->SQL->Clear();
            ADOQuery1->SQL->Add("select id from Groupe where name = '" + ComboBox23->Text + "'");
            ADOQuery1->Open();

            if (!ADOQuery1->IsEmpty())
            {
                String groupId = ADOQuery1->FieldByName("id")->AsString;
                query += " and Rasp.id_gr = " + groupId;
            }
        }
        catch (Exception &e)
        {
            ShowMessage("������ ��������� ID ������: " + e.Message);
        }
    }

    // �������� ���������� �����
    if (ComboBox26->Text != "����" && !ComboBox26->Text.IsEmpty())
    {
        String course = ComboBox26->Text;  // ���������� �� ComboBox26
        query += " and Groupe.cours = " + course;
    }

    // �������� ��������� ���� � ��������� � ����������� �����
    TDateTime selectedDate = DateTimePicker7->Date;
    TDateTime currentDate = Date();

    if (selectedDate == currentDate)
    {
        String dateStr = DateToStr(selectedDate);
        query += " and Rasp.data = '" + dateStr + "'";
    }

    // �������� ������ ������
    if (!Edit1->Text.IsEmpty())
    {
        try
        {
            int weekNumber = Edit1->Text.ToInt(); // �������� ����� ������ �� Edit1
            query += " and Rasp.week = " + IntToStr(weekNumber); // ��������� ������� �� ������
        }
        catch (...)
        {
            ShowMessage("����������, ������� ���������� �������� ��� ������.");
        }
    }

    // �������� � ���������� ��������� �������
    try
    {
        //ShowMessage(query);
        ADOQuery4->Close();
        ADOQuery4->SQL->Clear();
        ADOQuery4->SQL->Add(query);
        ADOQuery4->Open();
    }
    catch (Exception &e)
    {
        ShowMessage("������ ���������� �������: " + e.Message);
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button32Click(TObject *Sender)
{
		Form4->frxReport1->Preview = Form4->frxPreview1;
		Form4->frxReport1->PrepareReport();
		Form4->frxReport1->ShowReport();
		Form4->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
   Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Form6->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
  Form8->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button40Click(TObject *Sender)
{
   Form9->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button41Click(TObject *Sender)
{
  Form10->Show();
}
//---------------------------------------------------------------------------


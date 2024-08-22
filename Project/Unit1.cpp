//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{


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
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	const int numColumns = 7;

	int totalWidth = StringGrid3->Width-10;
	int columnWidth = totalWidth / numColumns;

	StringGrid3->ColCount = numColumns;
	for (int i = 0; i < numColumns; i++) StringGrid3->ColWidths[i] = columnWidth;

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


;		   Dissipl->Text = "�������";

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

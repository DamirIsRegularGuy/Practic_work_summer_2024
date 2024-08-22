//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

String selectedLetter = "";
int selectedTeacherId;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::CheckListBox1Click(TObject *Sender)
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
	ADOQueryPrepods->Close();
	ADOQueryPrepods->SQL->Clear();
	ADOQueryPrepods->SQL->Add("select * from Prepods");
	ADOQueryPrepods->SQL->Add("JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id");
	ADOQueryPrepods->SQL->Add("order by First_name");
	ADOQueryPrepods->Open();

	// ����������� ����� �� ������ ������, ������������ � ��������� �����
	ADOQueryPrepods->First();
	while (!ADOQueryPrepods->Eof)
	{
		String surname = ADOQueryPrepods->FieldByName("First_name")->AsString;
		if (surname.Length() > 0 && surname[1] == selectedLetter[1])
		{
			// ���������� ����� �� ������ ������, ������������ � ���� �����
			ADOQueryPrepods->Bookmark = ADOQueryPrepods->GetBookmark();
			break;
		}
		ADOQueryPrepods->Next();
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm5::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
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
void __fastcall TForm5::Button1Click(TObject *Sender)
{
 // ���������� ��� �������� ID �������
	int KaphedraID;

	// ��������� � ������� ADOQuery ����� ������� ������ �������
	ADOQueryPrepods->Close();
	ADOQueryPrepods->SQL->Clear();

	// ������ ��� ��������� ID ������� �� �����
	ADOQueryPrepods->SQL->Text = "SELECT id FROM Kaphedra WHERE Name = :KaphedraName";
	ADOQueryPrepods->Parameters->ParamByName("KaphedraName")->Value = VarToStr(Edit5->Text);

	try
	{
		ADOQueryPrepods->Open();
		if (!ADOQueryPrepods->Eof)
		{
			KaphedraID = ADOQueryPrepods->FieldByName("id")->AsInteger;
		}
		else
		{
			ShowMessage("������� � ����� ������ �� �������.");
			return;
		}
		ADOQueryPrepods->Close();
	}
	catch (const Exception &e)
	{
		ShowMessage("������ ��� ������ �������: " + e.Message);
		return;
	}

	// ������ ��� ���������� ������ �������������
	ADOQueryPrepods->SQL->Text =
		"INSERT INTO Prepods (First_name, Name, Last_name, Faculty, Kaphedra, Position, Adress, Phone, Email) "
		"VALUES (:First_name, :Name, :Last_name, :Faculty, :Kaphedra, :Position, :Adress, :Phone, :Email)";

	// ������������� ��������� ��� �������
	ADOQueryPrepods->Parameters->ParamByName("First_name")->Value = VarToStr(Edit1->Text);
	ADOQueryPrepods->Parameters->ParamByName("Name")->Value = VarToStr(Edit2->Text);
	ADOQueryPrepods->Parameters->ParamByName("Last_name")->Value = VarToStr(Edit3->Text);
	ADOQueryPrepods->Parameters->ParamByName("Faculty")->Value = VarToStr(Edit4->Text);
	ADOQueryPrepods->Parameters->ParamByName("Kaphedra")->Value = KaphedraID;
	ADOQueryPrepods->Parameters->ParamByName("Position")->Value = VarToStr(Edit6->Text);
	ADOQueryPrepods->Parameters->ParamByName("Adress")->Value = VarToStr(Edit7->Text);
	ADOQueryPrepods->Parameters->ParamByName("Phone")->Value = VarToStr(Edit8->Text);
	ADOQueryPrepods->Parameters->ParamByName("Email")->Value = VarToStr(Edit9->Text);

	try
	{
		ADOQueryPrepods->ExecSQL();
		ShowMessage("������������� ������� ��������.");

		ADOQueryPrepods->Close();
	ADOQueryPrepods->SQL->Clear();
	ADOQueryPrepods->SQL->Add("select * from Prepods");
	ADOQueryPrepods->SQL->Add("JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id");
	ADOQueryPrepods->SQL->Add("order by First_name");
	ADOQueryPrepods->Open();
	}
	catch (const Exception &e)
	{
		ShowMessage("������ ��� ���������� �������������: " + e.Message);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::DBGrid1CellClick(TColumn *Column)
{
	selectedTeacherId = ADOQueryPrepods->FieldByName("id")->AsInteger;
	Edit1->Text = ADOQueryPrepods->FieldByName("First_name")->AsString;
	Edit2->Text = ADOQueryPrepods->FieldByName("Name")->AsString;
	Edit3->Text = ADOQueryPrepods->FieldByName("Last_name")->AsString;
	Edit4->Text = ADOQueryPrepods->FieldByName("Faculty")->AsString;
	Edit5->Text = ADOQueryPrepods->FieldByName("Name_1")->AsString;
	Edit6->Text = ADOQueryPrepods->FieldByName("Position")->AsString;
	Edit7->Text = ADOQueryPrepods->FieldByName("Adress")->AsString;
	Edit8->Text = ADOQueryPrepods->FieldByName("Phone")->AsString;
	Edit9->Text = ADOQueryPrepods->FieldByName("Email")->AsString;

}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
	if (selectedTeacherId > 0)
	{
		ADOQueryPrepods->Close();
		ADOQueryPrepods->SQL->Clear();
		ADOQueryPrepods->SQL->Add("DELETE FROM Prepods WHERE id = :id");
		ADOQueryPrepods->Parameters->ParamByName("id")->Value = selectedTeacherId;
		ADOQueryPrepods->ExecSQL();

		// �������� ���� ��� ����������� ���������
	ADOQueryPrepods->Close();
	ADOQueryPrepods->SQL->Clear();
	ADOQueryPrepods->SQL->Add("select * from Prepods");
	ADOQueryPrepods->SQL->Add("JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id");
	ADOQueryPrepods->SQL->Add("order by First_name");
	ADOQueryPrepods->Open();

		// �������� Edit ����������
		Edit1->Clear();
		Edit2->Clear();
		Edit3->Clear();
		Edit4->Clear();
		Edit5->Clear();
		Edit6->Clear();
		Edit7->Clear();
		Edit8->Clear();
		Edit9->Clear();

		ShowMessage("������������� ������� ������.");
	}
	else
	{
		ShowMessage("����������, �������� ������������� ��� ��������.");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
	// �������� ���������� ���������� � �������� SQL-������
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("use Practic_work");
	ADOQuery1->SQL->Add("select * from Rasp");
	ADOQuery1->Open();

	// ��������� � ��������� ������ � ������ ������
	ADOQuery1->Last(); // ��������� � ��������� ������

	// ��������� ����� ������ �� ��������� ������
	int lastWeekNumber = ADOQuery1->FieldByName("week")->AsInteger;
	String needyear = ADOQuery1->FieldByName("year")->AsString;


// �������� �������� ������, ��������� ����� ������
   String query = "use Practic_work "
			   "select DISTINCT Rasp.*, Kabin.room, Prepods.*, Subjects.*, Groupe.* "
               "from Rasp "
               "inner join Kabin on Rasp.id_kabin = Kabin.id "
               "inner join Subjects on Rasp.id_pred = Subjects.id "
               "inner join Prepods on Rasp.id_prep = Prepods.id "
			   "inner join Groupe on Rasp.id_gr = Groupe.id "
			   "inner join Speciality on Speciality.id = Groupe.spec "
			   "WHERE Prepods.id = " + IntToStr(selectedTeacherId) + " "
               "AND Rasp.week = " + IntToStr(lastWeekNumber) + " "
               "AND Rasp.year = '" + needyear + "' "
			   "ORDER BY Rasp.data";


	ShowMessage(query);
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add(query);

	ADOQuery1->Open();

	Form11->frxReport1->Preview = Form11->frxPreview1;
	Form11->frxReport1->PrepareReport();
	Form11->frxReport1->ShowReport();
	Form11->ShowModal();

}
//---------------------------------------------------------------------------

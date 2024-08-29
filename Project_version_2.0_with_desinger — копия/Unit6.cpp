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
	// ���������, ��� ������� �����
	if (CheckListBox1->ItemIndex != -1) {
		String selectedLetter = CheckListBox1->Items->Strings[CheckListBox1->ItemIndex].UpperCase();

		// ��������� ������ �������, ��������������� ��������� �����
		TDataSet *dataSet = DBGrid1->DataSource->DataSet;

		dataSet->First();
		while (!dataSet->Eof) {
			String subjectName = dataSet->FieldByName("Subjects")->AsString; // �������� "SubjectFieldName" �� ��� ������ ����

			// ���������, ��������� �� ������ ����� �������� � ��������� ������
			if (!subjectName.IsEmpty() && subjectName.UpperCase().SubString(1, 1) == selectedLetter) {
				// ���������� ����� �� ��������� �������
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

	// ���������, ��� ������� ��� ������
	if (CheckListBox1->ItemIndex != -1)
	{
		// ������� ����� � ��������� ���������
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


	// �������� ��������� ����� �� CheckListBox (���� �������)
	String selectedLetter;
	if (CheckListBox1->ItemIndex != -1) {
		selectedLetter = CheckListBox1->Items->Strings[CheckListBox1->ItemIndex].UpperCase();
    }

    // �������� �������� ������� ������
    String subjectName = Column->Field->AsString;

    // ���������, ��������� �� ������ ����� �������� � ��������� ������
    if (!selectedLetter.IsEmpty() && !subjectName.IsEmpty() && subjectName.UpperCase().SubString(1, 1) == selectedLetter) {
        // �������� ���� ���� ��� ������
		DBGrid1->Canvas->Brush->Color = clPurple; // ���� ����
        DBGrid1->Canvas->Font->Color = clBlack; // ���� ������
    }
    else {
        // ��������������� ����������� �����
		DBGrid1->Canvas->Brush->Color = clBlack;
		DBGrid1->Canvas->Font->Color = clWhite;
	}

    // ��������� ������ � ���������� �������
	DBGrid1->DefaultDrawColumnCell(Rect, DataCol, Column, State);

}
//---------------------------------------------------------------------------
void __fastcall TForm6::AddButtonClick(TObject *Sender)
{
      if(RegistrationRoot != "�����")
   {
  // �������� �������� �� TEdit
	String newItem = Edit1->Text.Trim();

	// ���������, ��� �������� �� ������
	if (!newItem.IsEmpty()) {
		TADOQuery *adoQuery = ADOQuery1; // �������� ADOQuery1 �� ��� ������ TADOQuery

		// ��������� ������ ��� ����������
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("INSERT INTO Subjects (subjects) VALUES (:NewItem)"); // �������� �� ���� ��� ������� � ����
		adoQuery->Parameters->ParamByName("NewItem")->Value = newItem;
		adoQuery->ExecSQL(); // ��������� ������

		// ��������� ������ � DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Subjects order by subjects"); // �������� �� ��� SQL ������ ��� �������� ������
		adoQuery->Open();

		// ������� ���� TEdit
		Edit1->Clear();
	} else {
		ShowMessage("������� �������� ��������.");
	}
    }else{
			ShowMessage("����� �� ����� ������������ ������ ����������");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DeleteButtonClick(TObject *Sender)
{
        if(RegistrationRoot != "�����")
   {

  String itemToDelete = Edit1->Text.Trim();

	// ���������, ��� �������� �� ������
	if (!itemToDelete.IsEmpty()) {
		TADOQuery *adoQuery = ADOQuery1; // �������� ADOQuery1 �� ��� ������ TADOQuery

		// ��������� ������ ��� ��������
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("DELETE FROM Subjects WHERE subjects = :ItemToDelete"); // �������� �� ���� ��� ������� � ����
		adoQuery->Parameters->ParamByName("ItemToDelete")->Value = itemToDelete;
		adoQuery->ExecSQL(); // ��������� ������

		// ��������� ������ � DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Subjects order by subjects"); // �������� �� ��� SQL ������ ��� �������� ������
		adoQuery->Open();

		// ������� ���� TEdit
		Edit1->Clear();
	} else {
		ShowMessage("������� �������� ��������.");
	}
    }else{
			ShowMessage("����� �� ����� ������������ ������ ����������");
}

}
//---------------------------------------------------------------------------
void __fastcall TForm6::DBGrid1CellClick(TColumn *Column)
{
  if (!ADOQuery1->IsEmpty()) {
		String selectedItem = ADOQuery1->FieldByName("subjects")->AsString; // �������� "SubjectFieldName" �� ��� ������ ����
		Edit1->Text = selectedItem;
	}
}
//---------------------------------------------------------------------------



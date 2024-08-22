//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::DBGrid1CellClick(TColumn *Column)
{
	// �������� �������� �� ��������� ������ � DBGrid
	if (!ADOQuery1->IsEmpty()) {
		String room = ADOQuery1->FieldByName("room")->AsString; // �������� "room" �� ��� ������ ����
		String tipe = ADOQuery1->FieldByName("tipe")->AsString; // �������� "tipe" �� ��� ������ ����

		// ������������� �������� � Edit
		EditRoom->Text = room;
		EditTipe->Text = tipe;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button2Click(TObject *Sender)
{
  // �������� �������� �� TEdit
    String room = EditRoom->Text.Trim();
    String tipe = EditTipe->Text.Trim();

    // ���������, ��� �������� �� ������
    if (!room.IsEmpty() && !tipe.IsEmpty()) {
        TADOQuery *adoQuery = ADOQuery1; // �������� ADOQuery1 �� ��� ������ TADOQuery

        // ��������� ������ ��� ��������
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("DELETE FROM Kabin WHERE room = :Room AND tipe = :Tipe"); // �������� �� ���� ��� ������� � ����
		adoQuery->Parameters->ParamByName("Room")->Value = room;
		adoQuery->Parameters->ParamByName("Tipe")->Value = tipe;
		adoQuery->ExecSQL(); // ��������� ������

		// ��������� ������ � DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Kabin order by room"); // �������� �� ��� SQL ������ ��� �������� ������
		adoQuery->Open();

		// ������� ���� TEdit
		EditRoom->Clear();
		EditTipe->Clear();
	} else {
		ShowMessage("�������� ������ ��� ��������.");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
   // �������� �������� �� TEdit
	String room = EditRoom->Text.Trim();
	String tipe = EditTipe->Text.Trim();

	// ���������, ��� �������� �� ������
	if (!room.IsEmpty() && !tipe.IsEmpty()) {
		TADOQuery *adoQuery = ADOQuery1; // �������� ADOQuery1 �� ��� ������ TADOQuery

		// ��������� ������ ��� ����������
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("INSERT INTO Kabin (room, tipe) VALUES (:Room, :Tipe)"); // �������� �� ���� ��� ������� � ����
		adoQuery->Parameters->ParamByName("Room")->Value = room;
		adoQuery->Parameters->ParamByName("Tipe")->Value = tipe;
		adoQuery->ExecSQL(); // ��������� ������

		// ��������� ������ � DBGrid
		adoQuery->Close();
		adoQuery->SQL->Clear();
		adoQuery->SQL->Add("SELECT * FROM Kabin order by room"); // �������� �� ��� SQL ������ ��� �������� ������
        adoQuery->Open();

        // ������� ���� TEdit
        EditRoom->Clear();
        EditTipe->Clear();
    } else {
        ShowMessage("��������� ��� ����.");
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;

 String yo, timeer;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{

	this->Constraints->MinWidth = this->Width;
	this->Constraints->MinHeight = this->Height;
	this->Constraints->MaxWidth = this->Width;
	this->Constraints->MaxHeight = this->Height;
	Forma10->Edit5->ReadOnly = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm12::ListBox1Click(TObject *Sender)
{
	  if(ListBox1->ItemIndex != -1)
   {
	  Edit1->Text = ListBox1->Items->Strings[ListBox1->ItemIndex];
	  yo = Edit1->Text;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button1Click(TObject *Sender)
{
String str1 = Edit2->Text;
str1 = StringReplace(str1, yo, Edit1->Text, TReplaceFlags() << rfReplaceAll);
Edit2->Text = str1;
timeer=str1;
Forma10->toor = str1;
Forma10->Edit5->Text = Forma10->toor;

int selectedIndex = ListBox1->ItemIndex;
if (selectedIndex != -1) {
	ListBox1->Items->Strings[selectedIndex] = Edit1->Text; // Обновление элемента в ListBox
}

if (Forma10->CheckBox1->Checked) {
	Forma10->CheckBox1->Checked = false;
}

// Добавьте проверку формы и обновление значения Edit5
if (Forma10) {
	ShowMessage("Before setting Edit5: " + Forma10->Edit5->Text); // Отладка
	Forma10->Edit5->Text = str1;
	ShowMessage("After setting Edit5: " + Forma10->Edit5->Text); // Отладка
	Forma10->Edit5->Repaint(); // Перерисовка Edit5
}


}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button2Click(TObject *Sender)
{
	//ListBox1->Clear();
   Forma10->Edit5->ReadOnly = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm12::Button3Click(TObject *Sender)
{
	Forma10->SetEdit5Text(timeer);
	//;
}
//---------------------------------------------------------------------------


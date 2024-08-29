//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;

 String yo;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
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

int selectedIndex = ListBox1->ItemIndex;
if (selectedIndex != -1) {
	ListBox1->Items->Strings[selectedIndex] = Edit1->Text; // Обновление элемента в ListBox
}

if (Form10->CheckBox1->Checked) {
    Form10->CheckBox1->Checked = false;
}
Form10->Edit5->Text = str1;


}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button2Click(TObject *Sender)
{
	ListBox1->Clear();
   Form10->Edit5->ReadOnly = false;
}
//---------------------------------------------------------------------------

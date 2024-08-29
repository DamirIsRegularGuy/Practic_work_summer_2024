//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportCSV"
#pragma link "frxExportPDF"
#pragma link "frxExportText"
#pragma link "frxPreview"
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::FormResize(TObject *Sender)
{
// Размеры кнопок и количество кнопок
    const int ButtonCount = 4;
    int ButtonWidth = ClientWidth / ButtonCount; // Ширина кнопки
    int ButtonHeight = 57; // Высота кнопки, можете изменить по необходимости

    // Устанавливаем расположение кнопок
    int ButtonLeft = 0;
    for (int i = 0; i < ButtonCount; ++i)
    {
        TButton *Button = (TButton*)FindComponent("Button" + IntToStr(i + 1)); // Находим кнопку по имени
        if (Button)
        {
            Button->SetBounds(ButtonLeft, ClientHeight - ButtonHeight, ButtonWidth, ButtonHeight);
            ButtonLeft += ButtonWidth; // Обновляем левую позицию для следующей кнопки
        }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button1Click(TObject *Sender)
{
  frxPreview1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button2Click(TObject *Sender)
{
     TfrxReport *report = new TfrxReport(NULL);
	frxPreview1->Report = report;
	report->PrepareReport();
	if (SaveDialog1->Execute())
	{
		String selectedPath = SaveDialog1->FileName;
		frxPDFExport1->FileName = selectedPath;
		frxReport1->Export(frxPDFExport1);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button3Click(TObject *Sender)
{
   TfrxReport *report = new TfrxReport(NULL);
	frxPreview1->Report = report;
	report->PrepareReport();
	if (SaveDialog1->Execute())
	{
		String selectedPath = SaveDialog1->FileName;
		frxSimpleTextExport1->FileName = selectedPath;
		frxReport1->Export(frxSimpleTextExport1);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button4Click(TObject *Sender)
{
   TfrxReport *report = new TfrxReport(NULL);
	frxPreview1->Report = report;
	report->PrepareReport();
	if (SaveDialog1->Execute())
	{
		String selectedPath = SaveDialog1->FileName;
		frxCSVExport1->FileName = selectedPath;
		frxReport1->Export(frxCSVExport1);
	}
}
//---------------------------------------------------------------------------




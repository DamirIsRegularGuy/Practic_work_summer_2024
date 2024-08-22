//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxExportCSV"
#pragma link "frxExportPDF"
#pragma link "frxExportText"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
      frxPreview1->Print();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
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
void __fastcall TForm4::Button3Click(TObject *Sender)
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
void __fastcall TForm4::Button4Click(TObject *Sender)
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

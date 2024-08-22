//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxExportCSV.hpp"
#include "frxExportPDF.hpp"
#include "frxExportText.hpp"
#include <Vcl.Dialogs.hpp>
#include "frxDBSet.hpp"
#include "frxPreview.hpp"
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TfrxPDFExport *frxPDFExport1;
	TSaveDialog *SaveDialog1;
	TfrxCSVExport *frxCSVExport1;
	TfrxSimpleTextExport *frxSimpleTextExport1;
	TfrxDBDataset *frxDBDataset1;
	TfrxReport *frxReport1;
	TfrxPreview *frxPreview1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif

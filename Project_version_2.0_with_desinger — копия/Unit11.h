//---------------------------------------------------------------------------

#ifndef Unit11H
#define Unit11H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportCSV.hpp"
#include "frxExportPDF.hpp"
#include "frxExportText.hpp"
#include "frxPreview.hpp"
#include <Vcl.Dialogs.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm11 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TfrxDBDataset *frxDBDataset1;
	TfrxReport *frxReport1;
	TfrxPDFExport *frxPDFExport1;
	TSaveDialog *SaveDialog1;
	TfrxCSVExport *frxCSVExport1;
	TfrxSimpleTextExport *frxSimpleTextExport1;
	TfrxPreview *frxPreview1;
	TADOQuery *ADOQuery1;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm11(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm11 *Form11;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TADOQuery *ADOQuery1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TTimer *Timer1;
	TImage *Image1;
	TImage *Image2;
	TLabel *Label1;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:
       void __fastcall FillMemoWithUpcomingBirthdays();
// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif

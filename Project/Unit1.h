//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TStringGrid *StringGrid3;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDBGrid *DBGrid1;
	TDataSource *DataSource1;
	TComboBox *Napr_search;
	TComboBox *Dissipl;
	TComboBox *Semestr;
	TADOQuery *Napr;
	TPanel *Panel1;
	TEdit *audit;
	TEdit *lec;
	TEdit *prac;
	TEdit *lab;
	TEdit *semenar;
	TEdit *sam;
	TButton *add;
	TButton *update;
	TButton *delet;
	TComboBox *contr;
	TButton *prepodWindow;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Napr_searchDropDown(TObject *Sender);
	void __fastcall Napr_searchChange(TObject *Sender);
	void __fastcall DissiplDropDown(TObject *Sender);
	void __fastcall DissiplChange(TObject *Sender);
	void __fastcall SemestrChange(TObject *Sender);
	void __fastcall deletClick(TObject *Sender);
	void __fastcall Panel1Resize(TObject *Sender);
	void __fastcall addClick(TObject *Sender);
	void __fastcall updateClick(TObject *Sender);
	void __fastcall prepodWindowClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

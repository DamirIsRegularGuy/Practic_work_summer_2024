//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery1;
	TPanel *Panel1;
	TComboBox *Napr_search;
	TComboBox *ComboBox3;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource2;
	TComboBox *Semestr;
	TComboBox *Dissipl;
	TLabel *tipeControl;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TShape *Shape2;
	TButton *AddButton;
	TButton *DeleteButton;
	TADOQuery *Napr;
	TLabeledEdit *audit;
	TLabeledEdit *lab;
	TLabeledEdit *lec;
	TLabeledEdit *semenar;
	TLabeledEdit *prac;
	TLabeledEdit *sam;
	TLabel *queStudent;
	TEdit *ComboBoxFamiliya;
	TEdit *ComboBoxImya;
	TEdit *ComboBoxOtchestvo;
	TDBGrid *DBGrid2;
	TCheckListBox *CheckListBox1;
	void __fastcall Napr_searchChange(TObject *Sender);
	void __fastcall Napr_searchDropDown(TObject *Sender);
	void __fastcall DissiplChange(TObject *Sender);
	void __fastcall DissiplDropDown(TObject *Sender);
	void __fastcall SemestrChange(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);
	void __fastcall ComboBoxOtchestvoChange(TObject *Sender);
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall DeleteButtonClick(TObject *Sender);
	void __fastcall CheckListBox1Click(TObject *Sender);
	void __fastcall DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *ADOQuery1;
	TDBGrid *DBGrid1;
	TDataSource *DataSource1;
	TCheckListBox *CheckListBox1;
	TEdit *Edit1;
	TButton *AddButton;
	TButton *DeleteButton;
	void __fastcall CheckListBox1Click(TObject *Sender);
	void __fastcall DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall DeleteButtonClick(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
	void __fastcall TForm6::MoveToFirstMatchingItem();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif

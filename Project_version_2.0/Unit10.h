//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <System.Actions.hpp>
#include <System.Win.TaskbarCore.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.Taskbar.hpp>
#include <Vcl.XPStyleActnCtrls.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
	TTimer *Timer2;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TTaskbar *Taskbar1;
	TTimer *Timer1;
	TActionManager *ActionManager1;
	TEditCut *EditCut1;
	TTrayIcon *TrayIcon1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TImage *Image2;
	TDBGrid *DBGrid1;
	TTabSheet *TabSheet2;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TButton *Button1;
	TDBGrid *DBGrid2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TCheckBox *CheckBox1;
	TEdit *Edit4;
	TButton *Button2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TMaskEdit *Edit5;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall DBGrid2CellClick(TColumn *Column);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall TrayIcon1Click(TObject *Sender);
	void __fastcall TabSheet1Exit(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall TrayIcon1BalloonClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Edit5KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif

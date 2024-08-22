//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <map>
#include <vector>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TDBGrid *DBGrid1;
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
	TComboBox *Dissipl;
	TComboBox *Semestr;
	TComboBox *Napr_search;
	TComboBox *contr;
	TButton *prepodWindow;
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
	TStringGrid *StringGrid6;
	TPanel *Panel4;
	TLabel *Label24;
	TLabel *Label23;
	TLabel *Label25;
	TLabel *Label26;
	TButton *Button21;
	TEdit *Edit22;
	TButton *Button22;
	TComboBox *ComboBox11;
	TComboBox *ComboBox12;
	TComboBox *ComboBox13;
	TEdit *Edit21;
	TDateTimePicker *DateTimePicker4;
	TADOQuery *Napr;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TListBox *ListBox1;
	TADOQuery *ADOQuery2;
	TPanel *Panel2;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label28;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TEdit *Edit6;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TEdit *Edit7;
	TDateTimePicker *DateTimePicker2;
	TEdit *Edit8;
	TEdit *Edit11;
	TComboBox *ComboBox6;
	TEdit *Edit12;
	TButton *Button9;
	TEdit *Edit13;
	TButton *Button10;
	TEdit *Edit14;
	TMemo *Memo1;
	TEdit *Edit15;
	TButton *Button11;
	TButton *Button12;
	TButton *Button24;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton16;
	TSpeedButton *SpeedButton17;
	TStringGrid *StringGrid3;
	TSpeedButton *SpeedButton18;
	TSpeedButton *SpeedButton19;
	TSpeedButton *SpeedButton20;
	TSpeedButton *SpeedButton21;
	TSpeedButton *SpeedButton22;
	TSpeedButton *SpeedButton23;
	TSpeedButton *SpeedButton24;
	TTabSheet *TabSheet5;
	TPageControl *PageControl2;
	TTabSheet *TabSheet8;
	TSpeedButton *SpeedButton25;
	TSpeedButton *SpeedButton26;
	TSpeedButton *SpeedButton27;
	TSpeedButton *SpeedButton28;
	TSpeedButton *SpeedButton29;
	TStringGrid *StringGrid2;
	TPageControl *PageControl3;
	TTabSheet *TabSheet13;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *Label38;
	TLabel *Label40;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label43;
	TLabel *Label44;
	TLabel *Label45;
	TDBGrid *DBGrid2;
	TComboBox *ComboBox19;
	TComboBox *ComboBox20;
	TComboBox *ComboBox22;
	TListBox *ListBox2;
	TButton *Button27;
	TButton *Button28;
	TDateTimePicker *DateTimePicker6;
	TButton *Button29;
	TComboBox *ComboBox24;
	TComboBox *ComboBox25;
	TPageControl *PageControl4;
	TTabSheet *TabSheet15;
	TLabel *Label39;
	TLabel *Label46;
	TLabel *Label47;
	TLabel *Label48;
	TLabel *Label51;
	TLabel *Label52;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label55;
	TLabel *Label56;
	TDBGrid *DBGrid3;
	TComboBox *ComboBox21;
	TComboBox *ComboBox23;
	TComboBox *ComboBox26;
	TButton *Button30;
	TDateTimePicker *DateTimePicker7;
	TButton *Button32;
	TComboBox *ComboBox29;
	TComboBox *ComboBox30;
	TADOQuery *ADOQuery3;
	TMemo *Edit9;
	TADOQuery *ADOQuery4;
	TDataSource *DataSource2;
	TEdit *Edit1;
	TfrxReport *frxReport1;
	TfrxDBDataset *frxDBDataset1;
	TLabel *Label1;
	TPageControl *PageControl5;
	TTabSheet *TabSheet6;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button23;
	TTabSheet *TabSheet7;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label27;
	TComboBox *Lookup2;
	TComboBox *Lookup1;
	TComboBox *Lookup3;
	TComboBox *Lookup4;
	TButton *Button4;
	TPanel *Panel3;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label10;
	TLabel *Label13;
	TDateTimePicker *DateTimePicker1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button5;
	TButton *Button6;
	TEdit *Edit5;
	TButton *Button7;
	TEdit *Edit10;
	TButton *Button8;
	TStringGrid *StringGrid1;
	TComboBox *ComboBox14;
	TTabSheet *TabSheet9;
	TSpeedButton *SpeedButton30;
	TSpeedButton *SpeedButton31;
	TSpeedButton *SpeedButton32;
	TSpeedButton *SpeedButton33;
	TSpeedButton *SpeedButton34;
	TStringGrid *StringGrid4;
	TPageControl *PageControl6;
	TTabSheet *TabSheet10;
	TLabel *Label14;
	TButton *Button13;
	TButton *Button14;
	TButton *Button15;
	TTabSheet *TabSheet11;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TComboBox *ComboBox7;
	TComboBox *ComboBox8;
	TComboBox *ComboBox9;
	TComboBox *ComboBox10;
	TButton *Button16;
	TPanel *Panel5;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label29;
	TDateTimePicker *DateTimePicker3;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TButton *Button17;
	TButton *Button18;
	TEdit *Edit19;
	TButton *Button19;
	TEdit *Edit20;
	TButton *Button20;
	TStringGrid *StringGrid5;
	TTabSheet *TabSheet12;
	TSpeedButton *SpeedButton35;
	TSpeedButton *SpeedButton36;
	TSpeedButton *SpeedButton37;
	TSpeedButton *SpeedButton38;
	TSpeedButton *SpeedButton39;
	TStringGrid *StringGrid7;
	TTabSheet *TabSheet14;
	TSpeedButton *SpeedButton40;
	TSpeedButton *SpeedButton41;
	TSpeedButton *SpeedButton42;
	TSpeedButton *SpeedButton43;
	TSpeedButton *SpeedButton44;
	TSpeedButton *SpeedButton45;
	TSpeedButton *SpeedButton46;
	TSpeedButton *SpeedButton47;
	TSpeedButton *SpeedButton48;
	TSpeedButton *SpeedButton49;
	TSpeedButton *SpeedButton50;
	TSpeedButton *SpeedButton51;
	TStringGrid *StringGrid8;
	TPanel *Panel6;
	TLabel *Label30;
	TLabel *Label31;
	TLabel *Label32;
	TLabel *Label33;
	TButton *Button25;
	TEdit *Edit23;
	TButton *Button26;
	TEdit *Edit24;
	TComboBox *ComboBox15;
	TComboBox *ComboBox16;
	TComboBox *ComboBox17;
	TEdit *Edit25;
	TDateTimePicker *DateTimePicker5;
	TTabSheet *TabSheet16;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label57;
	TLabel *Label58;
	TLabel *Label59;
	TLabel *Label60;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TLabel *Label65;
	TLabel *Label66;
	TLabel *Label67;
	TDBGrid *DBGrid4;
	TComboBox *ComboBox18;
	TComboBox *ComboBox27;
	TComboBox *ComboBox28;
	TComboBox *ComboBox31;
	TComboBox *ComboBox32;
	TListBox *ListBox3;
	TButton *Button31;
	TButton *Button33;
	TDateTimePicker *DateTimePicker8;
	TButton *Button34;
	TComboBox *ComboBox33;
	TComboBox *ComboBox34;
	TComboBox *ComboBox35;
	TTabSheet *TabSheet17;
	TSpeedButton *SpeedButton52;
	TSpeedButton *SpeedButton53;
	TSpeedButton *SpeedButton54;
	TSpeedButton *SpeedButton55;
	TSpeedButton *SpeedButton56;
	TSpeedButton *SpeedButton57;
	TSpeedButton *SpeedButton58;
	TSpeedButton *SpeedButton59;
	TSpeedButton *SpeedButton60;
	TSpeedButton *SpeedButton61;
	TSpeedButton *SpeedButton62;
	TSpeedButton *SpeedButton63;
	TStringGrid *StringGrid9;
	TPanel *Panel7;
	TLabel *Label68;
	TLabel *Label69;
	TLabel *Label70;
	TComboBox *ComboBox36;
	TComboBox *ComboBox37;
	TComboBox *ComboBox38;
	TEdit *Edit26;
	TComboBox *ComboBox39;
	TComboBox *ComboBox40;
	TEdit *Edit27;
	TDateTimePicker *DateTimePicker9;
	TEdit *Edit28;
	TEdit *Edit29;
	TEdit *Edit30;
	TEdit *Edit31;
	TComboBox *ComboBox41;
	TEdit *Edit32;
	TButton *Button35;
	TEdit *Edit33;
	TButton *Button36;
	TEdit *Edit34;
	TMemo *Memo2;
	TEdit *Edit35;
	TButton *Button37;
	TButton *Button38;
	TButton *Button39;
	TButton *Button40;
	TButton *Button41;
	TADOConnection *ADOConnection2;
	TADOConnection *ADOConnection1;
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
	void __fastcall StringGrid6DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall ComboBox11DropDown(TObject *Sender);
	void __fastcall ComboBox12DropDown(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button21Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall StringGrid3SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall ComboBox4DropDown(TObject *Sender);
	void __fastcall ComboBox5DropDown(TObject *Sender);
	void __fastcall ComboBox6DropDown(TObject *Sender);
	void __fastcall ComboBox1DropDown(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall ComboBox2DropDown(TObject *Sender);
	void __fastcall ComboBox3DropDown(TObject *Sender);
	void __fastcall Button24Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button30Click(TObject *Sender);
	void __fastcall Button32Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button23Click(TObject *Sender);
	void __fastcall Button40Click(TObject *Sender);
	void __fastcall Button41Click(TObject *Sender);

private:
	std::map<String, int> TForm1::GetFilledHours(TADOQuery* ADOQuery1);	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

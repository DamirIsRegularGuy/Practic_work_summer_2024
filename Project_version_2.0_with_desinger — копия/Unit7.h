//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *ADOQueryGroupe;
	TADOQuery *ADOQueryStudents;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button1;
	TButton *Button2;
	TADOQuery *ADOQuerySpeciality;
	TComboBox *Edit1;
	TPanel *Panel1;
	TADOConnection *ADOConnection1;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TButton *Button3;
	TButton *Button4;
	TPanel *Panel2;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	void __fastcall DBGrid1CellClick(TColumn *Column);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Edit1DropDown(TObject *Sender);
	void __fastcall DBGrid2CellClick(TColumn *Column);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:
		String RegistrationNumber;
		String RegistrationRoot;		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif

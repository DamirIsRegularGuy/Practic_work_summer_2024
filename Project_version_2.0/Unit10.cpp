//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;

int yo,num;
double jem, number=1, i, j=0, mot;
String piir;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button1Click(TObject *Sender)
{
  if(Edit1->Text!="" && Edit2->Text!="")
   {
		ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("use Practic_work");
		ADOQuery1->SQL->Add("insert into Diary(DataTime, Name, Evant)");
		ADOQuery1->SQL->Add("values('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"')");
		ShowMessage(ADOQuery1->SQL->Text);
		ADOQuery1->ExecSQL();
   }
   else
   {
	 ShowMessage("��� ���������� �������, ���� ������ ���� �� ���� � ��� ���������������� �������");
   }

   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm10::DBGrid2CellClick(TColumn *Column)
{
yo=ADOQuery1->FieldByName("id")->AsInteger;
  TDateTime currentTime = Now();
  TDateTime userInputTime;
  TPoint mousePos=Mouse->CursorPos;
  PopupMenu1->Popup(mousePos.X, mousePos.Y);
  num=ADOQuery1->RecNo;


   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{
	if(CheckBox1->Checked==true)
	{
	Form10->Visible=false;
	Action=caNone;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm10::TrayIcon1Click(TObject *Sender)
{
Form10->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::TabSheet1Exit(TObject *Sender)
{
  ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm10::N1Click(TObject *Sender)
{
  TDateTime currentTime=Date();
  TDateTime InputTime;
  String currentStr;
  String InputStr;

  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Practic_work");
  ADOQuery1->SQL->Add("select * from Diary where id="+IntToStr(yo));
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();
  InputTime=ADOQuery1->FieldByName("DataTime")->AsString;
  //currentStr=DateTimeToStr(currentTime);
  InputStr=DateTimeToStr(InputTime);
  if(InputStr.Length()>10) InputStr.Delete(11,19);
  InputTime=StrToDateTime(InputStr);
  //ShowMessage(InputTime);

  if (currentTime < InputTime)
  {
	ShowMessage("������� ��� �� ���������.");
  }
  else if (currentTime > InputTime)
  {
	ShowMessage("������� ������.");
  }
  else if(currentTime == InputTime)
  {
	ShowMessage("������� ���� �������.");
  }

   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();                              +
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();
   ADOQuery1->RecNo=num;

}
//---------------------------------------------------------------------------
void __fastcall TForm10::N2Click(TObject *Sender)
{
		int result = MessageDlg("�� ������������� ������ ������� ��� ������, ����� �������� �� �������������� ����� �����������", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0);
	if (result == mrYes)
	{
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("use Practic_work");
	ADOQuery1->SQL->Add("delete from Diary where id = " + IntToStr(yo));
	//ShowMessage(ADOQuery1->SQL->Text);
	ADOQuery1->ExecSQL();
	}


   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();

}
//---------------------------------------------------------------------------
void __fastcall TForm10::N3Click(TObject *Sender)
{
   ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("use Practic_work");
		ADOQuery1->SQL->Add("update Diary");
		ADOQuery1->SQL->Add("set");
		if(Edit1->Text!="") ADOQuery1->SQL->Add("DataTime='"+Edit1->Text+"'");
		if(Edit2->Text!="")
		{
		  if(Edit1->Text!="")ADOQuery1->SQL->Add(",Name='"+Edit2->Text+"'");
		  else ADOQuery1->SQL->Add("Name='"+Edit2->Text+"'");
		}
		if(Edit3->Text!="")
		{
		  if(Edit1->Text!="" || Edit2->Text!="") ADOQuery1->SQL->Add(",Evant='"+Edit3->Text+"'");
		  else ADOQuery1->SQL->Add("Evant='"+Edit3->Text+"'");
		}
		ADOQuery1->SQL->Add("where id ="+IntToStr(yo));
		//ShowMessage(ADOQuery1->SQL->Text);
		ADOQuery1->ExecSQL();

   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("use Practic_work");
   ADOQuery1->SQL->Add("select * from Diary");
   //ShowMessage(ADOQuery1->SQL->Text);
   ADOQuery1->Open();
   ADOQuery1->RecNo=num;

}
//---------------------------------------------------------------------------
void __fastcall TForm10::Timer2Timer(TObject *Sender)
{
  TDateTime currentTime=Date(),times;
  TDateTime InputTime, InputTimeS;
  TDateTime SetTime=TDateTime(0,0,0.5,0), SitTime;
  String currentStr, InputStr, InputS, SitStr, hoop;
  double you=i;

  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Practic_work");
  ADOQuery1->SQL->Add("select * from Diary");
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();
  while(!ADOQuery1->Eof)
  {
	  InputTime=ADOQuery1->FieldByName("DataTime")->AsString;
	  currentStr=DateTimeToStr(currentTime);
	  if(RadioButton1->Checked && InputTime>=currentTime)
	  {
		if((InputTime-(jem))<currentTime) jem--;//InputTime=currentTime;
	  }
	  InputTime=InputTime-(jem);
	  InputStr=DateTimeToStr(InputTime);
	  if(InputStr.Length()>10) InputStr.Delete(11,19);
	  InputTime=StrToDateTime(InputStr);
	  //ShowMessage(InputTime);

	  if(currentTime == InputTime)
	  {
		InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		InputTimeS=InputTimeS-(jem);
		InputS=DateTimeToStr(InputTimeS);
		if(InputS.Length()>10) InputS.Delete(1,11);
		InputTimeS=StrToDateTime(InputS);
		if(piir=="" || mot>=0)
		{
			while(mot>=0)
			{
				//InputTime=InputTime-1/(24.0*60.0);
				//InputTimeS=InputTimeS-(you/24.0);
				//InputTime-((i/number)*(jem/24.0))
				if(RadioButton1->Checked) piir=piir+DateTimeToStr((InputTimeS)-(mot/24.0))+' ';
				else if(RadioButton2->Checked){ piir=piir+DateTimeToStr((InputTimeS+jem)-((mot/number)*(jem)))+' ';}
				else if(RadioButton3->Checked){ piir=piir+DateTimeToStr((InputTimeS+jem)-((mot/number)*(jem)))+' ';}
				mot--;
			}
			//if(i!=1)piir=piir+DateTimeToStr(InputTimeS+jem);
		}

		times=Time();

		//SitTime=InputTimeS-times;
		//SitStr=DateTimeToStr(SitTime);
		//if(SitStr.Length()>10) SitStr.Delete(0,11);
		//SitTime=StrToDateTime(SitStr);

		if(piir!="")
		{
		hoop=piir.SubString(12,8);
		SitTime=StrToDateTime(hoop);
		//String timess=DateTimeToStr(times);
		//timess.Delete(18,2);
		//timess=timess+"00";
		//times=StrToDateTime(timess);
		//ShowMessage(piir);
		if(times>SitTime)
		{
		   piir.Delete(1,20);
		   hoop=piir.SubString(12,8);
		   if(piir!="") SitTime=StrToDateTime(hoop);
		   //String timess=DateTimeToStr(times);
		   //timess.Delete(18,2);
		   //timess=timess+"00";
		   //times=StrToDateTime(timess);
		}
		}
		//ShowMessage(piir);
		//SitStr=DateTimeToStr(times);
		//hoop=DateTimeToStr(SitTime);
		//ShowMessage("������� ���� �������.");
		SitTime=(SitTime-times);
		SitStr=DateTimeToStr(SitTime);
		if(SitStr.Length()>10) SitStr.Delete(0,11);
		SitTime=StrToDateTime(SitStr);
		if(SitTime<=SetTime)
		{
		TrayIcon1->BalloonHint=ADOQuery1->FieldByName("Name")->AsString;
		TrayIcon1->BalloonTimeout=15000;
		TrayIcon1->BalloonFlags=bfInfo;
		TrayIcon1->ShowBalloonHint();
		piir.Delete(1,20);
		i=i-1;
		//ShowMessage(i);
		}
	  }
	  ADOQuery1->Next();
	  if(i<=0 || piir==""){Timer2->Enabled=false;CheckBox1->Checked=false;}
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm10::CheckBox1Click(TObject *Sender)
{
if(CheckBox1->Checked==true) Timer2->Enabled=true;
   else{ Timer2->Enabled=false; piir=""; j=0;}
   if(RadioButton1->Checked) jem=StrToInt(Edit4->Text);
   else if(RadioButton2->Checked) jem=StrToInt(Edit4->Text)/24.0;
   else if(RadioButton3->Checked) jem=(StrToInt(Edit4->Text)/60.0)/24.0;

}
//---------------------------------------------------------------------------
void __fastcall TForm10::TrayIcon1BalloonClick(TObject *Sender)
{
this->Show();
   this->WindowState=wsNormal;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button2Click(TObject *Sender)
{
   TDateTime currentTime=Date(),times, days;
  TDateTime InputTime, InputTimeS;
  TDateTime SetTime=TDateTime(0,0,0.5,0), SitTime;
  String currentStr, InputStr, InputS, SitStr, hoop;
  double you=i;

  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Practic_work");
  ADOQuery1->SQL->Add("select * from Diary");
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();
  while(!ADOQuery1->Eof)
  {
	  InputTime=ADOQuery1->FieldByName("DataTime")->AsString;
	  currentStr=DateTimeToStr(currentTime);
	  if(RadioButton1->Checked)
	  {
		if((InputTime-(jem))<currentTime)jem=jem-1;
	  }
	  InputTime=InputTime-(jem);
	  InputStr=DateTimeToStr(InputTime);
	  if(InputStr.Length()>10) InputStr.Delete(11,19);
	  InputTime=StrToDateTime(InputStr);
	  //ShowMessage(InputTime);

	  if(currentTime == InputTime)
	  {
		InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		InputTimeS=InputTimeS-(jem);
		InputS=DateTimeToStr(InputTimeS);
		if(InputS.Length()>10) InputS.Delete(1,11);
		InputTimeS=StrToDateTime(InputS);
		if(piir=="" || mot>=0)
		{
			while(mot>=0)
			{
				//InputTime=InputTime-1/(24.0*60.0);
				//InputTimeS=InputTimeS-(you/24.0);
				//InputTime-((i/number)*(jem/24.0))
				if(RadioButton1->Checked) piir=piir+DateTimeToStr((InputTimeS)-(mot/24.0))+' ';
				else if(RadioButton2->Checked){ piir=piir+DateTimeToStr((InputTimeS+jem)-((mot/number)*(jem)))+' ';}
				else if(RadioButton3->Checked){ piir=piir+DateTimeToStr((InputTimeS+jem)-((mot/number)*(jem)))+' ';}
				mot--;
			}
			piir=piir+DateTimeToStr(InputTimeS+jem);
		}

		times=Time();

		//SitTime=InputTimeS-times;
		//SitStr=DateTimeToStr(SitTime);
		//if(SitStr.Length()>10) SitStr.Delete(0,11);
		//SitTime=StrToDateTime(SitStr);

		hoop=piir.SubString(12,8);
		SitTime=StrToDateTime(hoop);
		ShowMessage(piir);
		if(times>SitTime)
		{
		   piir.Delete(1,20);
		   hoop=piir.SubString(12,8);
		   SitTime=StrToDateTime(hoop);
		   String timess=DateTimeToStr(times);
		   timess.Delete(18,2);
		   timess=timess+"00";
		}
		ShowMessage(piir);
		//SitStr=DateTimeToStr(times);
		//hoop=DateTimeToStr(SitTime);
			//ShowMessage("������� ���� �������.");
			String timess=DateTimeToStr(times);
			timess.Delete(18,2);
			timess=timess+"00";
			ShowMessage(SitTime);
			ShowMessage(times);
			SitTime=(SitTime-times);
			ShowMessage(SitTime);
			if(SitTime<=SetTime)
			{
			TrayIcon1->BalloonHint=ADOQuery1->FieldByName("Name")->AsString;
			TrayIcon1->BalloonTimeout=15000;
			TrayIcon1->BalloonFlags=bfInfo;
			TrayIcon1->ShowBalloonHint();
			piir.Delete(1,20);
			i=i-1;
			//ShowMessage(i);
			}
	  }
	  ADOQuery1->Next();
	  if(i<=0 || piir==""){Timer2->Enabled=false;CheckBox1->Checked=false;}
  }




/*
   TDateTime InputTime=TDateTime(19,50,0,0);
   TDateTime InputTimeS=TDateTime(2023,12,23,19,51,0,0);
   InputTime=InputTime-1/(24.0*60.0);
   String InputStr, InputS;
   InputStr="16:51:00";
   InputTime=StrToDateTime(InputStr);
   ShowMessage(InputTime);
 */


  /*
  TDateTime currentTime=Time();
  //TDateTime times=Time();
  TDateTime InputTime=TDateTime(2023,12,23,19,50,0,0);
  TDateTime InputTimeS=TDateTime(2023,12,23,19,51,0,0);
  String currentStr;
  String InputStr, InputS;

  number=StrToInt(Edit5->Text);
  int jem=StrToInt(Edit4->Text);
  int i=number;


  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Project2");
  ADOQuery1->SQL->Add("select * from Diary");
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();
		TDateTime times=Now();
		String timess=DateTimeToStr(times);
		timess.Delete(18,2);
		timess=timess+"00";
		//InputTime=InputTimeS-InputTime ;
		times=(i/number)*(jem/24);
		//double first =((i/number)*(jem/24));

		InputTimeS=TDateTime(0,0,((i/number)*(jem/24)),0);
		InputTime=InputTime-InputTimeS;

		InputTime=InputTime-((i/number)*(jem/24.0));//((i/number)*(jem/24));

		InputTime=InputTime-TDateTime((i/number)*(jem/24));

		ShowMessage(InputTime);
		//if(timess.Length()>10) timess.Delete(1,11);
		times=StrToDateTime(timess);
		*/

}
//---------------------------------------------------------------------------
void __fastcall TForm10::DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
   int rowIndex = DBGrid2->DataSource->DataSet->RecNo;
	TColor fontColor = clBlack;
	if (rowIndex > 0 && rowIndex <= ADOQuery1->RecordCount)
	 {
		TDateTime currentTime = Date();
		TDateTime InputTime = ADOQuery1->FieldByName("DataTime")->AsDateTime;
		String InputStr=DateTimeToStr(InputTime);
		if(InputStr.Length()>10) InputStr.Delete(11,19);
		InputTime=StrToDateTime(InputStr);

		if (currentTime < InputTime)
		{
			fontColor = clGreen;
		}
		else if (currentTime > InputTime)
		{
			fontColor = clBlack;
		}
		else if (currentTime == InputTime)
		 {
			fontColor = clBlue;
		}
	}
	DBGrid2->Canvas->Font->Color = fontColor;
	DBGrid2->DefaultDrawColumnCell(Rect, DataCol, Column, State);

}
//---------------------------------------------------------------------------
void __fastcall TForm10::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
int rowIndex = DBGrid1->DataSource->DataSet->RecNo;
	TColor fontColor = clBlack;
	if (rowIndex > 0 && rowIndex <= ADOQuery1->RecordCount)
	 {
		TDateTime currentTime = Date();
		TDateTime InputTime = ADOQuery1->FieldByName("DataTime")->AsDateTime;
		String InputStr=DateTimeToStr(InputTime);
		if(InputStr.Length()>10) InputStr.Delete(11,19);
		InputTime=StrToDateTime(InputStr);

		if (currentTime < InputTime)
		{
			fontColor = clGreen;
		}
		else if (currentTime > InputTime)
		{
			fontColor = clBlack;
		}
		else if (currentTime == InputTime)
		 {
			fontColor = clBlue;
		}
	}
	DBGrid1->Canvas->Font->Color = fontColor;
	DBGrid1->DefaultDrawColumnCell(Rect, DataCol, Column, State);

}
//---------------------------------------------------------------------------
void __fastcall TForm10::Timer1Timer(TObject *Sender)
{

  //TDateTime currentTime = Now();

  TDateTime currentTime=Date();
  TDateTime times;
  TDateTime InputTime, InputTimeS;
  TDateTime SetTime=TDateTime(0,0,0.5,0), SitTime;

  String currentStr, InputStr, InputS, SitStr;
  //ShowMessage(i);

  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Practic_work");
  ADOQuery1->SQL->Add("select * from Diary");
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();
  while(!ADOQuery1->Eof)
  {
	  InputTime=ADOQuery1->FieldByName("DataTime")->AsString;
	  currentStr=DateTimeToStr(currentTime);
	  InputTime=InputTime-((i/number)*(jem/24.0));
	  InputStr=DateTimeToStr(InputTime);
	  if(InputStr.Length()>10) InputStr.Delete(11,19);
	  InputTime=StrToDateTime(InputStr);
	  //ShowMessage(InputTime);

	  if(currentTime == InputTime)
	  {
		InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		InputTimeS=InputTimeS-((i/number)*(jem/24.0));
		InputS=DateTimeToStr(InputTimeS);
		//if(InputS.Length()>10)
		//{
		//InputS.Delete(18,2);
		//InputS=InputS+"00";
		//InputTimeS=StrToDateTime(InputS);
		//}
		//if(InputS.Length()>10) InputS.Delete(1,11);


		times=Now();
		//String timess=DateTimeToStr(times);
		//timess.Delete(18,2);
		//timess=timess+"00";
		//if(timess.Length()>10) timess.Delete(1,11);
		//times=StrToDateTime(timess);

		SitTime=InputTimeS-times;
		SitStr=DateTimeToStr(SitTime);
		if(SitStr.Length()>10) SitStr.Delete(0,11);
		SitTime=StrToDateTime(SitStr);

			//ShowMessage("������� ���� �������.");
			if(SitTime<=SetTime)
			{
			TrayIcon1->BalloonHint=ADOQuery1->FieldByName("Name")->AsString;
			TrayIcon1->BalloonTimeout=15000;
			TrayIcon1->BalloonFlags=bfInfo;
			TrayIcon1->ShowBalloonHint();

			i=i-1;
			ShowMessage(i);
			//Timer2->Enabled=false;
			}
	   // ADOQuery1->Prior();
	  }
	  ADOQuery1->Next();
	  if(i<=0){Timer2->Enabled=false;CheckBox1->Checked=false;}
  }


  /*
  TDateTime currentTime=Date(),times=Time();
  TDateTime InputTime, InputTimeS, InputData;
  String currentStr,InputStr, InputS;

  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("use Project2");
  ADOQuery1->SQL->Add("select * from Diary");
  //ShowMessage(ADOQuery1->SQL->Text);
  ADOQuery1->Open();

  number=StrToInt(Edit5->Text);
  int jem=StrToInt(Edit4->Text);
  int i=number;
  bool pool=true;

  while(!ADOQuery1->Eof)
  {
	  pool=true;
	  InputTime=ADOQuery1->FieldByName("DataTime")->AsString;
	  InputStr=DateTimeToStr(InputTime);
	  if(InputStr.Length()>10) InputStr.Delete(11,19);
	  InputTime=StrToDateTime(InputStr);

	  if(currentTime == InputTime)
	  {
		//InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		//times=Now();
	   //if(int(InputTimeS-times)>0)
	   //{

		InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		times=Now();
	   while(InputTimeS!=times)
	   {
		InputTimeS=ADOQuery1->FieldByName("DataTime")->AsString;
		times=Now();
		InputTimeS=InputTimeS-((i/number)*(jem/24));
			if(InputTimeS==times)
			{
			   TrayIcon1->BalloonHint=ADOQuery1->FieldByName("Name")->AsString;
			   TrayIcon1->BalloonTimeout=15000;
			   TrayIcon1->BalloonFlags=bfInfo;
			   TrayIcon1->ShowBalloonHint();
			   i--;
			}
	   //}
	   }
	  }
	  ADOQuery1->Next();
  }
  if(i<0) Timer2->Enabled=false;
	*/

}
//---------------------------------------------------------------------------
void __fastcall TForm10::Edit5KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
String ser;
	 if(Key==32)
	 {
		 number=StrToInt(Edit5->Text);
		 i=number;
		 mot=i;
		 piir="";
		 ShowMessage("������� �� ���� ���������� �����������, ������ ���� ������ ���������� ������������ ����� ��� ����������� - ����������� ������� � ������ ���� ���� ����� � ������������ ��������. ��� ������������ ������� �� ��������� �������� 77:77:77.");
		 Edit5->Clear();
		 //Edit4->SetFocus();
		 Edit5->EditMask="!90:00:00;1;_";
	 }


	 if(Key==13)
	 {

		 ser=Edit5->Text;
		 if(ser=="77:77:77")
		 {
			Edit5->Clear();
			ShowMessage("�������� �� ��������� ����� ����������� � ����������� �� ���� �����������.");
			//piir="";
		 }

		 else if(j<i)
		 {
			Form12->ListBox1->Items->Add(Edit5->Text);
			piir=piir+"30.12.1899 "+Edit5->Text+' ';
			Edit5->Clear();
			j++;
			mot--;
			//Form2->ListBox1->Items->Add(Edit5->Text);
		 }
		 else if(j>=i)
		 {
			 ShowMessage("�� ��������� ���������� �������� �����������, ������������ ����� ���������� ���� ����-����.");
			 j=0;
			 Edit5->EditMask = "";
			 Edit5->ReadOnly = true;
			 Edit5->Clear();
			 Form12->Edit2->Text = piir;
		 }
		 //ShowMessage(piir);
	 }


}
//---------------------------------------------------------------------------
void __fastcall TForm10::Edit4Change(TObject *Sender)
{
  Edit5->Clear();
  Edit5->EditMask="";
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button4Click(TObject *Sender)
{
piir = Edit5->Text;
   Edit5->Clear();
   CheckBox1->Checked = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button3Click(TObject *Sender)
{
   Form12->Show();
}
//---------------------------------------------------------------------------

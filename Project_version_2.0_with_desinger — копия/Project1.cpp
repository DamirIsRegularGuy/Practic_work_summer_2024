//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit5.cpp", Form5);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit9.cpp", Form9);
USEFORM("Unit8.cpp", Form8);
USEFORM("Unit7.cpp", Form7);
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit10.cpp", Forma10);
USEFORM("Unit2.cpp", RegistrationForm);
USEFORM("Unit12.cpp", Form12);
USEFORM("Unit11.cpp", Form11);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Cobalt XEMedia");
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TRegistrationForm), &RegistrationForm);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForma10), &Forma10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->CreateForm(__classid(TForm12), &Form12);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------

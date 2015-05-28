//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit5.cpp", kisah_s);
USEFORM("Unit4.cpp", kisah_n);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit3.cpp", DM); /* TDataModule: File Type */
USEFORM("Unit2.cpp", lihat);
USEFORM("Unit1.cpp", Form1);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->UseMetropolisUI();
		Application->Title = "Metropolis UI Application";
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(Tlihat), &lihat);
		Application->CreateForm(__classid(TDM), &DM);
		Application->CreateForm(__classid(Tkisah_n), &kisah_n);
		Application->CreateForm(__classid(Tkisah_s), &kisah_s);
		Application->CreateForm(__classid(TForm6), &Form6);
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

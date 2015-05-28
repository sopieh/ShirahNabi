//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <memory>
#include <JPEG.hpp>

#include "Unit5.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tkisah_s *kisah_s;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall Tkisah_s::Tkisah_s(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::AppBarResize()
{
  AppBar->SetBounds(0, AppBar->Parent->Height - AppBarHeight,
    AppBar->Parent->Width, AppBarHeight);
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::AppBarShow(int mode)
{
  if (mode == -1)
    mode = AppBar->Visible ? 0 : 1;
  if (mode == 0)
    AppBar->Visible = False;
  else {
    AppBar->Visible = True;
    AppBar->BringToFront();
  }
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Panel5Click(TObject *Sender)
{
 if (!Form1)
	Form1 = new TForm1(this);
	Form1->Show();
	Form1->BringToFront();
	kisah_s->Close();
	Form6->Close();
	kisah_n->Close();
	lihat->Close();
 }
//---------------------------------------------------------------------------

void __fastcall Tkisah_s::Panel6Click(TObject *Sender)
{
if (!lihat)
	lihat = new Tlihat(this);
	lihat->Show();
	lihat->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_s::Panel5MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel5->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_s::Panel5MouseLeave(TObject *Sender)
{
Panel5->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Panel6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel6->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Panel6MouseLeave(TObject *Sender)
{
Panel6->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::FormShow(TObject *Sender)
{
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
Image1->Picture->Assign(jp);
DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select *from sahabat");
DM->sahabat->Open();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Panel4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel4->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_s::Panel4MouseLeave(TObject *Sender)
{
Panel4->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------


void __fastcall Tkisah_s::Panel4Click(TObject *Sender)
{
if (lihat->j1->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=2",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j2->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=3",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j3->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=4",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j4->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=5",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j5->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=6",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j6->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=7",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->j7->Caption == j1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat1.php?id=8",NULL,NULL,SW_SHOWNORMAL);
}

}


//---------------------------------------------------------------------------


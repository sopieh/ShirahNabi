//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <memory>
#include <JPEG.hpp>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tkisah_n *kisah_n;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall Tkisah_n::Tkisah_n(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::AppBarResize()
{
  AppBar->SetBounds(0, AppBar->Parent->Height - AppBarHeight,
	AppBar->Parent->Width, AppBarHeight);
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::AppBarShow(int mode)
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
void __fastcall Tkisah_n::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::Panel1Click(TObject *Sender)
{
	if (!Form1)
	Form1 = new TForm1(this);
	Form1->Show();
	Form1->BringToFront();
	kisah_n->Close();
	lihat->Close();
	kisah_s->Close();
	Form6->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::FormShow(TObject *Sender)
{
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
Image1->Picture->Assign(jp);
DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select *from kisah");
DM->kisah->Open();
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::Panel3Click(TObject *Sender)
{
if (!lihat)
	lihat = new Tlihat(this);
	lihat->Show();
	lihat->BringToFront();

}
//---------------------------------------------------------------------------

void __fastcall Tkisah_n::Panel1MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel1->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::Panel1MouseLeave(TObject *Sender)
{
Panel1->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_n::Panel3MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel3->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_n::Panel3MouseLeave(TObject *Sender)
{
Panel3->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_n::Panel4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel4->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall Tkisah_n::Panel4MouseLeave(TObject *Sender)
{
Panel4->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------
void __fastcall Tkisah_n::Panel4Click(TObject *Sender)
{
if (lihat->jd1->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=9",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd2->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=11",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd3->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=12",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd4->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=17",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd5->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=28",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd6->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=29",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd7->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=32",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd8->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=33",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd9->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=35",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd10->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=36",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd11->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=37",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd12->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=38",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd13->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=40",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd14->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=41",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd15->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=42",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd16->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=43",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd17->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=44",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd18->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=45",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd19->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=46",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd20->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=47",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd21->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=48",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd22->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=49",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd23->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=50",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd24->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=51",NULL,NULL,SW_SHOWNORMAL);
}
else if(lihat->jd25->Caption == jd1->Caption)
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/lihat.php?id=52",NULL,NULL,SW_SHOWNORMAL);
}
else
{
	ShellExecuteA(NULL,"OPEN","http://ariefsetya.com/p3m/ShirahNabi/error.php",NULL,NULL,SW_SHOWNORMAL);
}
}
//---------------------------------------------------------------------------


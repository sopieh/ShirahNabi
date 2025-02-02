//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AppBarResize()
{
  AppBar->SetBounds(0, AppBar->Parent->Height - AppBarHeight,
	AppBar->Parent->Width, AppBarHeight);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AppBarShow(int mode)
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
void __fastcall TForm1::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sirohClick(TObject *Sender)
{
Panel1->Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::quitClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::aboutClick(TObject *Sender)
{
  if (!Form6)
	Form6 = new TForm6(this);
	Form6->Show();
	Form6->BringToFront();

}
//---------------------------------------------------------------------------



void __fastcall TForm1::sirohMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
siroh->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sirohMouseLeave(TObject *Sender)
{
siroh->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::aboutMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
about->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::aboutMouseLeave(TObject *Sender)
{
about->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::quitMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
quit->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::quitMouseLeave(TObject *Sender)
{
quit->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::updateMouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
update->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::updateMouseLeave(TObject *Sender)
{
update->Color = 0x00897A6C;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::updateClick(TObject *Sender)
{
system("start UpdaterApps.exe");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image4Click(TObject *Sender)
{
  if (!lihat)
	lihat = new Tlihat(this);
	lihat->Show();
	lihat->BringToFront();
	lihat->sahabat->Visible = true;
	lihat->kisah->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
  if (!lihat)
	lihat = new Tlihat(this);
	lihat->Show();
	lihat->BringToFront();
	lihat->kisah->Visible = true;
	lihat->sahabat->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Shape1->Visible = true;
Label2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Shape2->Visible = true;
Label3->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4MouseLeave(TObject *Sender)
{
Shape2->Visible = false;
Label3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseLeave(TObject *Sender)
{
Shape1->Visible = false;
Label2->Visible = false;
}
//---------------------------------------------------------------------------




//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::AppBarResize()
{
  AppBar->SetBounds(0, AppBar->Parent->Height - AppBarHeight,
	AppBar->Parent->Width, AppBarHeight);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::AppBarShow(int mode)
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
void __fastcall TForm6::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Panel5Click(TObject *Sender)
{
  if (!lihat)
Form1 = new TForm1(this);
Form1->Show();
Form1->BringToFront();
Form6->Close();
kisah_s->Close();
kisah_n->Close();
lihat->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Panel5MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel5->Color = 0x00A7CA1C;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Panel5MouseLeave(TObject *Sender)
{
Panel5->Color = 0x0085A016;
}
//---------------------------------------------------------------------------


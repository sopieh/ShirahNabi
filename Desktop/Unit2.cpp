//---------------------------------------------------------------------------

#include <vcl.h>
#include <memory>
#include <JPEG.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tlihat *lihat;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall Tlihat::Tlihat(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::AppBarResize()
{
  AppBar->SetBounds(0, AppBar->Parent->Height - AppBarHeight,
    AppBar->Parent->Width, AppBarHeight);
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::AppBarShow(int mode)
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
void __fastcall Tlihat::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image26Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();
DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j1->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image26MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image26MouseLeave(TObject *Sender)
{
j1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image27MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image27MouseLeave(TObject *Sender)
{
j2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image27Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j2->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image30Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j3->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image30MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j3->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image30MouseLeave(TObject *Sender)
{
j3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image31Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j4->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image31MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j4->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image31MouseLeave(TObject *Sender)
{
j4->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image32Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j5->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image32MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j5->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image32MouseLeave(TObject *Sender)
{
j5->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image33Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j6->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image33MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j6->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image33MouseLeave(TObject *Sender)
{
j6->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image34Click(TObject *Sender)
{
if (!kisah_s)
	kisah_s = new Tkisah_s(this);
	kisah_s->Show();
	kisah_s->BringToFront();

DM->sahabat->Close();
DM->sahabat->SQL->Clear();
DM->sahabat->SQL->Add("select * from sahabat where judul = '"+j7->Caption+"'");
DM->sahabat->Open();
kisah_s->Memo1->Lines->Text = DM->sahabat->FieldByName("isi")->AsString;
kisah_s->j1->Caption = DM->sahabat->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_s->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->sahabat->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_s->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------


void __fastcall Tlihat::Image2Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd24->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image3Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd1->Caption+"'");
DM->kisah->Open();
kisah_n->jd1->BringToFront();
kisah_n->jd1->Visible=True;
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------
void __fastcall Tlihat::Image4Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd2->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::Image5Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd3->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString ;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);


}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image6Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd4->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image7Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd5->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image8Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd6->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image9Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd7->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image10Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd8->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image11Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd9->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image12Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd10->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image13Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd11->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image14Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd12->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image15Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd13->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image16Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd14->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image17Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd15->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image18Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd16->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image19Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd17->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image20Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd18->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image21Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd19->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image22Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd20->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image23Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd21->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image24Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd22->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image25Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd23->Caption+"'");
DM->kisah->Open();
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------



void __fastcall Tlihat::Image6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd4->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image6MouseLeave(TObject *Sender)
{
jd4->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image11MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd9->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image11MouseLeave(TObject *Sender)
{
jd9->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image16MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd14->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image16MouseLeave(TObject *Sender)
{
jd14->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image21MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd19->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image21MouseLeave(TObject *Sender)
{
jd19->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image2MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd24->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image2MouseLeave(TObject *Sender)
{
jd24->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image7MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd5->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image7MouseLeave(TObject *Sender)
{
jd5->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image12MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd10->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image12MouseLeave(TObject *Sender)
{
jd10->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image17MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd15->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image17MouseLeave(TObject *Sender)
{
jd15->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image22MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd20->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image22MouseLeave(TObject *Sender)
{
jd20->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall Tlihat::Image3MouseLeave(TObject *Sender)
{
jd1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image8MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd6->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image8MouseLeave(TObject *Sender)
{
jd6->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image13MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd11->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image13MouseLeave(TObject *Sender)
{
jd11->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image18MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd16->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image18MouseLeave(TObject *Sender)
{
jd16->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image23MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd21->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image23MouseLeave(TObject *Sender)
{
jd21->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd2->Visible = true;

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image4MouseLeave(TObject *Sender)
{
jd2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image9MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd7->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image9MouseLeave(TObject *Sender)
{
jd7->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image14MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd12->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image14MouseLeave(TObject *Sender)
{
jd12->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image19MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd17->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image19MouseLeave(TObject *Sender)
{
jd17->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image24MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd22->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image24MouseLeave(TObject *Sender)
{
jd22->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image5MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd3->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image5MouseLeave(TObject *Sender)
{
jd3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image10MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd8->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image10MouseLeave(TObject *Sender)
{
jd8->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image15MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd13->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image15MouseLeave(TObject *Sender)
{
jd13->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image20MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd18->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image20MouseLeave(TObject *Sender)
{
jd18->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image25MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd23->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image25MouseLeave(TObject *Sender)
{
jd23->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Panel28Click(TObject *Sender)
{
if (!Form1)
	Form1 = new TForm1(this);
	Form1->Show();
	Form1->BringToFront();
	lihat->Close();
	Form6->Close();
	kisah_s->Close();
	kisah_n->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image34MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
j7->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image34MouseLeave(TObject *Sender)
{
j7->Visible = false;
}
//---------------------------------------------------------------------------



void __fastcall Tlihat::Panel28MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Panel28->Color = 0x00A5988D;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Panel28MouseLeave(TObject *Sender)
{
Panel28->Color = 0x00897A6C;
}
//---------------------------------------------------------------------------
void __fastcall Tlihat::Image28Click(TObject *Sender)
{
if (!kisah_n)
	kisah_n = new Tkisah_n(this);
	kisah_n->Show();
	kisah_n->BringToFront();

DM->kisah->Close();
DM->kisah->SQL->Clear();
DM->kisah->SQL->Add("select * from kisah where judul = '"+jd25->Caption+"'");
DM->kisah->Open();
kisah_n->jd1->Caption = DM->kisah->FieldByName("judul")->AsString;
kisah_n->Memo1->Lines->Text = DM->kisah->FieldByName("isi")->AsString;
TMemoryStream*ms = new TMemoryStream;
TJPEGImage*jp = new TJPEGImage;
kisah_n->IdHTTP1->Get("http://ariefsetya.com/p3m/ShirahNabi/gambar/"+DM->kisah->FieldByName("gambar")->AsString,ms);
ms->Seek(0, soFromBeginning);
jp->LoadFromStream(ms);
kisah_n->Image1->Picture->Assign(jp);

}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image28MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
jd25->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tlihat::Image28MouseLeave(TObject *Sender)
{
jd25->Visible = false;
}
//---------------------------------------------------------------------------






void __fastcall Tlihat::jd1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
jd1->Visible = true;
}
//---------------------------------------------------------------------------



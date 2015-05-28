//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Touch.GestureMgr.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class Tlihat : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *Panel1;
	TEdit *Edit1;
	TImage *logo;
	TPanel *sahabat;
	TImage *Image26;
	TImage *Image27;
	TImage *Image30;
	TImage *Image31;
	TImage *Image32;
	TImage *Image33;
	TImage *Image34;
	TPanel *j1;
	TPanel *j2;
	TPanel *j3;
	TPanel *j4;
	TPanel *j5;
	TPanel *j6;
	TPanel *j7;
	TPanel *Panel28;
	TImage *Image36;
	TPanel *kisah;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TImage *Image14;
	TImage *Image15;
	TImage *Image16;
	TImage *Image17;
	TImage *Image18;
	TImage *Image19;
	TImage *Image20;
	TImage *Image21;
	TImage *Image22;
	TImage *Image23;
	TImage *Image24;
	TImage *Image25;
	TImage *Image2;
	TImage *Image28;
	TPanel *jd1;
	TPanel *jd2;
	TPanel *jd3;
	TPanel *jd4;
	TPanel *jd5;
	TPanel *jd12;
	TPanel *jd10;
	TPanel *jd9;
	TPanel *jd8;
	TPanel *jd7;
	TPanel *jd6;
	TPanel *jd11;
	TPanel *jd13;
	TPanel *jd14;
	TPanel *jd15;
	TPanel *jd16;
	TPanel *jd17;
	TPanel *jd18;
	TPanel *jd21;
	TPanel *jd19;
	TPanel *jd20;
	TPanel *jd22;
	TPanel *jd23;
	TPanel *jd24;
	TPanel *jd25;
	TPanel *Panel2;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall Image26Click(TObject *Sender);
	void __fastcall Image26MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image26MouseLeave(TObject *Sender);
	void __fastcall Image27MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image27MouseLeave(TObject *Sender);
	void __fastcall Image27Click(TObject *Sender);
	void __fastcall Image30Click(TObject *Sender);
	void __fastcall Image30MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image30MouseLeave(TObject *Sender);
	void __fastcall Image31Click(TObject *Sender);
	void __fastcall Image31MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image31MouseLeave(TObject *Sender);
	void __fastcall Image32Click(TObject *Sender);
	void __fastcall Image32MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image32MouseLeave(TObject *Sender);
	void __fastcall Image33Click(TObject *Sender);
	void __fastcall Image33MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image33MouseLeave(TObject *Sender);
	void __fastcall Image34Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image8Click(TObject *Sender);
	void __fastcall Image9Click(TObject *Sender);
	void __fastcall Image10Click(TObject *Sender);
	void __fastcall Image11Click(TObject *Sender);
	void __fastcall Image12Click(TObject *Sender);
	void __fastcall Image13Click(TObject *Sender);
	void __fastcall Image14Click(TObject *Sender);
	void __fastcall Image15Click(TObject *Sender);
	void __fastcall Image16Click(TObject *Sender);
	void __fastcall Image17Click(TObject *Sender);
	void __fastcall Image18Click(TObject *Sender);
	void __fastcall Image19Click(TObject *Sender);
	void __fastcall Image20Click(TObject *Sender);
	void __fastcall Image21Click(TObject *Sender);
	void __fastcall Image22Click(TObject *Sender);
	void __fastcall Image23Click(TObject *Sender);
	void __fastcall Image24Click(TObject *Sender);
	void __fastcall Image25Click(TObject *Sender);
	void __fastcall Image6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image6MouseLeave(TObject *Sender);
	void __fastcall Image11MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image11MouseLeave(TObject *Sender);
	void __fastcall Image16MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image16MouseLeave(TObject *Sender);
	void __fastcall Image21MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image21MouseLeave(TObject *Sender);
	void __fastcall Image2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image2MouseLeave(TObject *Sender);
	void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image7MouseLeave(TObject *Sender);
	void __fastcall Image12MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image12MouseLeave(TObject *Sender);
	void __fastcall Image17MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image17MouseLeave(TObject *Sender);
	void __fastcall Image22MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image22MouseLeave(TObject *Sender);
	void __fastcall Image3MouseLeave(TObject *Sender);
	void __fastcall Image8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image8MouseLeave(TObject *Sender);
	void __fastcall Image13MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image13MouseLeave(TObject *Sender);
	void __fastcall Image18MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image18MouseLeave(TObject *Sender);
	void __fastcall Image23MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image23MouseLeave(TObject *Sender);
	void __fastcall Image4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image4MouseLeave(TObject *Sender);
	void __fastcall Image9MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image9MouseLeave(TObject *Sender);
	void __fastcall Image14MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image14MouseLeave(TObject *Sender);
	void __fastcall Image19MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image19MouseLeave(TObject *Sender);
	void __fastcall Image24MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image24MouseLeave(TObject *Sender);
	void __fastcall Image5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image5MouseLeave(TObject *Sender);
	void __fastcall Image10MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image10MouseLeave(TObject *Sender);
	void __fastcall Image15MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image15MouseLeave(TObject *Sender);
	void __fastcall Image20MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image20MouseLeave(TObject *Sender);
	void __fastcall Image25MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image25MouseLeave(TObject *Sender);
	void __fastcall Panel28Click(TObject *Sender);
	void __fastcall Image34MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image34MouseLeave(TObject *Sender);
	void __fastcall Panel28MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel28MouseLeave(TObject *Sender);
	void __fastcall Image28Click(TObject *Sender);
	void __fastcall Image28MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image28MouseLeave(TObject *Sender);
	void __fastcall jd1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);







































private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall Tlihat(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tlihat *lihat;
//---------------------------------------------------------------------------
#endif

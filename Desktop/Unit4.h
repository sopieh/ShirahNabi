//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
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
#include <Vcl.Dialogs.hpp>
#include <Vcl.MPlayer.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class Tkisah_n : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *Panel;
	TPanel *Panel1;
	TPanel *Panel3;
	TIdHTTP *IdHTTP1;
	TPanel *Panel2;
	TImage *Image1;
	TMemo *Memo1;
	TPanel *Panel4;
	TPanel *jd1;
	TPanel *Panel5;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Panel3Click(TObject *Sender);
	void __fastcall Panel1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel1MouseLeave(TObject *Sender);
	void __fastcall Panel3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel3MouseLeave(TObject *Sender);
	void __fastcall Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4MouseLeave(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);



private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall Tkisah_n(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tkisah_n *kisah_n;
//---------------------------------------------------------------------------
#endif

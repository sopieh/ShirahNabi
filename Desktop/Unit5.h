//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
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
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class Tkisah_s : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *Panel;
	TPanel *Panel6;
	TPanel *Panel5;
	TIdHTTP *IdHTTP1;
	TPanel *j1;
	TPanel *Panel4;
	TMemo *Memo1;
	TImage *Image1;
	TPanel *Panel2;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseLeave(TObject *Sender);
	void __fastcall Panel6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel6MouseLeave(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4MouseLeave(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);



private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall Tkisah_s(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tkisah_s *kisah_s;
//---------------------------------------------------------------------------
#endif

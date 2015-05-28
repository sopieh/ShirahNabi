//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *Panel2;
	TLabel *Label1;
	TImage *Image3;
	TPanel *siroh;
	TPanel *about;
	TPanel *quit;
	TPanel *update;
	TImage *Image1;
	TPanel *Panel1;
	TImage *Image2;
	TImage *Image4;
	TPanel *Panel3;
	TShape *Shape1;
	TLabel *Label2;
	TShape *Shape2;
	TLabel *Label3;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall sirohClick(TObject *Sender);
	void __fastcall quitClick(TObject *Sender);
	void __fastcall aboutClick(TObject *Sender);
	void __fastcall sirohMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall sirohMouseLeave(TObject *Sender);
	void __fastcall aboutMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall aboutMouseLeave(TObject *Sender);
	void __fastcall quitMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall quitMouseLeave(TObject *Sender);
	void __fastcall updateMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall updateMouseLeave(TObject *Sender);
	void __fastcall updateClick(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image4MouseLeave(TObject *Sender);
	void __fastcall Image2MouseLeave(TObject *Sender);






private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

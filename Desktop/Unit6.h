//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
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
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *jd1;
	TImage *Image1;
	TPanel *Panel1;
	TLabel *Label1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TImage *Image2;
	TLabel *Label2;
	TLabel *Label3;
	TImage *Image3;
	TPanel *Panel5;
	TPanel *Panel6;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Panel5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseLeave(TObject *Sender);

private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif

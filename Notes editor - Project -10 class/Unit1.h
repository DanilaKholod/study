//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <AppEvnts.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn6;
        TBitBtn *BitBtn7;
        TApplicationEvents *ApplicationEvents1;
        TMemo *Memo1;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N12;
        TMenuItem *N14;
        TMenuItem *N15;
        TBitBtn *BitBtn9;
        TBitBtn *BitBtn10;
        TBitBtn *BitBtn11;
        TBitBtn *BitBtn12;
        TBitBtn *BitBtn13;
        TBitBtn *BitBtn14;
        TBitBtn *BitBtn8;
        TBitBtn *BitBtn16;
        TBitBtn *BitBtn17;
        TBitBtn *BitBtn18;
        TBitBtn *BitBtn19;
        TBitBtn *BitBtn20;
        TBitBtn *BitBtn21;
        TBitBtn *BitBtn22;
        TBitBtn *BitBtn23;
        TBitBtn *BitBtn24;
        TBitBtn *BitBtn15;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        void __fastcall ApplicationEvents1Message(tagMSG &Msg,
          bool &Handled);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
        void __fastcall BitBtn7Click(TObject *Sender);
        void __fastcall BitBtn8Click(TObject *Sender);
        void __fastcall BitBtn9Click(TObject *Sender);
        void __fastcall BitBtn10Click(TObject *Sender);
        void __fastcall BitBtn11Click(TObject *Sender);
        void __fastcall BitBtn12Click(TObject *Sender);
        void __fastcall BitBtn13Click(TObject *Sender);
        void __fastcall BitBtn14Click(TObject *Sender);
        void __fastcall BitBtn15Click(TObject *Sender);
        void __fastcall BitBtn16Click(TObject *Sender);
        void __fastcall BitBtn17Click(TObject *Sender);
        void __fastcall BitBtn18Click(TObject *Sender);
        void __fastcall BitBtn19Click(TObject *Sender);
        void __fastcall BitBtn20Click(TObject *Sender);
        void __fastcall BitBtn21Click(TObject *Sender);
        void __fastcall BitBtn22Click(TObject *Sender);
        void __fastcall BitBtn23Click(TObject *Sender);
        void __fastcall BitBtn24Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
private:
AnsiString s,z,h;
int t,i,l,a;	// User declarations
public:
int  p;
		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

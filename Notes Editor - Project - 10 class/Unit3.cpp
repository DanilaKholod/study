//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
Form3->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
Form1->Memo1->Clear();
Form3->Visible=false;
if (Form1->p==3) Form1->Close();
Form1->Enabled=true;
Form1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
Form1->Enabled=false;
Form4->Visible=true;
Form3->Visible=false;
}
//---------------------------------------------------------------------------

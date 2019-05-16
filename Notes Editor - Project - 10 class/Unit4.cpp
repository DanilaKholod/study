//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
Form4->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
try
{
Form1->Memo1->Lines->SaveToFile(Edit1->Text+".mus");
Edit1->Clear();
if (Form1->p==1)Form1->Memo1->Clear();
if (Form1->p==3)Form1->Close();
Form4->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
catch(...)
{
ShowMessage ("ֲגוהטעו טלÿ פאיכא");
}

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{
Form5->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
try
{
Form1->Memo1->Lines->LoadFromFile(Edit1->Text+".mus");
Edit1->Clear();
Form5->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
catch(...)
{
ShowMessage("Файл с таким именем не существует.");
Form1->Enabled=false;
Form5->Visible=true;
}

}
//---------------------------------------------------------------------------

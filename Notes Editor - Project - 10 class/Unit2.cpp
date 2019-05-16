//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{

if (RadioButton1->Checked==true) p=100;
if (RadioButton2->Checked==true) p=200;
if (RadioButton3->Checked==true) p=300;
if (RadioButton4->Checked==true) p=400;
if (RadioButton5->Checked==true) p=500;
Form2->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
} ;
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form2->Visible=false;
Form1->Enabled=true;
Form1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
p=200;
}
//---------------------------------------------------------------------------


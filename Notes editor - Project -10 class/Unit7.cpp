//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
{
/*	LeftVolume := StrToInt(Edit1.Text);
	RightVolume := StrToInt(Edit2.Text);
*/
	SetWaveVolume(MakeLong(LeftVolume, RightVolume));
}
//---------------------------------------------------------------------------

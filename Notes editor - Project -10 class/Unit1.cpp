//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TForm1::ApplicationEvents1Message(tagMSG &Msg,
      bool &Handled)

{                        
if (Form1->Enabled==true)
 if (Msg.message==WM_KEYDOWN)
  {

  switch(Msg.wParam)
        {
                 case 81:  // клавиша Q
                 a=1;
                 BitBtn1->SetFocus();
                 BitBtn1->Click();
               //  Timer1->OnTimer;
                 break;
                 case 87:  // клавиша W
                 a=1;
                 BitBtn2->SetFocus();
                 BitBtn2->Click();
                 break;
                 case 69:  // клавиша E
                 a=1;
                 BitBtn3->SetFocus();
                 BitBtn3->Click();
                 break;
                 case 82:   // клавиша R
                 a=1;
                 BitBtn4->SetFocus();
                 BitBtn4->Click();
                 break;
                 case 84:   // клавиша T
                 a=1;
                 BitBtn5->SetFocus();
                 BitBtn5->Click();
                 break;
                 case 89:   // клавиша Y
                 a=1;
                 BitBtn6->SetFocus();
                 BitBtn6->Click();
                 break;
                 case 85:   // клавиша U
                 a=1;
                 BitBtn7->SetFocus();
                 BitBtn7->Click();
                 break;
                 case 65:   // клавиша A
                 BitBtn8->SetFocus();
                 BitBtn8->Click();
                 break;
                 case 83:   // клавиша S
                 BitBtn9->SetFocus();
                 BitBtn9->Click();
                 break;
                 case 68:   // клавиша D
                 BitBtn10->SetFocus();
                 BitBtn10->Click();
                 break;
                 case 70:   // клавиша F
                 BitBtn11->SetFocus();
                 BitBtn11->Click();
                 break;
                 case 71:   // клавиша G
                 BitBtn12->SetFocus();
                 BitBtn12->Click();
                 break;
                 case 72:   // клавиша H
                 BitBtn13->SetFocus();
                 BitBtn13->Click();
                 break;
                 case 74:   // клавиша J
                 a=1;
                 BitBtn14->SetFocus();
                 BitBtn14->Click();
                 break;
                 case 49:   // клавиша 1
                 a=1;
                 BitBtn15->SetFocus();
                 BitBtn15->Click();
                 break;
                 case 50:   // клавиша 2
                 a=1;
                 BitBtn16->SetFocus();
                 BitBtn16->Click();
                 break;
                 case 51:   // клавиша 3
                 a=1;
                 BitBtn17->SetFocus();
                 BitBtn17->Click();
                 break;
                 case 52:   // клавиша 4
                 a=1;
                 BitBtn18->SetFocus();
                 BitBtn18->Click();
                 break;
                 case 53:   // клавиша 5
                 a=1;
                 BitBtn19->SetFocus();
                 BitBtn19->Click();
                 break;
                 case 54:   // клавиша 6
                 a=1;
                 BitBtn20->SetFocus();
                 BitBtn20->Click();
                 break;
                 case 55:   // клавиша 7
                 a=1;
                 BitBtn21->SetFocus();
                 BitBtn21->Click();
                 break;
                 case 56:   // клавиша 8
                 a=1;
                 BitBtn22->SetFocus();
                 BitBtn22->Click();
                 break;
                 case 57:   // клавиша 9
                 a=1;
                 BitBtn23->SetFocus();
                 BitBtn23->Click();
                 break;
                 case 48:   // клавиша 0
                 a=1;
                 BitBtn24->SetFocus();
                 BitBtn24->Click();
                 break;
                 case 32:    // клавиша пробел
                 a=1;
                 s=Memo1->Text;
                 t=Memo1->SelStart;
                 s.Insert(" ",Memo1->SelStart+1);
                 Memo1->Text=s;
                 Memo1->SelStart=t+1;
                 break;
                 case 8:      // клавиша BackSpase
                 a=1;
                 s=Memo1->Text;
                 t=Memo1->SelStart;
                 s.Delete(Memo1->SelStart,1);
                 Memo1->Text=s;
                 Memo1->SelStart=t-1;
                 break;
                 case 46:    // клавиша Delete
                 a=1;
                 s=Memo1->Text;
                 t=Memo1->SelStart;
                 if (Memo1->SelText.Length()==0)
                 s.Delete(Memo1->SelStart+1,Memo1->SelText.Length()+1);
                       else
                       s.Delete(Memo1->SelStart+1,Memo1->SelText.Length());
                 Memo1->Text=s;
                 Memo1->SelStart=t;
                 break;


         }
   }     
}

//---------------------------------------------------------------------------


void __fastcall TForm1::N7Click(TObject *Sender)
{
Form1->Enabled=false;
Form2->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N5Click(TObject *Sender)
{
if ((Memo1->Text=="")||(Memo1->Text==h)) Form1->Close();
else
{
p=3;
Form3->Visible=true;
}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::N2Click(TObject *Sender)
{
if ((Memo1->Text!="")&&(Memo1->Text!=h))
{
p=1;
Form3->Visible=true;
Form1->Enabled=false;
}
else
Form1->Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{

z=Memo1->Text;
if (Memo1->Text=="") ShowMessage("Нотный стан пуст");
else
   {
        z=Memo1->Text;
        Memo1->Clear();
        for (i=1;i<=z.Length();i=i+1)
                {
               // Application->ProcessMessages();
                if (z[i]=='d') { BitBtn1->SetFocus(); Memo1->Text=Memo1->Text+z[i]; Memo1->Update();Beep(256,Form2->p);}
                if (z[i]=='r') {BitBtn2->SetFocus();  Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(288,Form2->p);}
                if (z[i]=='m') {BitBtn3->SetFocus();  Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(320,Form2->p);}
                if (z[i]=='f') { BitBtn4->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(344,Form2->p);}
                if (z[i]=='s') { BitBtn5->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(384,Form2->p);}
                if (z[i]=='l') { BitBtn6->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(427,Form2->p);}
                if (z[i]=='c') { BitBtn7->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(480,Form2->p);}
                if (z[i]=='D') { BitBtn8->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(513,Form2->p);}
                if (z[i]=='R') { BitBtn9->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(577,Form2->p);}
                if (z[i]=='M') {BitBtn10->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(641,Form2->p);}
                if (z[i]=='F') {BitBtn11->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(677,Form2->p);}
                if (z[i]=='S') { BitBtn12->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(749,Form2->p);}
                if (z[i]=='L') { BitBtn13->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(850,Form2->p);}
                if (z[i]=='C') { BitBtn14->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(950,Form2->p);}
                if (z[i]=='1') { BitBtn15->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(272,Form2->p);}
                if (z[i]=='2') {BitBtn16->SetFocus();  Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(304,Form2->p);}
                if (z[i]=='3') { BitBtn17->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(364,Form2->p);}
                if (z[i]=='4') { BitBtn18->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(406,Form2->p);}
                if (z[i]=='5') { BitBtn19->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(453,Form2->p);}
                if (z[i]=='6') { BitBtn20->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(545,Form2->p);}
                if (z[i]=='7') { BitBtn21->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(609,Form2->p);}
                if (z[i]=='8') { BitBtn22->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(713,Form2->p);}
                if (z[i]=='9') { BitBtn23->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(800,Form2->p);}
                if (z[i]=='0') { BitBtn24->SetFocus(); Memo1->Text=Memo1->Text+z[i];Memo1->Update();Beep(900,Form2->p);}

                Sleep (200);

                }
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N4Click(TObject *Sender)
{
if (SaveDialog1->Execute())
 {
  p=2;
  Memo1->Lines->SaveToFile(SaveDialog1->FileName+".mus");
 }
/*
Form1->Enabled=false;
h=Memo1->Text;
Form4->Visible=true;
*/
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
if (OpenDialog1->Execute())
 {
  p=2;
  Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
 }

/*
Form1->Enabled=false;
Form5->Visible=true;
*/
}
//---------------------------------------------------------------------------





void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
    Beep(256,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("d",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
    Beep(288,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("r",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
    Beep(320,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("m",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
    Beep(344,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("f",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
    Beep(384,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("s",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
    Beep(440,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("l",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------
  
void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
    Beep(480,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("c",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{
    Beep(513,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("D",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{
    Beep(577,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("R",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)
{
    Beep(641,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("M",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn11Click(TObject *Sender)
{
    Beep(677,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("F",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn12Click(TObject *Sender)
{
    Beep(749,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("S",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn13Click(TObject *Sender)
{
    Beep(850,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("L",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn14Click(TObject *Sender)
{
    Beep(950,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("C",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn15Click(TObject *Sender)
{
    Beep(272,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("1",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn16Click(TObject *Sender)
{
    Beep(304,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("2",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn17Click(TObject *Sender)
{
    Beep(364,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("3",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn18Click(TObject *Sender)
{
    Beep(406,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("4",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn19Click(TObject *Sender)
{
    Beep(453,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("5",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn20Click(TObject *Sender)
{
    Beep(545,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("6",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn21Click(TObject *Sender)
{
    Beep(609,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("7",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn22Click(TObject *Sender)
{
    Beep(713,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("8",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn23Click(TObject *Sender)
{
    Beep(800,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("9",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn24Click(TObject *Sender)
{
    Beep(900,Form2->p);
    t=Memo1->SelStart;
    s=Memo1->Text;
    s.Insert("0",Memo1->SelStart+1);
    Memo1->Text=s;
    Memo1->SelStart=t+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if (a==1) Memo1->SetFocus();
a=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
Form6->Visible=true;
}
//---------------------------------------------------------------------------



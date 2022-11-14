//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
class TestClass: public TObject{};

void __fastcall TForm1::FormClick(TObject *Sender)
{
    // TForm* myForm = (TForm*)Sender;
    // TForm* myForm = static_cast<TForm*>(Sender);
    // ShowMessage(myForm->Caption);

    if( dynamic_cast<TButton*>(Sender)){
      TButton* btn = dynamic_cast<TButton*>(Sender);
      ShowMessage(btn->Caption);
       return;
   }
   if( dynamic_cast<TLabel*>(Sender)){
      ShowMessage(dynamic_cast<TLabel*>(Sender)->Caption);
       return;
   }
   if( dynamic_cast<TPanel*>(Sender)){
      ShowMessage(dynamic_cast<TPanel*>(Sender)->Caption);
      return;
   }
   ShowMessage("Not found");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
     TestClass *test = new TestClass();
     Form1->FormClick(test);
}
//---------------------------------------------------------------------------


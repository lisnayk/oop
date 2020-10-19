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
class MyException {
   protected:
    AnsiString msg;
   public:
         MyException(AnsiString msg = "MyExceptoon message"):msg(msg){}
         AnsiString getMessage(){
         return this->msg;
         }
};
class MyConvertException: public MyException {
       public:
           MyConvertException(AnsiString msg = "MyExceptoon message"): MyException(msg){
           }
};
int TForm1::getUserValue() throw(int){
  int res = 0;
     try {
       res =  Edit1->Text.ToInt();
     } catch (...){
         throw new MyConvertException("User data is invalid");
     }
     return res;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   try {
       int a= Form1->getUserValue();
       Label1->Caption = Edit1->Text;
   }  catch(int err){
        Label1->Caption = "Integer exceptio!";
    } catch(MyConvertException* err){
        Label1->Caption = err->getMessage();
    } catch(MyException* err){
        Label1->Caption = err->getMessage();
   }
   catch(...){
        Label1->Caption = "Convertation error!";
   }


}
//---------------------------------------------------------------------------

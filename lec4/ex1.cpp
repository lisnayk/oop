//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>

#pragma hdrstop

//---------------------------------------------------------------------------

class ClassName {
public:
 int publicDate;
 int getDate(){
      //return this->data;
      return data;
 }
 void setData(int data){
      this->data = data;
 }
// ...
private:
 int data;
// ...

};

#pragma argsused
int main(int argc, char* argv[])
{
ClassName myclass;

myclass.setData(10);
cout <<   myclass.getDate() << "\n";
        return 0;
}
//---------------------------------------------------------------------------

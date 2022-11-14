//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
class BaseClass {
  public:
  int data;

  /*BaseClass():data(0){
     cout << "Base default constructor"<< endl;
  }
  BaseClass(int _data):data(_data){
     cout << "Init default constructor"<< endl;
  }     */
};

class Derived: public BaseClass {
  public:

  /*Derived(int _data = 0):BaseClass(_data){
     cout << "Derived default constructor"<< endl;
  } */
  void Print(){
    cout << "Data = "<< this->data << endl;
  }

};

int main(int argc, char* argv[])
{
  Derived d;
  d.Print();
  system("PAUSE");
  return 0;
}
//---------------------------------------------------------------------------
 
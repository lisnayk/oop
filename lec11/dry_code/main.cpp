//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
void Log(char *str){
    cout << " >>> "<< str << "\n";
    // We can log to file or network here
}
class TestClass {
  public:
     TestClass(){
        //cout << "Constructor was called" << "\n";
        Log("Constructor was called");
     }
     ~TestClass(){
        //cout << "Destructor was called" << "\n";
        Log("Destructor was called");
     }

};

int main(int argc, char* argv[])
{
  TestClass *test = new TestClass();
  //...
  delete test;
  system("PAUSE");
  return 0;
}
//---------------------------------------------------------------------------
 
//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused

#include <iostream.h>

class TestClass;

class MyFriendClass {
 public:
   void print(TestClass a);
};

class FullFriendClass {
  public:
    void print(TestClass a);
};

class TestClass {

 friend FullFriendClass;
 friend void print(TestClass);
 friend void MyFriendClass::print(TestClass);

 private:
   int data;
 public:
  TestClass(int a = 100):data(a){}
};

void print(TestClass a){
  cout << a.data << "\n";
}
void MyFriendClass::print(TestClass a){
  cout << a.data << "\n";
}
void FullFriendClass::print(TestClass a){
  cout << a.data << "\n";
}

int main(int argc, char* argv[])
{
  TestClass a(178);
  FullFriendClass b;
  MyFriendClass c;
  b.print(a);
  c.print(a);
  print(a);
  system("Pause");
  return 0;
}
//---------------------------------------------------------------------------
 
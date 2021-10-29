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
  TestClass():data(100){}
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
   TestClass a;
   FullFriendClass b;
   //print(a);
   b.print(a);
   system("Pause");
   return 0;
}
//---------------------------------------------------------------------------


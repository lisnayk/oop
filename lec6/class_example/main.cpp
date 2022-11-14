//---------------------------------------------------------------------------

#pragma hdrstop

#include "TStudent.h"
struct SName{
  // Always paublc
  int data;
  // ...

};
union UName {
  // Always paublc
  int data;
  // ...
};
class CName {
// Always private
 int data;
 // ...
};

void foo(TStudent s){
   // ...
}
void fooL(TStudent& s){
   // ...
}
void fooP(TStudent* s){
   // ...
}
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
  UName uInstance;
  SName sInstance;
  CName cInstance;

  uInstance.data = 10;
  sInstance.data = 10;
  // cInstance.data = 10;
  TStudent  student,
            // student2 = student, //~     student4(student) initialization
            student3=3,
            student4(student),
            student5(3,4),
            &lstudent = student,
            *pstudent;

  /*cout << "____________________________________\n";
  cout << TStudent::getCounter()<<"\n";
  cout << "____________________________________\n";
  TStudent *pS = new TStudent();
  // ...
  cout << TStudent::getCounter()<<"\n";
  delete pS; // call yavno
  cout << student.getCounter()<<"\n";

  {
    TStudent s;
  } // Call destructot ne yavno
  cout << "____________________________________\n";
  student2 = student;   // assign
  cout << "____________________________________\n";  */

  foo(student);
  fooL(student);
  fooP(&student);     */

  system("pause");
  return 0;
}
//---------------------------------------------------------------------------

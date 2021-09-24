//---------------------------------------------------------------------------

#ifndef TStudentH
#define TStudentH
#include <iostream.h>
class TStudent  {

 private:
  int age;
  int group;
  int marks[10];
  static int counter;
 public:
    static int getCounter(){
     return TStudent::counter;
   }
   static void incCounter(){
     TStudent::counter++;
   }
   static void decCounter(){
      TStudent::counter--;
   }
   int getAge(){
     return age;
   }
   void setAge(int age){
      (*this).age = age;
      this->age = age;
   }
   int getGroup();
   void setGroup(int val);
   // ... Other getters andn setters
   TStudent(int age, int group){
       TStudent::incCounter();
      cout << "Init constructor\n";
   }
   TStudent(const TStudent& object){
        TStudent::incCounter();
       cout << "Copy constructor\n";
   }
   TStudent(){
        TStudent::incCounter();
       cout << "Default constructor\n";
   }
   TStudent(int age){
        TStudent::incCounter();
       cout << "Type convert constructor\n";
   }
   ~TStudent(){
        TStudent::decCounter();
       cout << "Destructor\n";
   }
};
//---------------------------------------------------------------------------
#endif

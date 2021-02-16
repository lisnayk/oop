//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
// Abstract class
// Interface
class Student;

class PrintAble {
  public: virtual void print() = 0;
};

class Student: public PrintAble {
  public:
    int getAge(){
      return age;
    }
    void setAge(int age){
      this->age = age;
    }
    const char * getName() const{
      return name;
    }
    void setName(const char* name){
      if (!name){
      strcpy(this->name, "");
      } else {
      strcpy(this->name, name);
      }
    }
    const char * getGroup() const{
      return group;
    }
    void setGroup(const char* group){
      if (!group) {
      strcpy(this->group, "");
      } else {
      strcpy(this->group, group);
      }
    }
    void print(){
      cout << "Srudent "<< getName()<< " ("<<getGroup()<<") " << "age is "<< getAge() << "\n";
    }

    // Default constructor
    // Convert constructor
    // Init constructor
    Student(int age = 0, char * name = 0, char * group = 0){
      this->group = new char[10];
      this->setAge(age);
      this->setName(name);
      this->setGroup(group);
    }
    // Copy constructor
    Student(const Student &value){
      this->group = new char[10];
      this->setAge(value.age);
      this->setName(value.getName());
      this->setGroup(value.getGroup());
    }
    ~Student(){
       delete [] group;
    }

  protected:
    int age;
    double angBall;
    char* group;
    char name[255];
};

class Group: public PrintAble {
    public:
    void add(Student& s){
      arr[size] = &s;
      size++;
    }
    void print(){
      cout  << "Student group -----------------------\n";
     for(int i=0; i<size; i++){
      arr[i]->print();
     }
      cout  << "End Student group -------------------\n";
    };
    Group(){
       size = 0;
    }
    protected:
    int size;
    Student* arr[10];
};

class Printer {
    public: Print(const PrintAble& pritable){
        pritable.print();
        cout  << "-----------------------\n";
    }
};

class Zaochnik: public Student {
  public:
    const char * getWork() const{
      return this->work;
    }
    void setWork(const char* work){
      if (!work) {
      strcpy(this->work, "");
      } else {
      strcpy(this->work, work);
      }
    }
    Zaochnik(int age = 0, char * name = 0, char * group = 0, char* work=0):Student(age, name, group){
      this->setWork(work);
    }

    void print(){
      cout << "Zaochik "<< getName()<< " ("<<getGroup()<<") " << "age is "<< getAge() << "\n";
    }
  protected:
    char work[255];

};
class Dnevnik: public Student {
  public:
    void print(){
      cout << "Dnevnik "<< getName()<< " ("<<getGroup()<<") " << "age is "<< getAge() << "\n";
    }
};

int main(int argc, char* argv[])
{
  Student s(25,"Vasya", "6.1269-z"),
          s2 = s,
          s3(s),
          s4 = 25;
  Zaochnik z1(24,"Ivanow", "6.1269-z","ZNU");
  Zaochnik z2(25,"Sidorov", "6.1269-z","ZNU");
  Zaochnik z3(26,"Petrov", "6.1269-z","ZNU");
  Dnevnik d1;

  Student* sPointer = new Student();

   sPointer = new Zaochnik();
   sPointer = new Dnevnik();

   sPointer->print();

  Printer printer;
  Group group;

  group.add(z1);
  group.add(z2);
  group.add(z3);
  group.add(s);
  group.add(d1);


  printer.Print(z3);
  printer.Print(s);
  printer.Print(group);


  /*s.setAge(25);
  s.setName("Vasya");
  s.setGroup("6.1269-z");*/

  /* s.print();
  s2.print();
  s3.print();
  s4.print(); */

  system("PAUSE");
  return 0;
}
//---------------------------------------------------------------------------
 
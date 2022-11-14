
#include <iostream>
#include <string>
#include <stdlib>

// Interface and abstract class
class IPrintable {
   public:
     virtual void print() = 0;
};

// Abstract class
class GObject: public  IPrintable {
  public:
    void print(){
     std::cout << " It is GObject"<< '\n';
    }
  virtual double area() = 0;
  virtual double perimetr() = 0;

};
class Circle: public GObject {
  protected:
    double r;
  public:
  double area(){
    return 3.14*r*r;
  }
  double perimetr(){
   return 3.14*2*r;
  }
};

// Abstract
class Animal: public IPrintable
{
  protected:
    std::string m_name;

    // Мы делаем этот конструктор protected так как не хотим, чтобы пользователи имели возможность создавать объекты класса Animal напрямую,
    // но хотим, чтобы в дочерних классах доступ был открыт
    Animal(std::string name)
        : m_name(name)
    {

         std::cout << "Animal constructor \n";
    }


  public:
    std::string getName() { return m_name; }
    virtual const char* speak() = 0;
    virtual ~Animal(){

       std::cout << "Animal destructor \n";
    }
    void print(){
     std::cout << this->getName() << " says " << this->speak() << '\n';
    }
};

class Cat: public Animal
{
   int * data;
  public:
    Cat(std::string name)
        : Animal(name)
    {
         data = new int[100];
        std::cout << "Cat constructor (data is created)\n";
    }

    virtual const char* speak() { return "Meow"; }

    virtual void  move() { std::cout << "Cat make a step"; }

    virtual ~Cat(){
        delete [] data;
        std::cout << "Cat destructor (data is cleared)\n";
    }
};

class Dog: public Animal
{
  public:
    Dog(std::string name)
        : Animal(name)
    {
         std::cout << "Dog constructor\n";
    }

    virtual ~Dog(){
        std::cout << "Dog destructor\n";
    }
    const char* speak() { return "Woof"; }
};

void report(IPrintable &item)
{
    item.print();
}

class EmptyClass {
  public:
  int data;
  virtual void print(){}
};
//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
  Animal* a = new Cat("Murchik");
  //Cat *pcat = new Cat("Vasy");
  //pcat->move();
  //std::cout << "\nSome logic\n\n";
  delete a;
  //delete pcat;

  //Cat cat("Matros");
  //Dog dog("Barsik");
  //Circle g;

  // std::cout << cat.speak() << "\n";
  // std::cout << dog.speak() << "\n";

  //report(cat);
  //report(dog);
  //report(g);

  // std::cout << sizeof(EmptyClass) << "\n";

  //Animal* pAnimal = new Cat("Murchik");



  //delete pAnimal;

  system("pause");
  return 0;
}
//---------------------------------------------------------------------------
 
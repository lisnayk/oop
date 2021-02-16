
#include <iostream>
#include <string>
#include <stdlib>

class IPrintable {
   public:
     virtual void print() = 0;
};

class GObject: public  IPrintable {
  public:
    void print(){
     std::cout << " It is GObject"<< '\n';
    }
};
class Animal: public IPrintable
{
  protected:
    std::string m_name;

    // Мы делаем этот конструктор protected так как не хотим, чтобы пользователи имели возможность создавать объекты класса Animal напрямую,
    // но хотим, чтобы в дочерних классах доступ был открыт
    Animal(std::string name)
        : m_name(name)
    {
         std::cout << "Animal constructor\n";
    }


  public:
    std::string getName() { return m_name; }
    virtual const char* speak() = 0;
    virtual ~Animal(){
        std::cout << "Animal destructor\n";
    }
    void print(){
     std::cout << this->getName() << " says " << this->speak() << '\n';
    }
};

class Cat: public Animal
{
  public:
    Cat(std::string name)
        : Animal(name)
    {
         std::cout << "Cat constructor\n";
    }

    virtual const char* speak() { return "Meow"; }
    virtual ~Cat(){
        std::cout << "Cat destructor\n";
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
    virtual const char* speak() { return "Woof"; }
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
  Cat cat("Matros");
  Dog dog("Barsik");
  GObject g;

  //std::cout << cat.speak() << "\n";
  //std::cout << dog.speak() << "\n";

  report(cat);
  report(dog);
  report(g);

  // std::cout << sizeof(EmptyClass) << "\n";

  //Animal* pAnimal = new Cat("Murchik");



  //delete pAnimal;

  system("pause");
  return 0;
}
//---------------------------------------------------------------------------
 
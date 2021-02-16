#include <cstdlib>
#include <iostream>

using namespace std;

class  Base {
 public:
      int data;
      int data1[10];
 public:
     Base(){
        data = 34;
        cout << "Base default constructor " << endl;
     }
     Base(int i):data(i){
           cout << "Base constructor " << i <<endl;
     }
     void Method(){
             cout << "Base Method = " <<data<< endl;
     }
     ~Base(){
              cout << "Base destructor " <<endl;
     }
};
//class FirstChild : public virtual Base {
class FirstChild : public  Base {
   public:
   FirstChild():Base(36){
     cout << "FirstChild constructor " <<data<<endl;
   }
   /*void Method(){
        cout << "FirstChild Method" << endl;
   }    */
   ~FirstChild(){
              cout << "FirstChild destructor " <<endl;
     }
};
//class SecondChild : public virtual Base {
class SecondChild : public  Base {
   public:
   SecondChild():Base(12){
     cout << "SecondChild constructor " <<data<<endl;
   }
   /* void Method(){
        cout << "SecondChild Method" << endl;
   }*/
};
class BothChild : public  FirstChild, public  SecondChild{

   public:
   BothChild() {
     cout << "BothChild constructor " <<SecondChild::data<<endl;
   }
   void Method(){
        SecondChild::Method();
        cout << "BothChild Method" << endl;
   }
};

int main(int argc, char *argv[])
{
    //FirstChild *child = new FirstChild();
    // child->Method();
   //SecondChild *child = new SecondChild();
    //child->Method();

   // delete child;
    BothChild b;
    b.FirstChild::Method();
    b.SecondChild::Method();
    cout << "size = " << sizeof(Base) << "\n";
    cout << "size = " << sizeof(FirstChild) << "\n";
    cout << "size = " << sizeof(BothChild) << "\n";
    //b.Method();
    system("PAUSE");
    return EXIT_SUCCESS;
}



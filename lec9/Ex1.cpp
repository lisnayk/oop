//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdlib.h>

#include <cstdlib>
#include <iostream>

using namespace std;

class TestConst {
   public: 
      int data;
      //const int data2 = 10; -- error
      const int  data2;
      const int  data3;
      mutable int editable;
   int getData2() const {
       editable++;
       cout  << "Const getData2" << editable << endl;
   }
   int getData() const {
       this->editable++;
       cout  << "Const getData" << this->editable << endl;
       // this->getData2(); // ++
       // this->editable = 1;
       // dataChange(); - error compile time
   }
   int getData() {
       cout  << "getData" << endl;
       this->data = 1;
       cout  << "getData = " <<this->data << endl;
   }
   int dataChange (){
        cout  << "dataChange" << endl;
        this->data = 10;
   }
   void Print(){
        cout << "";
   }
   TestConst():data2(10),data3(100){
   editable = 0;
      //data3 = 100;  -- error compile time
      //data2 = 10;   -- error compile time
        data = 0;      
   }       
};

int main(int argc, char *argv[])
{
    TestConst t;
    t.getData();
    //t.dataChange();
    t.data = 10;
    const TestConst ct;
    ct.getData();
    ct.getData();
    ct.getData();
    ct.getData();
    //ct.data = 100; -- error compile time
    //ct.dataChange(); -- error  compile time
    system("PAUSE");
    return EXIT_SUCCESS;
}


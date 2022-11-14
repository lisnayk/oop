#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;

class MyEx {};
class MySEx {};
class MyBadEx {};
class MySecondBadEx {};
// Без спецификации исключений unexpected не вызываетчя
void ThrMyEx() { //throw(MyEx){
     throw MyEx();
}
void ThrMySEx() { //throw(MySEx){
     throw MySEx();     
}
void ThrNoEx() throw(MySEx, MyBadEx){ //throw(MySEx){
     throw 1;
}

void F(){
      cout << "My terminate function! ";
      system("PAUSE");
      exit;  // abort();
}
void U() throw(MyBadEx) {
     cout << "My unexpected function! ";
     system("PAUSE");
     throw MyBadEx();   // -- all ok
     //throw MySecondBadEx();    next terminate

}
// catch NO EXCEPTION
/*void U() throw(MyBadEx) {
     cout << "My unexpected function! ";
     system("PAUSE");
    // throw MyBadEx();
     throw MySecondBadEx();
}*/

void bad_test() throw(bad_exception, MyEx){
// void bad_test() throw(MyEx){ terminate
	throw MyEx();
}
void f1();
void f2();
void f3();
void Test(){
  try {
   f1();
   } catch(int){
   //
   }
}
void f1(){
  f2();
}
void f2(){
  f3();
}
void f3(){
  throw 1;
}
int main(int argc, char *argv[]){

    set_terminate(F);
    set_unexpected(U);

    // ThrNoEx();
    //Catch MyEx

    /*try {
        //ThrMyEx();
        ThrMySEx();
        // ...
    } catch(MyEx ex){
          cout << "MyEx! \n";
          //throw MySEx();
    } catch(...){
          cout << "Unknown! \n";
    }*/
    // catch(...)
    /*try {
        ThrMySEx();
        
    } catch(MyEx ex){
          cout << "MyEx! \n";     
          throw MySEx();
    } catch(...){
          cout << "Unknown! \n"; 
    } */
    // catch NO EXCEPTION

      try {
            ThrNoEx();

      } catch(MyEx ex){
             cout << "MyEx! \n";

        } catch(MyBadEx b){
              cout << "bad_exception! \n";

        }

     /*try {
            bad_test();
            
        } catch(MyEx ex){
              cout << "MyEx! \n";     
              
        } catch(bad_exception b){
              cout << "bad_exception new! \n"; 
                     
        }
        */
    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <iostream>
using namespace std;
typedef void (*PPrinter)(int); 

void f(int a){
	cout << a << endl; 
}

void f1(int a){
	cout << a*2 << endl; 
}

void Logger(int a, PPrinter printer) {
	printer(a);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PPrinter p = &f;
	PPrinter p1 = &f1;
	Logger(10, p);	
	Logger(10, p1);
  system("pause");
	return 0;
}

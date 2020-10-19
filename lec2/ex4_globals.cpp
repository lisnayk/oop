#include <iostream>
#include <iostream>
#include <iostream>
#include "mylib.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gA =1;
void fun();
void fun(){
	static int count =                   0;
	count++;
	cout << "Count = "<< count << endl;
}

int main(int argc, char** argv) {
   
   cout << sum(1,2);
	
	//int *p = 0;
	//*p = 10;
	//p = new int[100];
	
	//delete [] p;
	
	//int a = 10;
	//int &b = a, c;
	//int *p = 0;
	
	//p = &a;
	//cout <<"p = "<< p << "  *p = "<< *p << endl;
	//*p= 100;
	//cout <<"a = "<< a << "  *p = "<< *p << endl;
	
	//b = 3;
	//int arr[2][2][2] = {{1,1}, {2,2}, {3,3}}
	//int val = 0;
	//for(int i = 0; i++; i<2){
	//	int &e = arr[i][i][i]; 
	//	e = q;
	//	arr[i][i][i] = arr[i][i][i]/2;
	//}
	
	//cout <<"a = "<< a <<"  b = "<< b << endl;

	return 0;
}

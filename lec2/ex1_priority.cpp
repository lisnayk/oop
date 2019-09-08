#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	int a = 1, 
		b = 1, 
		c;
	//postfix
	c = a++; 
	cout << "Res = " <<  c << endl;
	//prefix
	c = ++b;
	cout << "Res = " <<  c << endl;
	// Ex1
	cout << "a = " <<  a << "   b = " << b <<  endl;
	c = b+++a;
	cout << "b+++a = " <<  c << endl;
	//Ex2
	cout << "a = " <<  a << "   b = " << b <<  endl;
	c = b++ + ++a;
	cout << "b++ + ++a = " <<  c << endl;
	//Ex3
	cout << "a = " <<  a << "   b = " << b <<  endl;
	if (++a == b) {
	   cout << "++a == b = true"  << endl;	
	} else {
	   cout << "++a == b = false" <<  endl;
	}
	//Ex4
	cout << "a = " <<  a << "   b = " << b <<  endl;
	if (a == b--) {
	   cout << "a == b-- = true"  << endl;	
	} else {
	   cout << "a == b-- = false" <<  endl;
	}
	cout << "a = " <<  a << "   b = " << b <<  endl;
		
	system("pause");
	return 0;
}

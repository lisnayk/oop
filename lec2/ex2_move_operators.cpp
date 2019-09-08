#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	unsigned char a = 100;
	unsigned char b = 1;
	
	int size = sizeof(a)*8;
	cout  <<"Int value = "<< (int)a << "\nsizeof(value) = "<< sizeof(a)<< endl;
	b = b << size - 1;
	cout  <<"b << "<< size - 1 << " = " << (int)b << endl;
	cout  <<"Bin value = ";
	for(int i=0; i < size; i++){
		bool res = (a & b) > 0;
		//cout  << b <<" " <<res << endl;
		if ((i > 0) && (i % 4 == 0)) cout << " ";
		cout  << res;
		b = b >> 1;
	}
	cout << endl;
	
	system("pause");
	return 0;
}

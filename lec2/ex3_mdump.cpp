#include <iostream>
#include <stdlib.h>
using namespace std;
void mdump(char a){
	unsigned char b = 1;
	int size = sizeof(a)*8;
	b = b << size - 1;
	for(int i=0; i < size; i++){
		bool res = (a & b) > 0;
		if ((i > 0) && (i % 4 == 0)) cout << " ";
		cout  << res;
		b = b >> 1;
	}
}
//See: https://en.wikipedia.org/wiki/Double-precision_floating-point_format
int main(int argc, char** argv) {
	char *a = new char[8];
	double val = 1.0/3;
	void *p = &val;
	a = (char*) p;
	for (int i=7;i>=0;i--){
		mdump(a[i]);
		cout <<" ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

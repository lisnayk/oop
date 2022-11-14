#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int *arr){
	return 0;
}
int sum(int **arr){
	return 0;
}
int sum(int ***arr){
	return 0;
}
/*int sum(int *[3][3]arr){
	return 0;
}*/
int main(int argc, char** argv) {
  int a[] = {1,2,3};
  int *pa = a + 1;


  cout << a << endl;
  cout << *a << endl;
  cout << *pa << endl;
   cout << *(pa+1) << endl;

 /*	int *pInt = new int;
	float *pFloat = new float;
	void * pVoid;
	*pInt = 1;
	*pFloat = 10.56;
	pVoid = pFloat; 
	pInt = (int*)pVoid;	 
	cout<<sizeof(int)<<" " << *pInt<< endl;
	
	cout << sizeof(float)<< " "<<*pFloat<< endl;
	delete pInt;
	delete pFloat;    */
  system("PAUSE");
	return 0;
}

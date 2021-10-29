//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include "TComplex.h"
#include "TVector.h"
void print(TVector& v) {
   TVector::iterator iterator;
   cout << "(";
   for(iterator = v.begin(); iterator < v.end(); iterator++){

      double current =  *iterator;
      cout << current << ", ";
   }
   cout << ")\n";
   cout << "Object count = " << TVector::getCount() << "\n";
};
void print2(TVector& v) {
   TVector::iterator iterator;
   cout << "(";
   for(int i = 0; i<v.length(); i++){

      cout << v[i] << ", ";
   }
   cout << ")\n";
   cout << "Object count = " << TVector::getCount() << "\n";
};

int main(int argc, char* argv[])
{
  double arr[5] = {1,4,56,7,87};
  TVector v(arr, 5), v2, v3;
  print(v);
  v2 = v*14;
  v3 = v2;
  print2(v2);
  /* TComplex example
  TComplex c(10,12), c1(14,34),  res;
  res =  c+c1;
  cout << c << "  c + c1 = "<< res << endl;
  cout << c << "  c + 1 = "<< c.operator +(1) << endl; // ??

  cout << c << "  1 - c = "<< 1 - c << endl;
  cout << c << "  c - 1 = "<< c - 1 << endl;
  cout << c << "  c + 1 = "<< c + 1 << endl;
  // cout << c << "  1 + c = "<< 1 + c << endl;
  cout << -c << "  -c+1 = "<< -c + 1 << endl;
  */
  system("PAUSE");
  return 0;
}
//---------------------------------------------------------------------------
 
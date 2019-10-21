//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <stdlib.h>
#include <TVector.h>
#pragma hdrstop

//---------------------------------------------------------------------------
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
TVector scale(TVector& v, double val){
    return v.mul(val);
}
TVector newvector(){
   TVector tm;
   return tm;
}

#pragma argsused
int main(int argc, char* argv[])
{
   TVector v4 = newvector();
   double arr[5] = {1,4,56,7,87};
   //T
   Vector v(arr, 5);
   //print(v);
   //v.resize(3);
   //print(v);
   //TVector v3 = scale(v,3);
   //print(v3);
   //cout << "Object count = " << TVector::getCount() << "\n";
   system("PAUSE");
   return 0;
}
//---------------------------------------------------------------------------
 
//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused

#include <iostream.h>
#include "TComplex.h"

int main(int argc, char* argv[])
{
 TComplex a(1,1), b(2,2);
 TComplex c;

 c = a+b;
 cout << a << "+" << b << " = "<< c << "\n";
  system("PAUSE");
   return 0;
}
//---------------------------------------------------------------------------
 
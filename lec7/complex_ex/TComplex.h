//---------------------------------------------------------------------------

#ifndef TComplexH
#define TComplexH

#include <iostream.h>
class TComplex {
   private:
      double re;
      double im;
   public:

   explicit TComplex(double _re = 0, double _im = 0):re(_re),im(_im){
    cout << "Default and init and convert constructor.\n" << endl;
   }

   TComplex operator = (const TComplex& val){
      cout << "operator = was called\n";
      re = val.re;
      im = val.im;
      return *this;
   }
   // Deny 1 + c   Allow c + 1
   TComplex operator + (const TComplex& val){
      cout << "Method +" << endl;
      return TComplex(this->re + val.re, this->im + val.im);
   }
   TComplex operator - () {
    return TComplex(- re, -im);
   }
   TComplex operator -- (int) {
    return TComplex(re--, im);
   }

   friend TComplex operator - (const TComplex& val1, const TComplex& val2);
   // friend TComplex operator + (const TComplex& val1, const TComplex& val2);
   friend ostream& operator << (ostream& out , const TComplex& c);
};

ostream& operator << (ostream& out , const TComplex& c){
   cout << "External <<" << endl;
   return  out << "("<<  c.re << "; "<< c.im << ")";
};
TComplex operator - (const TComplex& val1, const TComplex& val2){
   cout << "External -" << endl;
   return TComplex(val1.re - val2.re, val1.im - val2.im);
}
TComplex operator - (const double& val1, const TComplex& val2){
   cout << "External -" << endl;
   return TComplex(val1 - val2.re, -val2.im);
}
TComplex operator - (const const TComplex& val2, double& val1){
   cout << "External -" << endl;
   return TComplex(val2.re - val1, val2.im);
}
/*
TComplex operator + (const TComplex& val1, const TComplex& val2){
   return TComplex(val1.re + val2.re, val1.im + val2.im);
}
*/

//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef TComplexH
#define TComplexH
#include <iostream.h>
class TComplex {
   private:
      double re;
      double im;
   public:

   TComplex(double _re = 0, double _im = 0):re(_re),im(_im){}

   friend TComplex operator + (const TComplex&, const TComplex&);
   friend ostream& operator << (ostream& out , const TComplex& c);

};

TComplex operator + (const TComplex & a , const TComplex& b){
   return TComplex(a.re + b.re, a.im + b.im);
};

ostream& operator << (ostream& out , const TComplex& c){
   return  out << "("<<  c.re << "; "<< c.im << ")";
} ;
//---------------------------------------------------------------------------
#endif

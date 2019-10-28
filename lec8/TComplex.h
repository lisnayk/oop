//---------------------------------------------------------------------------

#ifndef TComplexH
#define TComplexH
#include <iostream.h>
class MyInt{
public:
  int data;
};
class TComplex {
   private:
      double re;
      double im;
   public:
       int * data;

   explicit TComplex(double _re = 0, double _im = 0):re(_re),im(_im){
        data = new int;
        *data = 10;
   }
   friend TComplex operator + (const TComplex&, const TComplex&);
   //friend TComplex operator + (const double&, const TComplex&);
   friend ostream& operator << (ostream& out , const TComplex& c);

   void print() const {
    cout << "Print const" << endl;
   }
   void print() {
    cout << "Print" << endl;
   }
   void setRe(double val){
    re = val;
   }
   void setIm(double val){
    im = val;
   }
   double getRe() const{
   //re = 5;
    return re;
   }
   double getIm() const{
    return im;
   }
   	TComplex operator - (const TComplex& c){
		    return TComplex(this->re - c.re, this->im - c.im);
		};
      TComplex operator + (const double& a){
		    return TComplex(this->re + a, this->im);
		};

		TComplex operator = (const TComplex& c){
			this->re = c.re;
			this->im = c.im;
         *(this->data) = *(c.data)  ;
		}
      TComplex operator = (const double c){
			this->re = c;
			this->im = 0;

		}
		TComplex operator ++ (){
			this->re++;
         cout << "operator ++";
			return *(this);
		}
		TComplex operator ++ (int){
         cout << "operator ++ int";
			TComplex res =  *(this);
			this->re++;
			return res;
		}
      double operator [](const int ind){
			if (ind == 0) return this->re;
			return this->im;
		}
      TComplex operator ()(double _re, double _im ){
        this->re = _re;
        this->im = _im;
        return *this;
		}
      operator double () {
		 	return re;
		}


      operator MyInt () {
         MyInt a;
         a.data = this->re;
		 	return a;
		}

};

TComplex operator + (const TComplex & a , const TComplex& b){
   return TComplex(a.re + b.re, a.im + b.im);
};
/*TComplex operator + (const double & b , const TComplex& a){
   return TComplex(a.re + b, a.im );
};*/

ostream& operator << (ostream& out , const TComplex& c){
   return  out << "("<<  c.re << "; "<< c.im <<";"<< *(c.data)  <<")";
} ;
//---------------------------------------------------------------------------
#endif

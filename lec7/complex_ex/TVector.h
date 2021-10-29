//---------------------------------------------------------------------------

#ifndef TVectorH
#define TVectorH

class TVector {

   private:
      double * data;
      unsigned int size;
      static int count;
   public:
      typedef double* iterator;

      TVector();
      TVector(const TVector&);
      TVector(double *, int);

      ~TVector();

      double operator[] (int i){
        return this->data[i];
      }

      TVector operator = (const TVector&);

      iterator begin();
      iterator end();

      unsigned int getSize() const;
      void setSize(unsigned int);
      void resize(unsigned int size) ;

      void clear();
      void print();

      TVector mul(double) const;

      double length();

      TVector norm();

      static int getCount(){
         return  TVector::count;
      };
};
TVector operator * (const TVector& v, const double val){
   return v.mul(val);
}
TVector operator * (const double val, const TVector& v){
   return v.mul(val);
}
//---------------------------------------------------------------------------
#endif

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
      iterator begin();
      iterator end();
      unsigned int getSize() const;
      void setSize(unsigned int);
      void resize(unsigned int size) ;
      void clear();
      void print();
      TVector mul(double);
      double length();
      TVector norm();
      static int getCount(){
         return  TVector::count;
      };
};
//---------------------------------------------------------------------------
#endif

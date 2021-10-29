//---------------------------------------------------------------------------

#pragma hdrstop

#include "TVector.h"
#include <iostream.h>
int TVector::count = 0;

TVector::TVector(){
    cout << "Default constructor\n";
    size = 0;
    data = 0;
    TVector::count++;
}
TVector::TVector(const TVector& v){
    cout << "Copy constructor\n";
    TVector::count++;
    this->size = v.size;
    this->data = new double[this->size];
    for(unsigned int i = 0; i< this->size; i++){
         this->data[i] = v.data[i];
    }
}
TVector TVector::operator = (const TVector& v){
    cout << "operator = \n";
    if (this->data){
      delete [] this->data;
    }
    this->size = v.size;
    this->data = new double[this->size];
    for(unsigned int i = 0; i< this->size; i++){
         this->data[i] = v.data[i];
    }
}

TVector::TVector(double * arr, int  size){
    cout << "Init constructor\n";
    TVector::count++;
    this->size = size;
    this->data = new double[this->size];
    for(unsigned int i = 0; i< this->size; i++){
         this->data[i] = arr[i];
    }
}
TVector::~TVector(){
   cout << "Destructor\n";
   TVector::count --;
   if (this->data){
    delete [] this->data;
   }
}

TVector::iterator TVector::begin(){
   return data;
}
TVector::iterator TVector::end(){
   return data + size;
}
unsigned int TVector::getSize() const{
  return size;
}
void TVector::resize(unsigned int size){
    if (this->size == 0){
      this->size = size;
      this->data = new double[this->size];
      return;
    }
    if (size > this->size) {
       double * tmp = new double[size];
       for(unsigned int i = 0; i< this->size; i++){
         tmp[i] = this->data[i];
       }
       delete [] this->data;
       this->data = tmp;
    } else {
       this->size = size;
    }

}
void TVector::clear(){
   if (this->data){
      delete [] this->data;
      this->size = 0;
   }
}
void TVector::print(){

}

TVector TVector::mul(double val) const {
    TVector tm(*this);
    for(unsigned int i = 0; i< tm.size; i++){
         tm.data[i] = val* tm.data[i];
    }
    return tm;
}
double TVector::length(){
    return size;
}
TVector TVector::norm(){
     return TVector();
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

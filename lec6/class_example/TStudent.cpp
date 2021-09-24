//---------------------------------------------------------------------------

#pragma hdrstop

#include "TStudent.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

int TStudent::counter;

int TStudent::getGroup(){
    return group;
}
void TStudent::setGroup(int val){
    group = val;
}

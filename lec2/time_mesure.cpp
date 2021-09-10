//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused

#include <time.h>
#include <iostream.h>
clock_t  begin;
clock_t  end;

clock_t StarMesure(){
  begin = clock();
  return begin;
}

double StopMesure(char * str){
  end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  cout << str << ": "<< elapsed_secs << endl;
  return  elapsed_secs;
}

inline int sum(a,b){
  return a+b;
}

int main(int argc, char* argv[])
{
  double avg = 0;
  for(int k=0;k<10; k++){
    StarMesure();
    for(int i=0; i<10000; i++){
      for(int j=0; j<100000; j++){
        int a = i+j;
        a++;
        }
    }
    avg+=StopMesure("Tets mesure");
  }
  cout << "Avg: "<< avg / 10 << endl;
  system("pause");
  return 0;
}
//---------------------------------------------------------------------------
 
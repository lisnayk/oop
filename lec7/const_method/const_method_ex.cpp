
#include <stdlib.h>
#include <iostream.h>
class Anything {
  public:
    int value;
    int getValue() const {
     cout << "Const getValue"  << endl;
     return this->value;
    }
    int getValue() {
      cout << "getValue"  << endl;
      return this->value;
    }
    void setValue(int _value) {
      cout << "setValue"  << endl;
      value = _value;
    }
    void setValue(int _value) const {
      cout << "Const setValue"  << endl;
    }

    Anything():value(1){}
};

int main(int argc, char* argv[])
{
  Anything const test;
  Anything nonConst;
  test.setValue(500);   // See documentation;
  //test.value = 1;
  cout << test.value << " = "  << test.getValue() << endl;
  nonConst.setValue(100);
  cout << nonConst.value << " = "  << nonConst.getValue() << endl;
  system("PAUSE");
  return 0;
}
//---------------------------------------------------------------------------
 
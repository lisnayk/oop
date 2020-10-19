#include <iostream.h>
#include <ctime.h>
#include "InlineSummator.h"

class InlineSummatorTester {
	int iterationCount;
	
	public:
		InlineSummatorTester(int _iterationCount):iterationCount(_iterationCount){}

		void testInlineSpeed(){
			unsigned int start_time =  clock(); // начальное время
			for(int i=0; i<this->iterationCount; i++){
    			for(int j=0; j<this->iterationCount; j++){
    				int a = i + j;
    			}
			}
    		unsigned int end_time = clock(); // конечное время
    		std::cout << "Simple sum time: "<< end_time - start_time << "\n";
		}
		void testInlineSpeedTwo(){
			unsigned int start_time =  clock(); // начальное время
			InlineSummator summtor;

    		for(int i=0; i<this->iterationCount; i++){
    			for(int j=0; j<this->iterationCount; j++){
    				int a = summtor.inlineSum(i, j);
    			}
			}
    		unsigned int end_time = clock(); // конечное время
    		std::cout << "InlineSpeed time: "<< end_time - start_time << "\n";
		}

		void testNotInlineSpeed(){
			unsigned int start_time =  clock(); // начальное время
			InlineSummator summtor;

    		for(int i=0; i<this->iterationCount; i++){
    			for(int j=0; j<this->iterationCount; j++){
    				int a = summtor.notInlineSum(i, j);
    			}
			}
    		unsigned int end_time = clock(); // конечное время
    		std::cout << "NotInlineSpeed time: "<< end_time - start_time << "\n";
		}
};

int main(int argc, char** argv) {
	InlineSummatorTester test(90000);
        test.testInlineSpeed();
		test.testInlineSpeedTwo();
		test.testNotInlineSpeed();
        system("PAUSE");
	return 0;
}

#include <iostream>
class Student {

  protected:

    const __CURRENT_YEAR__;
	  int marks[10];
	  char name[256];
	  char group[10];
    int age

	public:


	~Student(){
		std::cout << "student Destructor\n";
	}
	Student(const Student& student){
		std::cout << "student COPY CONSTRUCTOR\n";
	}
		
	Student(int a=0){
		std::cout << "student CONSTRUCTOR\n";
		for(int i = 0; i<10; i++){
			this->marks[i] = i*2;
		}	
	}

	inline float avgBall(int marks) {
		float avg = 0;
		for(int i = 0; i<10; i++){
			avg += this->marks[i];
		}
		return avg/10;
	};
		
};
 

int main(int argc, char** argv) {
	
	Student student(6), student1 = student, s(student);
	
	Student *p = new  Student(), arr[5];
		delete p;
	std::cout << student.avgBall() << '\n';
	

	
	return 0;
}

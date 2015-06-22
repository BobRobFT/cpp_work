//Multyple_Student.cpp
//Task 9
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include <iostream>
#include <string>
 
using namespace std;

// Base class
class InternalExamMarks //InternalExamMarks class
{
   public:
      void setInternalExamMarks1(int im1){// Constructor
         InternalMarks1 = im1;
      }
	  void setInternalExamMarks2(int im2){// Constructor
         InternalMarks2 = im2;
      }
   protected:
	  int InternalMarks1, InternalMarks2;
};

class ExternalExamMarks{ //ExternalExamMarks class
	public:
	void setExternalExamMarks1(int em1){// Constructor
		ExternalMarks1 = em1;
	}
	void setExternalExamMarks2(int em2){// Constructor
		ExternalMarks2 = em2;
	}
	protected:
		int ExternalMarks1, ExternalMarks2;
};

class StudentMarksInfo: public InternalExamMarks, public ExternalExamMarks{ //StudentMarksInfo class inherirs InternalExamMarks class and ExternalExamMarks class
	public:
	int getInternalExamMarks1(){ // Accessor function for InternalMarks1
		return (InternalMarks1); 
	}
	int getInternalExamMarks2(){ // Accessor function for InternalMarks2
		return (InternalMarks2); 
	}
	int getExternalExamMarks1(){ // Accessor function for ExternalMarks1
		return (ExternalMarks1); 
	}
	int getExternalExamMarks2(){ // Accessor function for ExternalMarks2
		return (ExternalMarks2); 
	}

};

int main(void){
	int InternalMarks1, InternalMarks2, ExternalMarks1, ExternalMarks2;
	InternalExamMarks i;
	ExternalExamMarks e;
	StudentMarksInfo subject1;
	StudentMarksInfo subject2;
	StudentMarksInfo subject3;
	StudentMarksInfo subject4;

	cout << "Enter the InternalMarks subject 1: ";
	cin >> InternalMarks1;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
			}
	i.setInternalExamMarks1(InternalMarks1);
	
	cout << "Enter the InternalMarks subject 2: ";
	cin >> InternalMarks2;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
			}
	i.setInternalExamMarks2(InternalMarks2);
	
	cout << "Enter the ExternalMarks subject 1: ";
	cin >> ExternalMarks1;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
			}
	e.setExternalExamMarks1(ExternalMarks1);
	
	cout << "Enter the ExternalMarks subject 2: ";
	cin >> ExternalMarks2;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
			}
	e.setExternalExamMarks2(ExternalMarks2);
	
	cout << "Enter internal grade 1: " << subject1.getInternalExamMarks1() << endl;
	cout << "Enter internal grade 2: " << subject2.getInternalExamMarks2() << endl;
	
	cout << "Enter external grade 1: " << subject3.getExternalExamMarks1() << endl;
	cout << "Enter external grade 1: " << subject4.getExternalExamMarks2() << endl;
   
   cin.ignore();
   cin.get();

   return 0;
}










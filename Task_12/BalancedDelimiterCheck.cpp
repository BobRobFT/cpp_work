//BalancedDelimiterCheck.cpp
//Task 12
//Auother: Bob Roberts
//ID: 12407404
//Last update: 01/05/14

// This program demonstrates the IntStack class.
#include <iostream>
#include "stack.h"
#include <string>
using namespace std;

int sort(std::string);

int main(){
	std::string catchVar; // To hold values popped off the stack

	// Define a stack object to hold 5 values.
	
	//{ == 0
	//[ == 1
	//( == 2
	
	//} == 3
	//] == 4
	//) == 5
	
	IntStack stack(10);
	
	stack.push("[");
	stack.push("{");
	stack.push("(");
	stack.push(")");
	stack.push("}");
	stack.push("]");
		
	int number[10] = {};

	stack.pop(catchVar);
	number[0] = sort(catchVar);
	stack.pop(catchVar);
	number[1] = sort(catchVar);
	stack.pop(catchVar);
	number[2] = sort(catchVar);
	stack.pop(catchVar);
	number[3] = sort(catchVar);
	stack.pop(catchVar);
	number[4] = sort(catchVar);
	stack.pop(catchVar);
	number[5] = sort(catchVar);
	
	if((number[0] == number[3]) && (number[1] == number[4]) && (number[2] == number[5])){
		cout << "[ { ( ) } ]" << " -- correct" << endl;
	}
	else{
		cout << "[ { ( ) } ]" << " -- incorrect" << endl;
	}
	
	//###############################################################
	
	
	stack.push("{");
	stack.push("(");
	stack.push("{");
	stack.push("}");
	stack.push(")");
	stack.push("(");
	stack.push(")");
	stack.push("[");
	stack.push("]");
	stack.push("}");
		

	stack.pop(catchVar);
	number[0] = sort(catchVar);
	stack.pop(catchVar);
	number[1] = sort(catchVar);
	stack.pop(catchVar);
	number[2] = sort(catchVar);
	stack.pop(catchVar);
	number[3] = sort(catchVar);
	stack.pop(catchVar);
	number[4] = sort(catchVar);
	stack.pop(catchVar);
	number[5] = sort(catchVar);
	stack.pop(catchVar);
	number[6] = sort(catchVar);
	stack.pop(catchVar);
	number[7] = sort(catchVar);
	stack.pop(catchVar);
	number[8] = sort(catchVar);
	stack.pop(catchVar);
	number[9] = sort(catchVar);
	
	if((number[0] == number[3]) && (number[1] == number[4]) && (number[2] == number[5])){
		cout << "{ ( { } ) () [] }" << " -- correct" << endl;
	}
	else{
		cout << "{ ( { } ) () [] }" << " -- incorrect" << endl;
	}

	for(int i = 0; i < 10; i++){
		number[i] = 0;
	}
	//###################################################################
	
	stack.push("{");
	stack.push("[");
	stack.push("(");
	stack.push("}");
	stack.push(")");
	stack.push("]");
		
	stack.pop(catchVar);
	number[0] = sort(catchVar);
	stack.pop(catchVar);
	number[1] = sort(catchVar);
	stack.pop(catchVar);
	number[2] = sort(catchVar);
	stack.pop(catchVar);
	number[3] = sort(catchVar);
	stack.pop(catchVar);
	number[4] = sort(catchVar);
	stack.pop(catchVar);
	number[5] = sort(catchVar);
	
	if((number[0] == number[3]) && (number[1] == number[4]) && (number[2] == number[5])){
		cout << "{ [ ( } ) ]" << " -- correct" << endl;
	}
	else{
		cout << "{ [ ( } ) ]" << " -- incorrect" << endl;
	}
	
	//##################################################################
	
	stack.push("[");
	stack.push("(");
	stack.push("(");
	stack.push("{");
	stack.push(")");
	stack.push("}");
	stack.push("]");
	stack.push(")");
		

	stack.pop(catchVar);
	number[0] = sort(catchVar);
	stack.pop(catchVar);
	number[1] = sort(catchVar);
	stack.pop(catchVar);
	number[2] = sort(catchVar);
	stack.pop(catchVar);
	number[3] = sort(catchVar);
	stack.pop(catchVar);
	number[4] = sort(catchVar);
	stack.pop(catchVar);
	number[5] = sort(catchVar);
	stack.pop(catchVar);
	number[6] = sort(catchVar);
	stack.pop(catchVar);
	number[7] = sort(catchVar);

	
	if((number[0] == number[3]) && (number[1] == number[4]) && (number[2] == number[5])){
		cout << "[ ( ( { ) } ] )" << " -- correct" << endl;
	}
	else{
		cout << "[ ( ( { ) } ] )" << " -- incorrect" << endl;
	}

	for(int i = 0; i < 10; i++){
		number[i] = 0;
	}
	
	cin.ignore();
	cin.get();
   return 0;
}


int sort(std::string catchVar){
	int number[6] = {};
	if(!catchVar.compare("{")){ //!s.compare(t)
		//cout << "1" << endl;
		number[0] = number[0] + 1;
		return number[0];
	}
	else if(!catchVar.compare("[")){
		//cout << "2" << endl;
		number[1] = number[1] + 1;
		return number[1];
	}
	else if(!catchVar.compare("(")){
		//cout << "3" << endl;
		number[2] = number[2] + 1;
		return number[2];
	}
	else if(!catchVar.compare("}")){
		//cout << "4" << endl;
		number[3] = number[3] + 1;
		return number[3];
	}
	else if(!catchVar.compare("]")){
		//cout << "5" << endl;
		number[4] = number[4] + 1;
		return number[4];
	}
	else if(!catchVar.compare(")")){
		//cout << "6" << endl;
		number[5] = number[5] + 1;
		return number[5];
	}
	else{
		return 0;
	}
}







//CoffeeShop.cpp
//Task 3
//Auother: Bob Roberts
//ID: 12407404
//Date: 03/05/14
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main (){

	const int num_exam = 20;
	char examArray[num_exam] = {'B', 'D', 'A', 'A', 'C', 
								'A', 'B', 'A', 'C', 'D', 
								'B', 'C', 'D', 'A', 'D', 
								'C', 'C', 'B', 'D', 'A'}; //array to hold answers to the questions 
	char scores[num_exam]; //array to store answers done by user
	int correct = 0; //int to collect how many answers are correct
	
	cout << "Local Drivers licience office" << endl;

	for(int i = 0; i < num_exam; i++){ //for loop to ask the 20 questions.
		cout << "Question " << i+1 << ": ";
		cin >> scores[i]; //input to let user enter the answers

		if(scores[i] != 'A' && scores[i] != 'B' && scores[i] != 'C' && scores[i] != 'D'){ //checks to see if the user has enetered anything but the required input
			cout << "error, pick again" << endl; //error message
			i--; //returns back to the question the user was on
		}
		if(scores[i] == examArray[i]){ //if statement to check if the answer is correct
			correct++; //number of correct increase by 1
		}	

	}
	if(correct >= 15){ //checks to see if the user has passed
		cout << "You passed." << endl;
	}
	else{ //if the required ammount is not met it will result in a fail
		cout << "You failed." << endl;
	}

	cout << "The ammount correct you got was: " << correct << endl; //returns user with the ammount that was correct
	cout << "The ammount incorrect you got was: " << num_exam - correct << endl; //returns user with the ammount that was not correct
	
	cin.ignore();
	cin.get();
	
  	return 0;
}
//NumDaysDemo.cpp
//class: NumDays.cpp
//Task 7
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "NumDaysSpecification.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	double hours_1 ,hours_2;
	
	cout << "Enter work hours for worker 1: ";
	cin >> hours_1;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	
	cout << "Enter work hours for worker 2: ";
	cin >> hours_2;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	
	HoursDays h(hours_1, hours_2);
	
	double hours_1_1 = h.getHoursDays_1();
	
	cout << "Number of working days employee 1: " << hours_1_1 << endl;
	
	double hours_2_2 =  h.getHoursDays_2();
	
	cout << "Number of working days employee 2: " << hours_2_2 << endl;
	
	double total_hours = h.getTotalHours();
		
	cout << "Total number of hours: " << total_hours << endl;
	
	double difference_between = h.getDifference();
		
	cout << "Total difference of hours: " << difference_between << endl;
	
	double increase_work_hours_1 = h.getIncreaseHours_1();
		
	cout << "8 more work hours: worker 1 hours: " << increase_work_hours_1 << endl;
	
	double increase_work_hours_2 = h.getIncreaseHours_2();
		
	cout << "8 more work hours: worker 2 hours: " << increase_work_hours_2 << endl;
	
	double hours_1_1_1 = h.getHoursDays_1_1();
	
	cout << "Number of working days employee 1: " << hours_1_1_1 << endl;
	
	double hours_2_2_2 =  h.getHoursDays_2_2();
	
	cout << "Number of working days employee 2: " << hours_2_2_2 << endl;

	cin.ignore();
	cin.get();
	
	return 0;
}
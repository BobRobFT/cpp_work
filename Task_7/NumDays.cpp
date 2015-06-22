//NumDaysDemo.cpp
//class: NumDays.cpp
//Task 7
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "NumDaysSpecification.h" //includes NumDaysSpecification.h
#include <iostream>
#include <string>
using namespace std;

	HoursDays::HoursDays(){
		hours_1 = 0; //sets defaults to 0
		hours_2 = 0;
	}
	HoursDays::HoursDays(double h1, double h2){
		hours_1 = h1;
		hours_2 = h2;
	}
	
	void HoursDays::setHoursDays_1(double h1){
		hours_1 = h1;
	}
	
	void HoursDays::setHoursDays_2(double h2){
		hours_2 = h2;
	}
	
	double HoursDays::getHoursDays_1(){
		hours_1 = hours_1 / 8; //divides hours by 8. 1 working day = 8 hours
		return hours_1;	
	}
	
	double HoursDays::getHoursDays_2(){
		hours_2 = hours_2 / 8;
		return hours_2;	
	}

	double HoursDays::getTotalHours(){
		double total_1;
		total_1 = (hours_1 + hours_2) * 8; 
		return total_1;
	}
	
	double HoursDays::getDifference(){
		double difference_1;
		hours_1 = hours_1 * 8;
		hours_2 = hours_2 * 8;
		if(hours_1 > hours_2){ //if statement to be used depending on how it calculates the difference, as we do not want to have e negative number
			difference_1  = hours_1 - hours_2;
			return difference_1;
		}
		else{
			difference_1  = hours_2 - hours_1;
			return difference_1;
		}
		difference_1  = hours_1 - hours_2;
		return difference_1;
	}
	
	double HoursDays::getIncreaseHours_1(){
		double hours;
		hours = hours_1 + 8; //increase by 8 hours
		return hours;
	}
	
	double HoursDays::getIncreaseHours_2(){
		double hours;
		hours = hours_2 + 8;
		return hours;
	}
	
	double HoursDays::getHoursDays_1_1(){
		hours_1 = (hours_1 + 8) / 8; //must increase by 8 and then divide by 8
		return hours_1;	
	}
	
	double HoursDays::getHoursDays_2_2(){
		hours_2 = (hours_2 + 8) / 8;
		return hours_2;	
	}
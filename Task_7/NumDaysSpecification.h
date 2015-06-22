//NumDaysDemo.cpp
//class: NumDaysSpecification.h
//Task 7
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#ifndef NUMDAYSSPECIFICATION_H
#define NUMDAYSSPECIFICATION_H
#include <string>

class HoursDays{ //HoursDays class holds hours_1, hours_2
	private:
	double hours_1;
	double hours_2;
	//double total;
	
	public:
	HoursDays();
	HoursDays(double, double); // Constructor
	//HoursDays(double, double, double);

	void setHoursDays_1(double); // Constructor
	void setHoursDays_2(double); // Constructor
	
	double getHoursDays_1(); // Defined in NumDaysDemo.cpp
	double getHoursDays_2();
	double getTotalHours();
	double getDifference();
	double getIncreaseHours_1();
	double getIncreaseHours_2();
	double getHoursDays_1_1();
	double getHoursDays_2_2();
};


#endif







//TimeConversion.cpp
//class: ParkedCar.cpp
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "specification.h"
#include <iostream>
#include <string>
using namespace std;

	Car::Car(){
		make = ""; //sets defualt values to nothing
		model = "";
		color = "";
		licence = "";
		minsParked = 0;
	}

	Car::Car(string r, string m, string c, string l, int mp){ //retrives the data that is required and put into Car object
		make = r;
		model = m;
		color = c;
		licence = l;
		minsParked = mp;
	}
	

	
	std::string Car::getMake() const{ //returns the car make when the getMake function is called
		return make;
	}

	std::string Car::getModel() const{
		return model;
	}
	
	std::string Car::getColor() const{
		return color;
	}
	
	std::string Car::getLicence() const{
		return licence;
	}
	
	int Car::getMinutes() const{
		return minsParked;
	}
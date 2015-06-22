//TimeConversion.cpp
//class: PoliceOfficer.cpp
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "specification.h"
#include <iostream>
#include <string>
using namespace std;

	Police::Police(){
		name = "";
		number = 0;
	}

	Police::Police(std::string na, int nu){
		name = na;
		number = nu;
	}
	

	
	std::string Police::getName() const{
		return name;
	}
	int Police::getNumber() const{
		return number;
	}
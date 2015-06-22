//TimeConversion.cpp
//class: ParkedMeter.cpp
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "specification.h"
#include <iostream>
#include <string>
using namespace std;

	MinutesPurchased::MinutesPurchased(){
		MinutesPurchasedint = 0;
	}

	MinutesPurchased::MinutesPurchased(int minsp){
		MinutesPurchasedint = minsp;
	}
	
	void MinutesPurchased::setMinutsePurchased(int minsp){
		MinutesPurchasedint = minsp;
	}
	
	int MinutesPurchased::getMinutesPurchased() const{
		return MinutesPurchasedint;
	}
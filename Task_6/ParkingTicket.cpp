//TimeConversion.cpp
//class: parkingTicket.cpp
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "specification.h"
#include <iostream>
#include <string>
using namespace std;

	Ticket::Ticket(){
		TotalMinsParked = 0;
		TotalMinsPurchased = 0;
	}

	Ticket::Ticket(int a, int b){
		TotalMinsParked = a;
		TotalMinsPurchased = b;
	}
	
	int Ticket::getFine() const{
		double fine = 0;
		int tempTotalMinsParked = TotalMinsParked;
		int tempTotalMinsPurchased = TotalMinsPurchased;
		
		if(tempTotalMinsParked > tempTotalMinsPurchased){
			fine = 25.00; //sets the default value of the fine it the requirements are met
			tempTotalMinsParked - 60; //removes 60 minutes from the tempTotalMinsParked so that it can check to see if you need to pay more for the fine
			tempTotalMinsParked = tempTotalMinsParked - 60;
			while(tempTotalMinsParked > tempTotalMinsPurchased){ //checks to see how many hours are over the limit
				tempTotalMinsParked = tempTotalMinsParked - 60;
				fine = fine + 10.00; //increases fine by 10 every hour over the limit
			}
			
		}
	
	
		return fine;
	}
//ParkingApp.cpp
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include "specification.h"
#include <iostream>
#include <string>
using namespace std;

const int NUM = 10;

int main(){
	std::string make; //creates values so it can be tempoarlly stored here
	std::string model;
	std::string color;
	std::string licence;
	int minsParked;
	
	int MinutesPurchasedint;
	
	std::string name;
	int number;
	
	//double total;
	
	cout << "Enter the car's make: ";
	cin >> make; //enteres the car make
	
	cout << "Enter the car's model: ";
	cin >> model;
	
	cout << "Enter the car's color: ";
	cin >> color;
	
	cout << "Enter the car's licence: ";
	cin >> licence;
	
	cout << "Enter how long car parked for: ";
	cin >> minsParked;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	
	cout << "Enter how many minutes purchased: ";
	cin >> MinutesPurchasedint;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	
	cout << "Police name: ";
	cin >> name;
	
	cout << "Police badge number: ";
	cin >> number;
	
	Car c(make, model, color, licence, minsParked); //
	MinutesPurchased m(MinutesPurchasedint);
	Police p(name, number);
	Ticket t(minsParked, MinutesPurchasedint);
	

	
	cout << "Car Make: " << c.getMake() << endl; //displays the car make from the car object
	cout << "Car Model: " << c.getModel() << endl;
	cout << "Car Color: " << c.getColor() << endl;
	cout << "Car Licence: " << c.getLicence() << endl;
	cout << "Minutes parked: " << c.getMinutes() << endl;
	cout << "Enter Minutes purchased: " << m.getMinutesPurchased() << endl;
	cout << "Police name: " << p.getName() << endl;
	cout << "Police badge: " << p.getNumber() << endl << endl;
	cout << "Total fine is: " << t.getFine() << endl; 










	
	cin.ignore();
	cin.ignore();
	cin.get();
	cin.get();
	
	return 0;
}
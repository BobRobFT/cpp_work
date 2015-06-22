//TimeConversion.cpp
//class: specification.h
//Task 6
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#ifndef SPECIFICATION_H
#define SPECIFICATION_H
#include <string>

class Car{ //Car class holds make, model, color, licience
	private:
	std::string make; //to hold make
	std::string model;
	std::string color;
	std::string licence;
	int minsParked;
	
	public:
	Car();
	Car(std::string, std::string, std::string, std::string, int);
	
	std::string getMake() const; // Defined in ParkingApp.cpp
	std::string getModel() const; 
	std::string getColor() const;
	std::string getLicence() const;
	int getMinutes() const;
};


class MinutesPurchased{
	private:
	int MinutesPurchasedint;
	
	public:
	MinutesPurchased();
	MinutesPurchased(int); // Constructor
	
	void setMinutsePurchased(int);
	
	int getMinutesPurchased() const;
};


class Police{
	private:
	std::string name;
	int number;
	
	public:
	Police();
	Police(std::string, int); // Constructor
	
	void setName(std::string);
	void setNumber(int);
	
	std::string getName() const;
	int getNumber() const;
};

class Ticket{
	private:
	int TotalMinsParked;
	int TotalMinsPurchased;
	
	public:
	Ticket();
	Ticket(int, int); // Constructor
	
	
	int getFine() const;
};


#endif







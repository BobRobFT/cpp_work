//ShipDemo.cpp
//Task 8
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include <iostream>
#include <string>
 
using namespace std;

// Base class
class Ship //ship class
{
   public:
      void setShipName(std::string n){// Constructor
         name = n;
      }
	  void setShipYear(int y){// Constructor
         year = y;
      }
   protected:
      std::string name;
	  int year;
};

class CruiseShip: public Ship{ //CruiseShip derived from the ship class
	public:
	std::string getShipName(){ // Defined in main function in ShipDemo.cpp
		return (name); 
	}
	int getShipYear(){
		return (year); 
	}
	void setCruiseShipMax(int m){// Constructor
		max = m;
	}
	int getCruiseShipMax(){// Defined in main function in ShipDemo.cpp
		return (max); 
	}
	protected:
		int max;
};

class CargoShip: public Ship{ //CargoShip derived from the ship class
	public:
	std::string getShipName(){ // Defined in main function in ShipDemo.cpp
		return (name); 
	}
	int getShipYear(){// Defined in main function in ShipDemo.cpp
		return (year); 
	}
	void setCargoCapacity(int c){// Constructor
		cap = c;
	}
	int getCargoCapacity(){// Defined in main function in ShipDemo.cpp
		return (cap); 
	}
	protected:
		int cap;
};

int main(void){
	std::string name, name1;
	int year, year1;
	int max;
	int cap;
	const int NUM = 6; //sets array size
	
	Ship **tPoint; 
	tPoint = new Ship *[6];
	Ship *tArray[6];
	
	//Ship s;
	CruiseShip cs;
	CargoShip ca;

	cout << "Enter the cruiseship's make: ";
	cin >> name;
	cs.setShipName(name);
	
	cout << "Enter the cruiseship's year: ";
	cin >> year;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	cs.setShipYear(year);
	
	cout << "Enter the cruiseship max: ";
	cin >> max;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	cs.setCruiseShipMax(max);

	cout << "Enter the CargoShip's make: ";
	cin >> name1;
	ca.setShipName(name1);
	
	cout << "Enter the CargoShip's year: ";
	cin >> year1;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	ca.setShipYear(year1);
	
	cout << "Enter the CargoShip capacity: ";
	cin >> cap;
	if(cin.fail()){ //error handaling, if a letter is entered it will close the program
		throw "error";
	}
	ca.setCargoCapacity(cap);
	
	
	cout << "Cruise ship name: " << cs.getShipName() << endl;
	cout << "Cruise ship year: " << cs.getShipYear() << endl;
	cout << "Cruise ship max: " << cs.getCruiseShipMax() << endl;
	
	cout << "Cruise ship name: " << ca.getShipName() << endl;
	cout << "Cruise ship year: " << ca.getShipYear() << endl;
	cout << "Cruise ship max: " << ca.getCargoCapacity() << endl;
	
	
   cin.ignore();
   cin.ignore();
   cin.get();
   cin.get();

   return 0;
}










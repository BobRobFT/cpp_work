//CoffeeShop.cpp
//Task 2
//Auother: Bob Roberts
//ID: 12407404
//Last update: 10/04/14
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//prototype functions
double sell();		//sells the coffee
void quanity();		//shows the quanity of cups sold each size
void total();  		//shows the total of the coffee sold

// Global constants
const double small 	= 1.75;		// price of a small coffee
const double medium = 1.90;		// price of a medium coffee
const double large 	= 2.00;   	// price of a large coffee

int smallSold 	= 0;			// quantity sold for the sold coffee
int mediumSold 	= 0;			// quantity sold for the sold coffee
int largeSold 	= 0;			// quantity sold for the sold coffee

int quanityTotalSold 	= 0; 	// total quantity sold 
double totalMade 		= 0.0;  // total price 

double totalMadeTemp 	= 0.0; 	// tempoary holding value to hold total

int smallQuanityTemp 	= 0;	// tempoary holding value to hold small quantity
int mediumQuanityTemp 	= 0; 	// tempoary holding value to hold medium quantity
int largeQuanityTemp 	= 0;	// tempoary holding value to hold large quantity

int main (){

	int enter;

  	do{
  		cout << "1 = buy coffee, 2 = total number of cups of each sold, 3 = total ammount of coffee sold, 4 = show total money made, 5 = quit" << endl;
		cin >> enter;
		
		if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
		}
		else if(enter != 1 && enter != 2 && enter != 3 && enter != 4 && enter != 5){
			cout << "error, pick again" << endl;
			return main();
		}
		else if(enter == 1){
			totalMadeTemp = sell();
			totalMade = totalMadeTemp + totalMade;
		}
		
		else if(enter == 2){
			quanity();
		}
		else if(enter == 3){
			quanityTotalSold = smallSold + mediumSold + largeSold;
			cout << "Total quanity sold: " << quanityTotalSold << endl << endl;
		}
		else if(enter == 4){
			total();
		}
		else if(enter == 5){
			exit(0);
		}
	}
	while (enter != 5);
	
	cin.ignore();
	cin.get();
	
  	return 0;
}

double sell(){
	int enter_1;
	int smallQuanityTemp_1 	= 0;
	int mediumQuanityTemp_1 = 0;
	int largeQuanityTemp_1 	= 0;

  	do{
  		cout << "What type of coffee do you want to buy?" << endl;
		cout << fixed << setprecision(2) << "1: Small: 	\x9C " 	<< small 	<< endl; 	//uses setprecision to make sure to only use 2 decimal places
		cout << "2: Medium: 	\x9C "							<< medium 	<< endl;	//\x9C is a pound sign
		cout << "3: Large 	\x9C " 								<< large 	<< endl;
		cout << "4: Exit" 		<< endl;
		cin >> enter_1;
		
		if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
		}
		else if(enter_1 != 1 && enter_1 != 2 && enter_1 != 3 && enter_1 != 4 && enter_1 != 5){
			cout << "error, pick again" << endl;
			return main(); //returns to start of program
		}
		else if(enter_1 == 1){
			cout << "Enter quanity: " << endl;
			cin >> smallQuanityTemp_1; //lets user input quantity of the small coffee
			smallSold =  smallSold + smallQuanityTemp_1; //counts the quantiy of the small coffee
			return smallQuanityTemp * small; //returns the quantity multiplied by the price
		}
		
		else if(enter_1 == 2){
			cout << "Enter quanity: " << endl;
			cin >> mediumQuanityTemp_1;
			mediumSold = mediumSold + mediumQuanityTemp_1;
			return mediumQuanityTemp * medium;
		}
		else if(enter_1 == 3){
			cout << "Enter quanity: " << endl;
			cin >> largeQuanityTemp_1;
			largeSold = largeSold + largeQuanityTemp_1;
			return largeQuanityTemp * large;
		}
		else if(enter_1 == 4){
			exit(0);
		}
	}
	while (enter_1 != 4);
	return 0;
}

void quanity(){
	cout << "cups sold for small: " 	<< smallSold 	<< endl;
	cout << "cups sold for medium: " 	<< mediumSold 	<< endl;
	cout << "cups sold for large: " 	<< largeSold 	<< endl;
}
void total(){
	double a, b, c;
	a = small 	* smallSold; //multiplies the price of a small ocffee by the ammunt of small coffee sold
	b = medium 	* mediumSold;
	c = large 	* largeSold;
	totalMade = a + b + c;
	cout << "The total money made: \x9C " << totalMade << endl << endl;
}

//DrinkSimulator.cpp
//Task 5 A
//Auother: Bob Roberts
//ID: 12407404
//last update: 03/05/14
#include <iostream>
#include <cstdlib>
using namespace std;

const int NUM = 5;
double totalMoney = 0.0;

struct machine{
   string DrinkName;
   double DrinkCost;
   int NumberDrinks;
};

int main (){
	machine contains[NUM]; //creats array for struct
	
	contains[0].DrinkName = "Cola"; //creates name for struct
	contains[0].DrinkCost = 0.75; //crete drink cost for struct
	contains[0].NumberDrinks = 20; //crete number of drinks that can be bought

	contains[1].DrinkName = "Beer";
	contains[1].DrinkCost = 0.75;
	contains[1].NumberDrinks = 20;
	
	contains[2].DrinkName = "Lemon Lime";
	contains[2].DrinkCost = 0.75;
	contains[2].NumberDrinks = 20;

	contains[3].DrinkName = "Grape Soda";
	contains[3].DrinkCost = 0.80;
	contains[3].NumberDrinks = 20;
	
	contains[4].DrinkName = "Cream Sida";
	contains[4].DrinkCost = 0.80;
	contains[4].NumberDrinks = 20;
	
	static int tot[NUM] = {20, 20, 20, 20, 20}; //sets the array 
	
	int enter;
  	do{
		for(int i = 0; i < NUM; i++){
			cout << contains[i].DrinkName << " ";
		}
		cout << "\n";
  		cout << "1 = buy drink, 2 = quit" << endl;
		cin >> enter;
		if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
		}
		else if(enter != 1 && enter != 2){
			cout << "Pick again" << endl;
			return main();
		}
		else if(enter == 1){
			for(int i = 0; i < NUM; i++){
				cout << i + 1 << ": " << "\x9C " << contains[i].DrinkCost << " " << contains[i].DrinkName << endl; //display drinks stats
			}
			//cout << contains[0].NumberDrinks << endl;
				int enter_1;
				cout << "Enter a drink to buy (1-5): ";
				do{
					cin >> enter_1;
					
					if(enter_1 != 1 && enter_1 != 2 && enter_1 != 3 && enter_1 != 4 && enter_1 != 5){
						cout << "error, pick again" << endl;
						return main();
					}
					
							double enter_2;
							cout << "Enter money: ";
							do{
								cin >> enter_2;
								if(cin.fail()){ //error handaling, if a letter is entered it will close the program
									throw "error";
								}
								if(enter_2 < 0 || enter_2 > 1.00){ //makes sure user must enter between a required area
									cout << "error, pick again" << endl;
									return main();
								}
								else if(enter_2 < contains[enter_1 - 1].DrinkCost){ //makes sure the requires ammount is given
									cout << "Error, not enough money" << endl;
								}
								else if(tot[enter_1 - 1] <= 0){ //checks to see if the stock levels are above 0
									cout << "error, none left" << endl;
									return main();
								}
								else if(enter_2 >= contains[enter_1 - 1].DrinkCost){
									double change = enter_2 - contains[enter_1 - 1].DrinkCost;
									cout << "Your change is: " << change << endl; //displays change
									
									tot[enter_1 - 1] = tot[enter_1 - 1] - 1;
									//tp -> NumberDrinks = newData;
									
									totalMoney = contains[enter_1 - 1].DrinkCost + totalMoney;
									
									return main();
								}
							}
							while(true);
				}
				while (true);
		}
		else if(enter == 2){
			cout << "Total money earned: " << totalMoney << endl;
			cin.ignore();
			cin.get();
			exit(0);
		}
	}
	while (true);
	
	cin.ignore();
	cin.get();
	
  	return 0;
}








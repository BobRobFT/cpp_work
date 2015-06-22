//DrinkSimulatorExt.cpp
//Task 5 B
//Auother: Bob Roberts
//ID: 12407404
//Date: 03/05/14
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

const int NUM = 10;
int defaultNum = 5;
double totalMoney = 0.0;

struct machine{
   std::string DrinkName;
   double DrinkCost;
   int NumberDrinks;
};

int main (){
	machine contains[NUM];
	
	contains[0].DrinkName = "Cola";
	contains[0].DrinkCost = 0.75;
	contains[0].NumberDrinks = 20;

	contains[1].DrinkName = "Beer";
	contains[1].DrinkCost = 0.75;
	contains[1].NumberDrinks = 20;
	
	contains[2].DrinkName = "Lemon Lime";
	contains[2].DrinkCost = 0.75;
	contains[2].NumberDrinks = 20;

	contains[3].DrinkName = "Grape Soda";
	contains[3].DrinkCost = 0.80;
	contains[3].NumberDrinks = 20;
	
	contains[4].DrinkName = "Cream Soda";
	contains[4].DrinkCost = 0.80;
	contains[4].NumberDrinks = 20;
	
	static int tot[NUM] = {20, 20, 20, 20, 20};
	
	int enter;
  	do{
		for(int i = 0; i < defaultNum; i++){
			cout << contains[i].DrinkName << ", ";
		}
		cout << "\n";
  		cout << "1 = buy drink, 2 = add new Drink, 3 = edit a file, 4 = Display total quanity of all drinks, 5 = quit" << endl;
		cin >> enter;
		
		if(enter != 1 && enter != 2 && enter != 3){
			cout << "Pick again" << endl;
			return main();
		}
		else if(enter == 1){
			for(int i = 0; i < defaultNum; i++){
				cout << i + 1 << ": " << "\x9C " << contains[i].DrinkCost << " " << contains[i].DrinkName << endl;
			}
			cout << defaultNum << endl;
				int enter_1;
				cout << "Enter a drink to buy (1-" << defaultNum << "): ";
				do{
					cin >> enter_1;
					
					if(enter_1 <= 0 || enter_1 > defaultNum){
						cout << "error, pick again" << endl;
						return main();
					}
					
							double enter_2;
							cout << "Enter money: ";
							do{
								cin >> enter_2;
								
								if(enter_2 < 0 || enter_2 > 1.00){
									cout << "error, pick again" << endl;
									return main();
								}
								else if(enter_2 < contains[enter_1 - 1].DrinkCost){
									cout << "Error, not enough money" << endl;
								}
								else if(tot[enter_1 - 1] <= 0){
									cout << "error, none left" << endl;
									return main();
								}
								else if(enter_2 >= contains[enter_1 - 1].DrinkCost){
									double change = enter_2 - contains[enter_1 - 1].DrinkCost;
									cout << "Your change is: " << change << endl;
									
									tot[enter_1 - 1] = tot[enter_1 - 1] - 1;
									
									totalMoney = contains[enter_1 - 1].DrinkCost + totalMoney;
									
									return main();
								}
							}
							while(true);
				}
				while (true);
		}
		else if(enter == 2){ //add new drink
			defaultNum = defaultNum + 1;
		
			cout << "Enter Drink name: ";
			cin >> contains[defaultNum].DrinkName;
			
			cin.ignore();
			
			cout << "Enter Drink cost: ";
			cin >> contains[defaultNum].DrinkCost;
			
			cout << "Enter Drink total: ";
			cin >> contains[defaultNum].NumberDrinks;
			
		}
		else if(enter == 5){
			cout << "Total money earned: " << totalMoney << endl;
			exit(0);
		}
	}
	while (true);
	
	cin.ignore();
	cin.get();
	
  	return 0;
}








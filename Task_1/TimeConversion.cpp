//TimeConversion.cpp
//Task 1
//Auother: Bob Roberts
//ID: 12407404
//Last update: 01/05/14
#include <iostream>
#include <cstdlib>
#include <time.h>		/* time_t, struct tm, time, localtime */
#include <ctime>
using namespace std;

//prototype functions
void hour_24(int, int, int);
void hour_12(int, int, int);

int main (){

	int enter; 

  	do{ //start of do while loop
		try{
			cout << "1 = time in 24 hours, 2 = time in 12 hours, 3, 3 = quit" << endl;
			cin >> enter;
			
			time_t now = time(0);		//get time now
			tm *ltm = localtime(&now); 	//convert now to tm struct for UTC
			
			int hour = ltm->tm_hour;	//holds hour int
			int min = ltm->tm_min;		//holds minute int
			int sec = ltm->tm_sec;		//holds second int
			
			if(cin.fail()){ //error handaling, if a letter is entered it will close the program
				throw "error";
			}
			else if(enter != 1 && enter != 2 && enter != 3){ //error handaling, if any other number is entered it will dispaly a message and restart program
				cout << "error, pick again" << endl;
				return main();
			}
			else if(enter == 1){
				hour_24(hour, min, sec); 
			}
			else if(enter == 2){
				hour_12(hour, min, sec); 
			}
			else if(enter == 3){
				exit(0);
			}
		}
		catch(int e){
			cout << "Excpection occurred. " << e << endl;	//prints any errors
		}
	}
	while (enter != 3);
	
  	return 0;
}

void hour_24(int hour, int min, int sec){ //function to show 24 hour time
	if(hour > 12){
		cout << "pm: ";
	}
	else{
		cout << "am: ";
	}
   cout << hour << ":" << min << ":" << sec << endl;
}

void hour_12(int hour, int min, int sec){ //function to show 12 hour time
	if(hour > 12){
		cout << "pm: ";
	}
	else{
		cout << "am: ";
	}
   cout << hour-12 << ":" << min << ":" << sec << endl;
}
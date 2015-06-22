//Median.cpp
//Task 4
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//prototype function containing array of inegers and number of elements of array
double sort(int *, int);

int main (){
	const int num = 9; //int number of how many elements there are in the array
	int number[num] = {2, 4, 5, 6, 7, 9, 11, 14, 16}; //array of the values
	
	double median = 0;
	
	median = sort(number, num); //runs the function called sort()
	
	cout << "The median of... ";
	for(int i = 0; i < num; i++){ //displsy the array to the user
		cout << number[i] << " ";
	}
	cout << "\n" << "Is: " << median << endl; //displays the median number
	
	cin.ignore();
	cin.get();
	
  	return 0;
}
double sort(int *array, int num){ //sort function that is the main part of the program
	double median = 0; //temp double

	if(num % 2 == 0){ //checks if even number
		int temp, temp1; //creates 2 int temp values
		double temp2, temp3; //creates 2 double temp values
		temp = (num / 2);
		temp2 = *(array + temp) + *(array + temp-1); //gets the 2 values from the middle of the array adds them together
		temp3 = temp2 / 2; //divides the nubmer above and gets the mean value

		return temp3; //returns median number when array is even		
	}
	else{ // checks if odd number
		int temp, temp1;
		temp 	= ((num) / 2); //dives the array by 2 to find the median value
		temp1 = *(array + temp); //pointer finds the location of the array and stores it in temp1
		return temp1; //returns median number when array is odd	
	}
	return median;
}

















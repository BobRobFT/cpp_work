//IntListDemo.cpp
//Task 10
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include <iostream>
#include "ListDemo.h"
#include <string>
using namespace std;

int main()
{
   StringList firstList;
   //StringList secondList;
   int enter;

	firstList.appendNode("a");  // Append a to the firstList
	firstList.appendNode("b");  // Append b to the firstList
	firstList.appendNode("j");  // Append j to the firstList
	firstList.appendNode("a");  // Append j to the firstList
	firstList.appendNode("u");  // Append j to the firstList
	firstList.appendNode("o");  // Append j to the firstList
	firstList.appendNode("a");  // Append j to the firstList

	cout << "Here are the initial values:\n";
	firstList.print();
	cout << endl;
	
	cout << "Enter a number in the firstList to delete (0 = first): ";
	cin >> enter;
	
	
	cout << "Now deleting the node.\n";
	firstList.removeByPosition(enter);
	
	firstList.print();
	
	cout << "Making a copy of the first firstList.\n";
	firstList.addAll();
	

	
	cout << "Removing all elements in firstList." << endl;
	firstList.removeAll();
	
	cout << "Making a copy of the first firstList.\n";
	//StringList firstList(secondList);


	
	cout << "Here are the first nodes now.\n";
	firstList.print();
	cout << endl;
   
   	cin.ignore();
	cin.get();

   return 0;
}
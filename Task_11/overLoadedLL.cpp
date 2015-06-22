#include <iostream>
#include "overloadDemo.h"
using namespace std;

int main(){
   overloadDemo<int> list;
   
   int enter;
   
   list.appendNode(3);    
   list.appendNode(6);   
   list.appendNode(9);    
   list.appendNode(12);    

   cout << "Here is the list of numbers: " << endl;
   list.displayList();
   cout << endl;

   	cout << "Enter a number in the firstList to delete (0 = first): ";
	cin >> enter;
	
   cout << "\nSearching for the value: " << enter << "\nFound in node number:  " << list.search(enter) << endl;
   
	cin.ignore();
	cin.get();
	
   return 0;
}
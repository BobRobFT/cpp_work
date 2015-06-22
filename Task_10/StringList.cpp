//StringList.cpp
//Task 10
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14
#include <iostream> 
#include "ListDemo.h"
#include <string>
using namespace std;



void StringList::appendNode(std::string num)
{
   ListNode *newNode, *nodePtr;

   newNode = new ListNode;
   newNode->value = num;
   newNode->next = NULL;

   if (!head)
      head = newNode;
   else  
   {
      nodePtr = head;

      while (nodePtr->next)
         nodePtr = nodePtr->next;

      nodePtr->next = newNode;
   }
}

void StringList::print()
{
   ListNode *nodePtr;

   nodePtr = head;
   while (nodePtr)
   {
      cout << nodePtr->value << endl;
      nodePtr = nodePtr->next;
   }
}



void StringList::removeByPosition(int enter){



	ListNode *newNode = new ListNode;
    newNode->next = NULL;



   ListNode *nodePtr, *previousNode;

   if (!head)
      return;
   
   if (enter == 0)
   {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
   }
   else
   {
      nodePtr = head;


	  int numberToSkip = 1; 
      while (numberToSkip <= enter)
      {  
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
		 numberToSkip++;
      }

      if (nodePtr)
      {
         previousNode->next = nodePtr->next;
         delete nodePtr;
      }
   }
   
   
}

StringList::~StringList()
{
   ListNode *nodePtr, *nextNode;

   nodePtr = head;
   while (nodePtr != NULL)
   {
      nextNode = nodePtr->next;
      delete nodePtr;
      nodePtr = nextNode;
   }
}




void StringList::addAll(){
	ListNode *newNode, *nodePtr;
	StringList secondList;
	
	StringList firstList(secondList);
	
	cout << "Here are the second nodes now.\n";
	secondList.print();
	cout << endl;
}


void StringList::removeAll(){
   ListNode *nodePtr, *previousNode;

   if (!head)
      return;
	  


      nodePtr = head;

	while(nodePtr!=NULL) {   
		nodePtr->next = NULL;
		nodePtr = head->next;
	}
   
}









//ListDemo.cpp
//Task 10
//Auother: Bob Roberts
//ID: 12407404
//Last update: 03/05/14

// Specification file for the StringList class
#ifndef LISTDEMO_H
#define LISTDEMO_H

class StringList{
private:
   // Declare a structure for the firstList
   struct ListNode
{
      std::string value;
      struct ListNode *next;
   }; 

   ListNode *head;   // firstList head pointer

public:
   StringList()   // Constructor
      { head = NULL; }
   ~StringList(); // Destructor
   void appendNode(std::string); //appendNode
   void removeByPosition(int); //deleteNode
   void addAll();
   void removeAll();
   void print();
};

#endif
#ifndef OVERLOADDEMO_H
#define OVERLOADDEMO_H
#include <iostream>    
using namespace std;

template <class T>
class overloadDemo{
private:
   struct ListNode{
      T value;
      struct ListNode *next;
   }; 

   ListNode *head;  

public:
   overloadDemo() { 
		head = NULL; 
   }
   ~overloadDemo(); 
   void appendNode(T);
   void insertNode(T);
   void deleteNode(T);
   void displayList();
   int search(T);    
};

template <class T>
void overloadDemo<T>::appendNode(T newValue){
   ListNode *newNode, *nodePtr;

   newNode = new ListNode;
   newNode->value = newValue;
   newNode->next = NULL;

   if (!head)
      head = newNode;
   else  {
      nodePtr = head;

      while (nodePtr->next)
         nodePtr = nodePtr->next;

      nodePtr->next = newNode;
   }
}

template <class T>
void overloadDemo<T>::displayList(){
   ListNode *nodePtr;

   nodePtr = head;
   while (nodePtr){
      cout << nodePtr->value << endl;
      nodePtr = nodePtr->next;
   }
}

template <class T>
void overloadDemo<T>::insertNode(T newValue){
   ListNode *newNode, *nodePtr, *previousNode = NULL;

   newNode = new ListNode;
   newNode->value = newValue;
   
   if (!head){
      head = newNode;
      newNode->next = NULL;
   }
   else  {
      nodePtr = head;
      previousNode = NULL;

      while (nodePtr != NULL && nodePtr->value < newValue){  
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
      }

      if (previousNode == NULL){
         head = newNode;
         newNode->next = nodePtr;
      }
      else {
         previousNode->next = newNode;
         newNode->next = nodePtr;
      }
   }
}

template <class T>
void overloadDemo<T>::deleteNode(T searchValue){
   ListNode *nodePtr, *previousNode;

   if (!head)
      return;
   
   if (head->value == searchValue){
      nodePtr = head->next;
      delete head;
      head = nodePtr;
   }
   else{
      nodePtr = head;

      while (nodePtr != NULL && nodePtr->value != searchValue){  
         previousNode = nodePtr;
         nodePtr = nodePtr->next;
      }

      if (nodePtr){
         previousNode->next = nodePtr->next;
         delete nodePtr;
      }
   }
}

template <class T>
overloadDemo<T>::~overloadDemo(){
   ListNode *nodePtr, *nextNode;

   nodePtr = head;
   while (nodePtr != NULL){
      nextNode = nodePtr->next;
      delete nodePtr;
      nodePtr = nextNode;
   }
}

template <class T>
int overloadDemo<T>::search(T val){
   int count = 1;
   ListNode *nodePtr;

   nodePtr = head;
   while (nodePtr){
      if( nodePtr->value == val){
         return count;
      }
      else{
         nodePtr = nodePtr->next;
         count++;
      }
   }
   return 0;
}



#endif
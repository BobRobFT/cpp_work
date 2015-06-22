//stack.cpp
//Task 12
//Auother: Bob Roberts
//ID: 12407404
//Last update: 01/05/14

// Implementation file for the IntStach class
#include <iostream>
#include "stack.h"
using namespace std;


IntStack::IntStack(int size)
{
   stackArray = new std::string[size]; 
   stackSize = size; 
   top = -1;
}


IntStack::IntStack(const IntStack &obj)
{
   // Create the stack array.
   if (obj.stackSize > 0)
      stackArray = new std::string[obj.stackSize];
   else
      stackArray = NULL;

   // Copy the stackSize attribute.
   stackSize = obj.stackSize;

   // Copy the stack contents.
   for (int count = 0; count < stackSize; count++)
      stackArray[count] = obj.stackArray[count];

   // Set the top of the stack.
   top = obj.top;
}


IntStack::~IntStack()
{
   delete [] stackArray;
}


void IntStack::push(std::string num)
{
   if (isFull())
   {
      cout << "The stack is full.\n";
   }
   else
   {
      top++;
	stackArray[top] = num;
   }
}


void IntStack::pop(std::string &num)
{
   if (isEmpty())
   {
      cout << "The stack is empty.\n";
   }
   else{
   
      num = stackArray[top];
      top--;
   }
}

bool IntStack::isFull() const
{
   bool status;

   if (top == stackSize - 1)
      status = true;
   else
      status = false;

   return status;
}


bool IntStack::isEmpty() const
{
   bool status;

   if (top == -1)
      status = true;
   else 
      status = false;

   return status;
}







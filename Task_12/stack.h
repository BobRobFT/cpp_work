//stack.h
//Task 12
//Auother: Bob Roberts
//ID: 12407404
//Last update: 01/05/14

// Specification file for the IntStack class
#ifndef STACK_H
#define STACK_H
#include <string>

class IntStack
{
private:
   std::string *stackArray;  // Pointer to the stack array
   int stackSize;    // The stack size
   int top;          // Indicates the top of the stack

public:
   // Constructor
   IntStack(int);

   // Copy constructor
   IntStack(const IntStack &);

   // Destructor
   ~IntStack();
   
   // Stack operations
   void push(std::string);
   void pop(std::string &);
   bool isFull() const;
   bool isEmpty() const;
}; 
#endif
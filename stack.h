#ifndef _Stack_H_
#define _Stack_H_
#include "disc.h"

class Node
{
	public:
    Disc* data;
		Node *next;
  Node() {
    data = NULL;
    next = NULL;
  }
  Node(Disc* d) {
    data = d;
    next = NULL;
  }
};

class Stack
{


	Node* pTop;
  int numNodes;


	public:
		Stack();  // Construct stack
    ~Stack();
    int getNumNodes();
		void push(Disc* inData);	// Add element to top of stack
		Disc* pop();				// Return element at top of stack and remove from top
		Disc* top();				// Return element at top of stack
		bool empty();
		void display();

};

#endif 		//_Stack_H_

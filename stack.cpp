#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Stack::Stack()
{
  pTop = NULL;
  numNodes = 0;
}

Stack::~Stack()
{
	delete pTop;// delete data;
}

int Stack::getNumNodes() {
  return numNodes;
}


void Stack::push(Disc* inData)
{
  Node* addedNode = new Node(inData);
  if (numNodes == 0) {
    pTop = addedNode;
  }
  else {
    Node* temp = pTop;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = addedNode;
  }
  numNodes++;// your code*/
}
Disc* Stack::pop()
{
  if(numNodes == 0){
    return NULL;
  }
  Node* temp;
  temp = pTop;
  if(numNodes == 1){
    Disc* p = temp->data;
    pTop = NULL;
    numNodes--;
    return p;
  }
  Node* temp1;
  while (temp->next->next != NULL){
    temp = temp->next;
  }
  Disc* tempD = temp->next->data;
  temp->next = NULL;
  numNodes--;
  return tempD;// your code
}

Disc* Stack::top()
{
	if(numNodes == 0){
    return NULL;
  }
  if (numNodes == 1) {
    return pTop->data;
  }
  Node* temp;
  temp = pTop;
  Node* temp1;
  while (temp->next->next != NULL){
    temp = temp->next;
  }
  Disc* tempD = temp->next->data;
  return tempD;// your code
}

bool Stack::empty()
{
  return numNodes == 0;// your code
}

void Stack::display()
{
	Node *p1;
	p1 = pTop;
	while (p1 != NULL)
	{
		cout<< ((p1->data))->toString()<<"\t";
		p1 = p1->next;
	}
	cout<<endl;
}


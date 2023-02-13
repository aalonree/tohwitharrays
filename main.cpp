
#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"

using namespace std;

void toh(int n)
{
  int i, x;
	Stack* t1 = new Stack();
	Stack* t2 = new Stack();
	Stack* t3 = new Stack();
    for (i = n; i >= 1; i--)
    {
		  Disc* d = new Disc(i);
      t1->push(d);
    }
  cout << endl << "starting algorithm:" << endl << "0 --------------------" << endl;
  t1->display();
  t2->display();
  t3->display();

  
	// ****  Your Tower of Hanoi solution!
  x = 1;
  int numMoves = pow(2, n) - 1;
  if (n%2 == 0){ // if even
    /*
      make the legal move between pegs A and B (in either direction),
      make the legal move between pegs A and C (in either direction),
      make the legal move between pegs B and C (in either direction),
      repeat until complete.*/
    while(true) {
      cout << x <<  " --------------------" << endl;;
      x++;
      if (t2->empty())
        t2->push(t1->pop());
      else if (t1->empty()) 
        t1->push(t2->pop());
      else if (t1->top()->getSize() < t2->top()->getSize())
        t2->push(t1->pop());
      else 
        t1->push(t2->pop());
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;

      cout << x <<  " --------------------" << endl;;
      x++;
      if (t3->empty())
        t3->push(t1->pop());
      else if (t1->empty()) 
        t1->push(t3->pop());
      else if (t1->top()->getSize() < t3->top()->getSize())
        t3->push(t1->pop());
      else 
        t1->push(t3->pop());
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;

      cout << x <<  " --------------------" << endl;
      x++;
      if (t3->empty())
        t3->push(t2->pop());
      else if (t2->empty()) 
        t2->push(t3->pop());
      else if (t2->top()->getSize() < t3->top()->getSize())
        t3->push(t2->pop());
      else 
        t2->push(t3->pop());
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;
      
    }
  }
  else{ // if odd
    /*
      make the legal move between pegs A and C (in either direction),
      make the legal move between pegs A and B (in either direction),
      make the legal move between pegs B and C (in either direction),
      repeat until complete.    */  
    while (true) {
      cout << x <<  " --------------------" << endl;
      x++;
      if (t3->empty()) 
        t3->push(t1->pop());
      else if (t1->empty()) 
        t1->push(t3->pop());
      else if (t1->top()->getSize() < t3->top()->getSize())
        t3->push(t1->pop());
      else 
        t1->push(t3->pop()); 
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;
      
      cout << x <<  " --------------------" << endl;
      x++;
      if (t2->empty()) 
        t2->push(t1->pop());
      else if (t1->empty()) 
        t1->push(t2->pop());
      else if (t1->top()->getSize() < t2->top()->getSize()) 
        t2->push(t1->pop());
      else 
        t1->push(t2->pop());
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;
      
      cout << x <<  " --------------------" << endl;
      x++;
      if (t3->empty()) {
        t3->push(t2->pop());
      }
      else if (t2->empty()) {
        t2->push(t3->pop());
      }
      else if (t2->top()->getSize() < t3->top()->getSize()) {
        t3->push(t2->pop());
      }
      else {
        t2->push(t3->pop());
      }
      t1->display();
      t2->display();
      t3->display();
      if (x-1 == (numMoves)) 
        break;
    }
    t1->~Stack();
    t2->~Stack();
    t3->~Stack();
  }
  
}

int main()
{
    int n;
    cout<<"enter the number of disks 'n'\n";
    cin>>n;
    toh(n);
    cout << "yipee!!" << endl;
    return 0;
}
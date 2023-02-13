#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"
using namespace std;

Disc::Disc() {
  size = 0;
}

Disc::Disc(int a) {
  size = a;
}

Disc::~Disc(){
  size = 0;
}

int Disc::getSize(){
  return size;
}

void Disc::setSize(int a){
  size = a;
}

std::string Disc::toString(){
  return to_string(size);
}
// Implement the functions protoyped in disc.h
// Your code here


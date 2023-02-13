#ifndef DISC_H
#define DISC_H
#include<stdio.h>
#include<string.h>
#include<iostream>

class Disc
{
	int size;
	
public:
	Disc();
	Disc(int a);
	~Disc();
	int getSize();
	void setSize(int a);
	std::string toString();

};

#endif // DISC_H

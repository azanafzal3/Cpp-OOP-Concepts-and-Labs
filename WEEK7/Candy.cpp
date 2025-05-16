 /*
 * Candy.cpp
 *
 *  Created on: Mar 15, 2023
 *      Author: lab
 */

#include "Candy.h"
#include<iostream>
using namespace std;


Candy::Candy() {
	cout<<"Object created..."<<endl;
}

Candy::Candy(int a,char b,char c)
{
	this->price=a;
	this->name=b;
	this->company=c;
}

Candy::Candy(Candy & obj)
{
	this->price=obj.price;
	this->name=obj.name;
	this->company=obj.company;
}

void Candy::show()
{
	cout<<"Price:"<<this->price<<endl;
	cout<<"Name:"<<this->name<<endl;
	cout<<"Company is:"<<this->company<<endl;
}

void print()
{
	cout<<"Non Member Function"<<endl;
}

/*int Candy::addingP()
{
	this->price++;
	return price;
}*/

char Candy::company= '0';

int main()
{
	Candy a1(10, 'A', 'a');
	Candy a2(20,'B','b');
	Candy a3(30,'C','c');
    a1.show();
	a2.show();
	a3.show();
}

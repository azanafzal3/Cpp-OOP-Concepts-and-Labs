#include "Book.h"
#include<iostream>
#include<string>
using namespace std;

class Book
{
	private:
		int a;
		string b;
public:	
Book()
{
	cout<<"Constructor called"<<endl;
}

Book (int x , string s)
{
	a = x;
	b = s;
}

Book (operator &a)
{
	a = a.x;
}
Book ( operator &b)
{
	b = b.s;
}
~Book()
{
	cout<<"Destructor called"<<endl;
}

};

Book::Book(operator +=p)
{
	}
	
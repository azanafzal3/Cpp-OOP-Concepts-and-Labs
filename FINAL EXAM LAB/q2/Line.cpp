#include "Line.h"
#include<iostream>
#include<string>
using namespace std;

class Line
{
	private:
		string l;
public:
Line()
{
	cout<<"Constructor called"<<endl;
}
Line (string x=" Null" )
{
	l =x;
}

Line(operator &l)
{
	l = l.x;
}

Line()
{
}

};
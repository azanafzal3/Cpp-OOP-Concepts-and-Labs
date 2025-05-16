#include "Page.h"
#include<iostream>
using namespace std;
class Page
{
	private:
		int page;
	public:
Page()
{
cout<<"Constructor Called"<<endl;
}
Page (int x=0)
{
	page = x;
}
Page (operator &page)
{
	page = page.x;
}
~Page()
{
cout<<"Destructor called"<<endl;
}

};

Page::Page(operator +=b[2][2]) 
{
	
}

Page::Page(opertor +=l)
{
	
}

Page::Page(operator =x)
{
	
}

Page::Page(operator [])
{
	
}

#include<iostream>
#include<string>
using namespace std;

class rectangle
{
private:
float area;
float length;
float width;


public:
rectangle()
{
cout<<"Default Constructor..."<<endl;
}


void GetValues(float l, float w)
{
area= l*w;
cout<<"Length is:"<<" "<<l<<endl;
cout<<"Width is:"<<" "<<warea= l*w;<<endl;
cout<<"Area of rectangle is:"<<area<<endl;
}

void Updated_values(float l, float w)
{
l=l+1;
w=w+1;
area=l*w;

cout<<"Updated values are:"<<area<<endl;
}

void setLength( float l)
{length =l;}
float getLength()
{return length;}

void setWidth( float w)
{width =w;}
float getWidth()
{return width;}
};

/*int main()
{
float l =3.66;
float w=5.99;
rectangle r;
r.GetValues(l,w);
r.Updated_values(l,w);
return 0;
}*/

#include<iostream>
using namespace std;
class Distance
{
   private:
         int feet;
         int inches;
   public:
        Distance()
        {
         feet = 0;
         inches = 0;
        }
        Distance(int inches,int feet)
        {
          if(inches>=12)
          {
          int a;
           a=(inches)/12;
           feet=feet+a;
          }}
        bool setfeet(int f)
        {
        feet=f;
        return 1;
        }
        int getfeet()const
        {
        return feet;
        }
        bool setinches(int i)
        {
        inches=i;
        return 1;
        }
        int getinches()const
        {
        return inches;
        }


Distance operator +(Distance& d)
	{
		Distance do1;
		do1.feet = this->feet + d.feet;
		do1.inches = this->inches + d.inches;
		return do1;
	}
	
Distance operator -(Distance& d)
	{
		Distance do1;
		do1.feet = this->feet - d.feet;
		do1.inches = this->inches - d.inches;
		return do1;
	}
	
Distance operator =(Distance& d)
	{
		Distance do1;
		do1.feet =  d.feet;
		do1.inches = d.inches;
		return do1;
	}		
};        


int main()
{
Distance d1;
	d1.setfeet(5);
	d1.setinches(5);
Distance d2;
	d2.setfeet(10);
	d2.setinches(10);

	cout << "Value of feet + inches is: " << d1+d2 << endl;
	cout << "Volume of feet - inches is: " << d1-d2 << endl;
	
return 0;
}        

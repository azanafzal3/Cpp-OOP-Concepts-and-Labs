#include<iostream>
#include<string>
using namespace std;
class Computer
{
protected:
 string companyName;
 float price;
public:
	Computer(string n, float p)
    {
    	companyName = n;
    	price = p;
	}
	void show()
	{
		cout<<"Company name is :"<<companyName<<endl;
		cout<<"Price is :"<<price<<endl;
}
};

class Desktop : public Computer
{
	private : 
	string color;
	float monitor_size;
	string processor;
	public:
		Desktop (string n, float p, string c, float ms, string pr): Computer (n,p)
		{
			color = c;
			monitor_size = ms;
			processor = pr;
		}
	void show()
	{
		cout<<"Company name is:"<<companyName<<endl;
		cout<<"Price is:"<<price<<endl;
		cout<<"Color is :"<<color<<endl;
		cout<<"The size of monitor is :"<<monitor_size<<endl;
		cout<<"Processor is :"<<processor<<endl;
	}	
};

class Laptop : public Computer 
{
	private:
		string color;
		float size;
		float weight;
		string processor;
	public:
	  Laptop (string n, float p, string c1, float s,float w, string pro): Computer (n,p) 
	  {
	  	color = c1;
	  	size = s;
	  	weight = w;
	  	processor = pro;
	 }	
	void show ()
	{
		cout<<"Company name is:"<<companyName<<endl;
		cout<<"Price is:"<<price<<endl;
		cout<<"Color is:"<<color<<endl;
		cout<<"Size is:"<<size<<endl;
		cout<<"Weight is:"<<weight<<endl;
		cout<<"Processor is:"<<processor<<endl;
	}
};
int main()
{
	Desktop d1("Asus", 200065, "White", 15, "Core i11");
	d1.show();
	
	Laptop l1("Victus", 300000, "Black", 18.7, 1.5,  "Corei12");
	l1.show();
	
	return 0;
	
}
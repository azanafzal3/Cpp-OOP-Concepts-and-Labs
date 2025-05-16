#include<iostream>
#include<string>
using namespace std;
class Branch
{
	private:
		string employee;
		string location;
		string menu;
		
	public:
	Branch()
	{
		cout<<"Constructor"<<endl;
	}	
	Branch(string s, string e, string l)
	{
		employee = e;
		location = l;
		menu = s;
	}
	
	void display()
	{
		cout<<"Employee"<<employee<<endl;
		cout<<"Location"<<location<<endl;
		cout<<"Menu"<<menu<<endl;
	}
	
	void setEmployee(string e)
	{
		employee = e;
	}
	void setLocation( string l)
	{
		location = l;
	}
	void setMenu(string s)
	{
		menu = s;
	}
	
	string getEmployee()
	{
		return Employee;
	}
	string getLocation()
	{
		return Location;
	}
	string getMenu()
	{
		return Menu;
	}
	
	~Branch()
	{
		cout<<"Destructor"<<endl;
	}
	
	
};


class Employee
{
	private:
		string name;
		string role;
	public:
	Employee()
	{
		cout<<"Constructor"<<endl;
	}	
	Employee(string n, string r)
	{
		name = n;
		role = r;
	}
	
	void display()
	{
		cout<<"name"<<name<<endl;
		cout<<"role"<<role<<endl;
	}
	
	void setName(string n)	
	{
		name  n;
	}
	string getName()
	{
		return Name;
	}
	
	void setRole(string r)
	{
		role = r;
	}
	string getRole()
    {
    	return Role;
		}	
	
	~Employee()
	{
		cout<<"Destructor"<<endl;
	}		
};

class Customer
{
	private:
		int order;
		int bill;
	public:
	Customer()
	{
		cout<<"Constructor"<<endl;
	}	
		
	Customer ( int o, int b)
	{
		order =o;
		bill = b;
	}
	void display()
	{
		cout<<"order"<<order<<endl;
		cout<<"Total bill "<<bill<<endl;
	}
	
	void setOrder(int o)
	{
		order = o;
		}	
	int getOrder()
	{
		return Order;
		}	
	
	void setBill(int b)
	{
		bill = b;
	}
	int getBill()
	{
		return Bill;
	}
	~Customer()
	{
		cout<<"Destructor"<<endl;
	}	
};

class Icecream
{
	private:
		string flavour;
		string attribute;
	public:
	Icecream()
	{
		cout<<"Constructor"<<endl;
	}
	
	Icecream(string f, string t)
	{
		flavour = f;
		attribute = t;
	}
	
	void display()
	{
		cout<<"flavours are"<<flavour<<endl;
		cout<<"Select attribute"<<attribute<<endl;
	}
	
	void setFlavour(string f)
	{
		flavour = f;
		}	
	string getFlavour()
	{
		return Flavour;
		}	
		
	void setAttribute(string t)
	{
		attribute = t;
	}
	string getAttribute()
	{
		return Attribute;
	}
	
	void regularflavours()
	{
		cout<<"Chocolate (S:220, M:320, L:420)"<<endl;
		cout<<"Vanilla (S:220, M:320, L:420)"<<endl;
		cout<<"Strawberry (S:220, M:320, L:420)"<<endl;
	}
	
	void specialflavours()
	{
		cout<<"Mango in Multan bRanch (S:230,M:330,L430)"<<endl;
	    cout<<"Coconut in Karachi bRanch (S:210,M:310,L410)"<<endl;
	    cout<<"tutti frutty in Lahore bRanch (S:240,M:340,L440)"<<endl;
	    cout<<"pistachio in Peshawar bRanch (S:250,M:350,L450)"<<endl;
	    cout<<"Cherry in Quetta bRanch (S:200,M:300,L400)"<<endl;
	    cout<<"Coffee in skardu bRanch (S:220,M:320,L420)"<<endl;
	}
		
	~Icecream()
	{
		cout<<"Destructor"<<endl;
		}	
};


int main()
{
	
	void display();
	void display();
	void display();
	void display();
	
	void regularflavours();
	void specialflavours();
	
	void specialflavours()
	{
		cout<<"Adding ISLAMABAD BRANCH"<<endl;
	}
	
	
	
return 0;	
}

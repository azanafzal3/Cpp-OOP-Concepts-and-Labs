#include<iostream>
#include<string>
using namespace std;
class Employee
{
	protected:
		string name;
		int empId;
	public:
		Employee(string n, int e)
		{
			name = n;
			empId = e;
		}
};

class HourlyEmployee : public Employee
{
private:
    int hourlyIncome;
public:
    HourlyEmployee(string n,int e,int i) : Employee(n,e)
	{
		hourlyIncome=i;
	}
	int calculate_the_hourly_income (int hours)
	{
		hours = hours *150;
		return hours;
	}
};

class PermanentEmployee : public Employee
{
private:
    int hourlyIncome;
public:
    PermanentEmployee(string n, int e, int i) : Employee(n,e)
	{
		hourlyIncome=i;
	}
	int calculate_the_income ()
	{
       return 240 * 150;
	}
};


int main()
{
	HourlyEmployee h1 ("Sunduss Amir", 2244345, 24);
	int hours;
	cout<<"Enter hours"<<endl;
	cin>>hours;
	int TotalIncome = h1.calculate_the_hourly_income(hours);
	cout<<"The hourly income of employee is:"<<TotalIncome<<endl;
	
	PermanentEmployee p1 ("DK", 22, 245);
	int totalIncome = p1.calculate_the_income();
	cout<<"The hourly income of employee is:"<<totalIncome<<endl;
	
	
	
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

class student
{
//public:
private:
  string name;
  int age;
  string roll_number;
  double cgpa;
  
public:  
  //constructor
  
  student()
  {
  cout<<"Default constructor..."<<endl;
  }
  
  /*student(string s, int a)
  {
  name=s;
  age=a;
  cout<<"Student name is:"<<name<<endl;
  cout<<"Student age is:"<<age<<endl;
  }*/
  
  student(string s, int a, string r, double c)
  {
  name =s;
  age =a;
  roll_number =r;
  cgpa =c;
  cout<<"Student name is: "<<" "<<name<<endl;
  cout<<"Student age is:"<<" "<<age<<endl;
  cout<<"Student roll no is:"<<" "<<roll_number<<endl;
  cout<<"Student cgpa is:"<<" "<<cgpa<<endl;
  }
  
  // setter getters
  void setName(string n)
  {name=n;}
  string getName()
  {
  cout<<"Name:"<<endl;
  return name;}
  
  void setAge(int a)
  {age = a;}
  int getAge()
  {return age;}
  
  void setRollnumber(string r)
  {roll_number =r;}
  string getRollnumber()
  {return roll_number;}
  
  void setCgpa(double c)
  {cgpa =c;}
  double getCgpa()
  {return cgpa;}
  
  
  /*~student()
  {
  cout<<"Destructor for "<<name<<endl;
  }*/
  
};
int main()
{
  student s4("Ali" , 21 , "22i-1741", 3.6 );

return 0;
}

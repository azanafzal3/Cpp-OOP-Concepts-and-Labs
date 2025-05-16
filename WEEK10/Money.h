#ifndef MONEY_H
#define MONEY_H

#include<iostream>
#include<string>
class Money
{
	int a,b;
	public:
		Money();
        Money(int dollar, int cents);
        int getDollars() const;
        int getCents() const;
        void setDollars(int dollar);
        void setCents(int cents);
        Money operator+(const Money &obj) ;
		Money operator-(const Money &obj);
		const Money operator=(const Money &obj);
		void operator++ ();
		void operator++ (int);
		void operator-- ();
	    //void operator-- (const Money& right);
	    //void operator*= (const Money& right);
	    //bool operator!= (const Money& right);
	    //bool operator > (const Money& right);
	    //ostream operator<< (ostream &os,Money& right);
	    //Istream operator>> (istream & in,Money& right);
	    //~Money();
};

#endif
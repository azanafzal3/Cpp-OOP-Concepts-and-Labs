#include "Money.h"
#include<iostream>
using namespace std;

Money::Money() 
{
    a = 0;
    b = 0;
}

Money::Money(int dollar, int cents) 
{
    a = dollar;
    b = cents;
    if (a >= 100) {
        b += b / 100;
        a %= 100;
    }
}

int Money::getDollars() const 
{
    return a;
}

int Money::getCents() const 
{
    return b;
}

void Money::setDollars(int dollar) 
{
    a = dollar;
}

void Money::setCents(int cents)
 {
    b = cents;
    if (b >= 100) {
        a += b / 100;
        b %= 100;
    }
}

Money Money::operator+(const Money &obj)
 {
    Money result;
    result.setDollars(a + obj.getDollars());
    result.setCents(b + obj.getCents());
    return result;
}

Money Money::operator-(const Money &obj)
 {
    Money result;
    int cents1 = a * 100 + b;
    int cents2 = obj.getDollars() * 100 + obj.getCents();
    int variation = cents1 - cents2;
    if (variation < 0) 
	{
        variation = -variation;
        result.setDollars(variation / 100);
        result.setCents(variation % 100);
        result.setDollars(-result.getDollars());
    }
    else 
	{
        result.setDollars(variation / 100);
        result.setCents(variation % 100);
    }
    return result;
}

const Money Money::operator=(const Money &obj) 
{
    a = obj.getDollars();
    b = obj.getCents();
    return *this;
}

void Money::operator++() 
{
    int cents;
    int dollars;
    cents++;
    if (cents >= 100) {
        dollars++;
        cents -= 100;
    }
}

void Money::operator++(int x) 
{
    int cents;
    cents++;
    int dollars;
    if (cents >= 100) {
        dollars++;
        cents -= 100;
    }
}

void Money::operator--() 
{
    int cents;
    cents--;
    int dollars;
    if (cents < 0) 
	{
        dollars--;
        cents += 100;
    }
}

/*void Money::operator*=(const Money& right) 
{
    int newCents = cents * right.cents;
    int newDollars = dollars * right.dollars;
    if (newCents >= 100) {
        newDollars += newCents / 100;
        newCents %= 100;
    }
    dollars = newDollars;
    cents = newCents;
}*/

/*bool Money::operator!=(const Money& right) 
{
    return (dollars != right.dollars) || (cents != right.cents);
}

bool Money::operator>(const Money& right)
{
    if (dollars > right.dollars) 
	{
        return true;
    } else if (dollars == right.dollars && cents > right.cents) 
	{
        return true;
    }
    return false;
}*/


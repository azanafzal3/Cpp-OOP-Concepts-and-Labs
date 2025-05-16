#include "Money.h"
#include <iostream>
using namespace std;
int main() {
    Money m1(40, 78);
    Money m2(50, 85);
    Money m3 = m1 + m2;
    Money m4 = m2 - m1;
    //Money m5 = m3 * m4;

    // Test the increment and decrement operators
    ++m1;
    m2++;
    --m3;
    //m4--;

    // Test the comparison operators
    //bool b1 = m1 == m2;
    //bool b2 = m3 != m4;
    //bool b3 = m5 > m1;
    
    cout<<"m1: $"<<m1.getDollars()<<"."<<m1.getCents()<<endl;
    cout<<"m2: $"<<m2.getDollars()<<"."<<m2.getCents()<<endl;
    cout<<"m3: $"<<m3.getDollars()<<"."<<m3.getCents()<<endl;
    cout<<"m4: $"<<m4.getDollars()<<"."<<m4.getCents()<<endl;
    //cout<<"m5: $"<<m5.getDollars()<<"."<<m5.getCents()<<endl;
    //cout<<"m1 == m2:"<<boolalpha<<b1<<endl;
    //cout<<"m3 != m4:"<<boolalpha<<b2<<endl;
    //cout<<"m5 > m1:"<<boolalpha<<b3<<sendl;    
    return 0;
}

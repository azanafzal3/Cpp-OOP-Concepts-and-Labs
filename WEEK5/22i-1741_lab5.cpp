#include<iostream>
using namespace std;


int pow(int b,int e)
{
if (e>1)
return b*pow(b,e-1);
else if(e==0)
return 1;
}

          
          
          //task 3
          
       
int product(int a, int b)
{
if(b == 0)
    return 0;
  if(b > 0 )
     return a + product(a, b-1);   
  if(b<0)
    return -product(a, -b);
}



       //task 5
       
bool SubString(char str1[], char str2[], int length1, int length2) {
    if (length1 == 0) {
        return true;
    }
    
    
    if (length2 == 0) {
        return false;
    }
    
    if (str1[length1-1] == str2[length2-1]) {
        return SubString(str1, str2, length1-1, length2-1);
    }
    else {
        return SubString(str1, str2, length1, length2-1);
    }
}


               //task6

int fittest(int number) {
    if (number == 1) {
        return 1;
    }
    
    
    if (number % 2 == 0) {
        return fittest(number/2);
    }
   
    else {
        return fittest((3*number+1)/2);
    }
}



 

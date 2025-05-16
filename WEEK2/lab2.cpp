
         



#include <iostream>
using namespace std;
void get_Address(int &num)
{
	int *ptr;
	ptr=&num;
	cout<<"Entered number is:"<<num<<"and its address is"<<ptr<<endl;
	*ptr=1741;
	cout<<"New value of pointer is:"<<*ptr<<endl;
}




#include <iostream>
using namespace std;
void swap(int* n1, int* n2)
{
	int *ptr;
	ptr= n1;
	n1=n2;
	n2=ptr;
	cout<<"After swaping : value of n1 is "<<*n1<<" "<<"and n2 is "<<*n2;

}



#include <iostream>
using namespace std;
int* duplicate(int* ptr2, int arr2[],int length)
{
	for(int i=0;i<length;i++)
	{
		ptr2[i]=arr2[i];
	}
	
	for(int i=0;i<length;i++)
	{
		cout<<ptr2[i]<<" ";
	}
	return ptr2;
}



int countPrime(int arr[],int size, int count)
{
   int facs=0;j=0;
   
   for(int i=size;i>0;i--)
   {
   for (j=1,facs=0;j<=arr[i];j++)
   {
   if(arr[i]%j == 0)
   facs++;
   }
   if(facs==2) count++;
   }
   return count;
  }
   
   
   
  char* toCapital(char *p)
  {
  int i=0;
  while(p[i]='\0')
  {
  i++;
  }
  for(int j=0;j<i;j++)
  {
  p[j]=+32;
  }
   
   
   
   
   

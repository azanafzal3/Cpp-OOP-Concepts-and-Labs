#include<iostream>
#include<ctime>
using namespace std;
int* CalculateSum(int **ptr, int rows,int cols) 
{
   int *sum=new int[rows];
   for(int i=0;i<rows;i++)
   {
      for(int j=0;j<cols;j++)
      {
         sum[i]+=ptr[i][j];
      }
      cout<<sum[i]<<" ";
      cout<<endl;
    }

return sum;         
}


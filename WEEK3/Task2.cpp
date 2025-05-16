#include<iostream>
using namepsace std;

string diagonal (int** matrix, int rows, int columns)
{
	string answer ="upper" , notanswer="not upper";
	int j=0;
	int y=0, sum=0, w=1;
	for(int i=0;i<rows;i++)
	{
		j=columns-i;
		for(j;j<columns;j++)
		{
			if (matrix[i][j]==0)
			sum=sum+y;
			else if(matrix[i][j]!=0)
			sum=sum+w;
		}
	}
	if (sum==0)
	return answer;
	else 
	return notanswer;
}

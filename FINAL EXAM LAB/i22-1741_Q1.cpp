#include<iostream>
using namespace std;

void recursivepuzzle(int A[3])
{
	int B[3];
	int C[3];
	
	cout<<"Moving disks"<<" "<<A[0]<<" "<<"From peg A to C"<<endl;
	C[1]=A[0];
	cout<<"Moving disks"<<" "<<A[1]<<" "<<"From peg A to B"<<endl;
	B[1]=A[1];
	cout<<"Moving disks"<<" "<<A[0]<<" "<<"From peg C to B"<<endl;
	C[1]=B[2];
	cout<<"Moving disks"<<" "<<A[2]<<" "<<"From peg A to C"<<endl;
	C[1]=A[2];
	cout<<"Moving disks"<<" "<<A[0]<<" "<<"From peg B to A"<<endl;
	A[0]=B[0];
	cout<<"Moving disks"<<" "<<A[1]<<" "<<"From peg B to C"<<endl;
	C[1]=B[1];
    cout<<"Moving disks 1 From peg A to C"<<endl;
}

int main()
{
	int A[3] = {1,2,3};
	cout<<"Here it is a puzzle"<<endl;
	recursivepuzzle(A);
	return 0;
}
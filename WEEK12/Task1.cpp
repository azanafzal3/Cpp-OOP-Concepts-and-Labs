#include<iostream>
using namespace std;
class  BankAccount
{
	protected:
		int accountId;
		float balance;
	public:
	BankAccount(int i, float b)
	{
		accountId=i;
		balance=b;
	}
	/*void setAccountId(int i)
	{
		accountId=i;
    }
    int getAccountId()
    {
    	return accountId;
	}
	void setbalance(int b)
	{
		balance=b;
	}
	int getbalance()
	{
		return balance;
	}*/
	void balanceInquiry()
	{
		cout<<"Account Id is :"<<accountId<<endl;
		cout<<"Current Balance is :"<<balance<<endl;
	}
	void amountWithdrawn(float amount);
	void amountDeposit(float amount);
};

class CurrentAccount : public BankAccount
{
public:
	CurrentAccount(int i, float b) : BankAccount(i,b)
	{
		
	}
	void amountWithdrawn (float amount)
	{
	 if (balance-amount>=5000)
	 {
	 	balance = balance - amount;
	   cout<<"Amount withdrawn done"<<endl;	
	 }
	 else 
	{
	 	cout<<"Not withdrwan"<<endl;
	}}
	void amountDeposit(float amount)
	{
	 balance = balance+amount;	
	 cout<<"Amount Deposit Successfully"<<endl;	
	}	
	};

class SavingsAccount : public BankAccount
{
	public:
	SavingsAccount(int i, float b) : BankAccount(i,b)
    {}
	void amountWithdrawn (float amount)
	{
	 if (balance-amount>=10000)
	 {
	 	balance = balance - amount;
	   cout<<"Amount withdrawn done"<<endl;	
	 }
	 else 
	{
	 	cout<<"Not withdrwan"<<endl;
	}}
	void amountDeposit(float amount)
	{
	 balance = balance+amount;	
	 cout<<"Amount Deposit Successfully"<<endl;	
	}	
};

int main()
{
	CurrentAccount c1(001001,95000);
	c1.balanceInquiry();
	c1.amountWithdrawn(50000.560);
	c1.balanceInquiry();
	c1.amountDeposit(200.43);
	c1.balanceInquiry();
	
	SavingsAccount s1(2345678,150000);
	s1.balanceInquiry();
	s1.amountWithdrawn(23000.67);
	s1.balanceInquiry();
	s1.amountDeposit(230.78);
	s1.balanceInquiry();
	
	
	
	return 0;
}

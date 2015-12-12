//question 5 in chapter review and question 1 in programming exercise
#include <iostream>
#include "string"
using namespace std;
	class bankaccount
	{ private: string depositername;
	string accountnumber;
	float balance;
	public:
		void setdepositername (string s)
		{
			depositername=s;
		}
		void setaccountnumber (string s)
	    {
		accountnumber=s;
		}
		void setbalance (float x)
		{ 
			balance=x;
		}
		string getdepositername ()
		{
			return depositername;
		}
		string getaccountnumber ()
		{
			return accountnumber;
		}
		float getbalance()
		{
			return balance;
		}

		bankaccount b1() // default constructor
		{
			depositername=" "; accountnumber=" "; balance=0;
		}
		void deposite (float x)
		{
			balance+=x;
		}
		void withdraw(float x)
		{
			if(x>balance)
				cout<<"error";
			else
				balance-=x;
		}
	};

	void main()
	{
		
		float n,b,c;
		bankaccount b1;
		
		cout<<"enter your balance";
		cin>>n;
		b1.setbalance(n);
		

		cout<<"enter the value you want to deposite";
		cin>>b;
		b1.deposite(b);
		
		cout<<"enter the value you want to withdraw";
		cin>>c;
		b1.withdraw(c);

		cout<<"Balance is "<<b1.getbalance()<<endl;
		system("PAUSE");
	}
// end of question

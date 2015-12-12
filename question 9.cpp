#include <iostream>
#include "string"

class stock
{
	private:
		std::string company; //company is 1st data member 
		int shares; //shares is 2nd data member
		double shar_val; 
		double total_val;
		void set_tot() 
		{
			total_val=shares*shar_val;
		} 

	public:
		stock(); //default constructor
		stock(const std::string&co,long n=0,double pr=0.0); //constant string refrence
		~stock(); //destructor do nothing
		void buy(long num,double price);
		void sell (long num,double price);
		void update (double price);
		void show()const;
		const stock&topval(const stock&s) const;
		int getshares ()
		{ 
		  return shares;
		}
		double getshare_val()
		{
		  return shar_val;  
		}
		const std::string & getcompany ()
		{
		 return company;
		}
};







void main()
{

system("PAUSE");


}
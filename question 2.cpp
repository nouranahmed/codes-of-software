#include <iostream>
#include "string"

using namespace std;

class Person {
	private:
		static const int LIMIT = 25;
		string lname; // Person’s last name
		char fname[LIMIT]; // Person’s first name
	
	public:
	Person() {lname = ""; fname[0] = '\0'; } 
	
	void Show() 
	{
		int cnt = 0;
		while( cnt <LIMIT && fname[cnt]!='\0') 
		{
			cout<<fname[cnt];
			cnt++;
		}
		cout<<" "<<lname<<endl;
	}
	
	void FormalShow() 
	{
		cout<<lname<<" ";
		
		int cnt = 0;
		while( cnt <LIMIT && fname[cnt]!='\0') 
		{
			cout<<fname[cnt];
			cnt++;
		}
	}
	
	Person (const string &ln,const char *fn="heyyou")
	{
		lname=ln;
	
		for (int cnt=0;cnt<LIMIT;cnt++)
		{
			fname[cnt]=fn[cnt];
		}
	}
};


void main()
{
		Person p("hossam","nouran");
		p.Show();
		p.FormalShow();
		system("PAUSE");
}


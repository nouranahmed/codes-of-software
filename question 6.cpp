#include <iostream>
#include "string"

using namespace std;

class Move
{ 
	private: 
		double x;
		double y;

	public:
		Move (double a=0,double b=0)
		{
			x=a; 
			y=b;
		}

		void showmove()
		{ 
			cout<<x<<" , "<<y<<endl;
		}

		Move add (const Move &m)
		{ 
			double newx= m.x+this->x;
			double newy= m.y+this->y;

			return Move(newx,newy);
		}
		 
		void reset (double a=0,double b=0)
		{
			 x=a;
			 y=b;
		}

};



void main()
{
	Move m1(3,4);	
	m1.showmove();
		
	Move m2(5,6);
	m2.showmove();

	Move m3 = m1.add(m2);
	m3.showmove();

	m3.reset();
	m3.showmove();
system("PAUSE");
}
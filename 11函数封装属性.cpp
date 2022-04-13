#include<iostream>
using namespace std;
const double pi = 3.14;

class circle
{
	
	public:
		int r;
		double calculate()
		{
			return 2*pi*r;
		}
	
};

int main()
{
	circle c1;
	c1.r=10;
	cout<<c1.calculate()<<endl;
	
	
} 

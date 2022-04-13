#include<iostream>
using namespace std;
class building
{
	friend void goodgay(building &b);
	public:
		string sittingroom;
		building()
		{
			sittingroom="¿ÍÌü";
			bedroom="ÎÔÊÒ"; 
		}
	private:
		string bedroom;
};

void goodgay(building &b)
{
	cout<<"·ÃÎÊ"<<b.sittingroom<<endl;
	cout<<"·ÃÎÊ"<<b.bedroom<<endl;
	
}


int main()
{
	building b;
	goodgay(b);
}

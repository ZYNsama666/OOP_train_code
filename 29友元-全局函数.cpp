#include<iostream>
using namespace std;
class building
{
	friend void goodgay(building &b);
	public:
		string sittingroom;
		building()
		{
			sittingroom="����";
			bedroom="����"; 
		}
	private:
		string bedroom;
};

void goodgay(building &b)
{
	cout<<"����"<<b.sittingroom<<endl;
	cout<<"����"<<b.bedroom<<endl;
	
}


int main()
{
	building b;
	goodgay(b);
}

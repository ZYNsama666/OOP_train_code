#include<iostream>
using namespace std;

class Building;
class goodgay
{
	public:
		goodgay();
		Building *building;
		void visitp();
		void visitc();
};
class Building
{
	friend void goodgay::visitc();
	public:
		string sittingroom;
		Building();
	private:
		string bedroom;
};



goodgay::goodgay()
{
	building=new Building;
}
Building::Building()
{
	sittingroom="����";
	bedroom="����"; 
}
void goodgay::visitp()
{
	cout<<"common����"<<building->sittingroom<<endl;
	
}
void goodgay::visitc()
{
	cout<<"friend����"<<building->sittingroom<<endl;
	cout<<"friend����"<<building->bedroom<<endl;
}

void test01()
{
	
	goodgay gg;
	gg.visitp();
	gg.visitc();
}
int main()
{
	test01();
}

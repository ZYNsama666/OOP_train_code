#include<iostream>
#include<string>
using namespace std;


class Building
{
	friend class goodgay;
	public:
		string m_sittingroom;
		Building();
	private:
		string m_bedroom;
};
class goodgay
{
	public:
		goodgay();
		Building*building; 
		void visit();
}; 



Building::Building()
{
	m_sittingroom="����";
	m_bedroom="����";
}

goodgay::goodgay()
{
	building=new Building;

}

void goodgay::visit()
{
	cout<<"����"<<building->m_sittingroom<<endl;
	cout<<"����"<<building->m_bedroom<<endl;
}

void test()
{
	goodgay gg;
	gg.visit();
}


int main()
{
	test();
}

#include<iostream>
#include<string>
using namespace std;

class phone
{
	public:
		string m_pname;
		phone(string name)
		{
			m_pname=name;
		}
};
class person
{
	public:
		string m_name;
		phone m_phone;
		person(string name,string pname):m_name(name),m_phone(pname)
		{
			
		}	
		
};

void test01()
{
	person p1("zyn","huawei");
	person p2("уехЩ","iphone");
	cout<<p1.m_name<<endl;
	cout<<p1.m_phone.m_pname<<endl;
	cout<<p2.m_name<<endl;
	cout<<p2.m_phone.m_pname<<endl;
	
}


int main()
{
	test01();
	
}

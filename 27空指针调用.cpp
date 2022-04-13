#include<iostream>
using namespace std;
class person
{
	public:
		void showname()
		{
			cout<<"this is person"<<endl;
		}
		void showage()
		{
			cout<<"age="<<this->m_age<<endl;
		}
		int m_age;
	
	
};

void test01()
{
	person *p=NULL;
	p->showage();
	p->showname();
}


int main()
{
 	test01();
}

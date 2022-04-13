#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"构造函数调用"<<endl;
		}
		void showperson()const
		{
			this->m_b=100;
		} 
		mutable int m_b;
		//想在常函数里修改值的话需要加mutable关键字 
};

void test01()
{
	const person p;
	p.showperson();
	cout<<p.m_b<<endl;
}

int main()
{
	test01();
}

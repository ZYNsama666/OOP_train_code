#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"���캯������"<<endl;
		}
		void showperson()const
		{
			this->m_b=100;
		} 
		mutable int m_b;
		//���ڳ��������޸�ֵ�Ļ���Ҫ��mutable�ؼ��� 
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

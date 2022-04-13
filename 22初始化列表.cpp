#include<iostream>
using namespace std;
class person
{
	public:
		int m_A;
		int m_B;
		int m_C;
//		person(int a,int b,int c)
//		{
//			m_A=a;
//			m_B=b;
//			m_C=c;
//		}	
		person(int a,int b,int c):m_A(a) ,m_B(b),m_C(c)
		{
			
		}
};

void test01()
{
	person p(10,20,30);
	cout<<p.m_A<<endl;
	cout<<p.m_B<<endl;
	cout<<p.m_C<<endl;
	
}
int main()
{
	test01();
}



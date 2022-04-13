#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"默认构造函数"<<endl;
		}
		person(int age,int height)
		{
			m_age=age;
			m_height=new int(height);
			cout<<"有参构造函数"<<endl;
		}
		person(const person &p)
		{
			m_age=p.m_age;
			m_height=new int(*p.m_height);
			cout<<"拷贝函数"<<endl;
		}
		~person()
		{
			if(m_height!=NULL)
			{
				delete m_height;
				m_height=NULL;
			}
			cout<<"析构函数"<<endl;
		}
		int m_age;
		int *m_height;
 }; 
 
void test()
{
	person p1(10,160);
	person p2(p1);
	cout<<"P1:"<<p1.m_age<<" "<<*p1.m_height<<endl;
    cout<<"P2:"<<p2.m_age<<" "<<*p2.m_height<<endl;
}
 
int main()
{
	test();
}
 

#include<iostream>
using namespace std;

class person
{
	public:
		static void fun()
		{
			a=10;
			//b=10;
			cout<<"static void fun�ĵ���"<<endl;
		}
		static int a;
	//	int b;
	
};
int person::a=0;
void test01()
{
	person p;
	p.fun();
	
	//������������ 
	person::fun();
}



int main()
{
	
	test01();
	
} 

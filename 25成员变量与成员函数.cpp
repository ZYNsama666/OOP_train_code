#include<iostream>
using namespace std;

class person
{
	public:
		int A; 
		static int b;
		void fun();
		static void fun2();
};

int person::b;

void test01()
{
	person p;
	//�ն���ռ���ڴ�Ϊ1 
	cout<<sizeof(p)<<endl;
}



int main()
{
	test01();

	
} 

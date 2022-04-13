#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		person(int a)
		{
			age=a;
		}
		person(person &p)
		{
			age=p.age;
		}
		~person()
		{
			cout<<"函数析构调用"<<endl;
		}		
};

void test()
{
	person p1(10);
	person p2(p1);
}

void dowork(person p)
{
	
}

void test2()
{
	person p1(10);
	dowork(p1);
}

int main()
{
	test2();
} 


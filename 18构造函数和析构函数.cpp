#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"函数构造调用"<<endl;
		}
		~person()
		{
			cout<<"函数析构调用"<<endl;
		}		
};

void test()
{
	person p;
}
int main()
{
	test();
	person p;
	system("pause");
} 


#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"�����������"<<endl;
		}
		~person()
		{
			cout<<"������������"<<endl;
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


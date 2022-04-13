#include<iostream>
using namespace std;

class person
{
	public:
		person(int age)
		{
			this->age=age;
		}
		person &addage(person p)
		{
			this->age+=p.age;
			return *this;
		}
		int age;
};

void test01()
{
	person p(18);

	p.addage(p).addage(p).addage(p);
	cout<<p.age<<endl;
}



int main()
{
	test01();	
} 

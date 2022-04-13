#include<iostream>
using namespace std;
class fun{
	friend ostream& operator<<(ostream& cout, fun f);
	public:
		fun()
		{
			m_a=0;
		}
		fun & operator++()
		{
			m_a++;
			return *this;
		}
		fun operator++(int)
		{
			fun temp=*this;
			m_a++;
			return *this;
		}
	private:
		int m_a;
	
	
};

ostream& operator<<(ostream& cout, fun f)
{
	cout<<f.m_a<<endl;
}

void test01()
{
	fun f;
	cout<<++(++f);
	
}
void test02()
{
	fun f;
	cout<<f++;
	cout<<f;
}
int main()
{
	test02();
	
}

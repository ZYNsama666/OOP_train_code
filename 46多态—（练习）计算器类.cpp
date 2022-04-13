#include<iostream>
using namespace std;
class calculator{
public:
	int m_a;
	int m_b;
	virtual int getvalue(){
		return 0;
	}
}; 

class add:public calculator{
public:
	int getvalue(){
		return m_a+m_b;
	}
};

class sub:public calculator{
public:
	int getvalue(){
		return m_a-m_b;
	}
};

class mul:public calculator{
public:
	int getvalue(){
		return m_a*m_b;
	}
};

int main()
{
	calculator * test = new add;
	test->m_a=10;
	test->m_b=11;
	cout<<test->getvalue()<<endl;;
	delete test;
	
	calculator * _test = new sub;
	_test->m_a=10;
	_test->m_b=11;
	cout<<_test->getvalue()<<endl;;
	delete _test;
	
	calculator * __test = new mul;
	__test->m_a=10;
	__test->m_b=11;
	cout<<__test->getvalue()<<endl;;
	delete __test;
	
}

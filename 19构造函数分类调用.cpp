#include<iostream>
using namespace std;
class person 
{
	public:
		int age;
		//构造函数 
		person()
		{
			cout<<"构造函数test"<<endl;
		}
		person(int a)
		{
			age=a;
			cout<<"有参构造函数test"<<endl;
		}
		//拷贝构造函数
		person(const person &p)
		{
			age=p.age;
			cout<<"拷贝构造函数test"<<endl;
		}
		~person()
		{
			cout<<"析构函数test"<<endl;
		}
};

void test()
{
	//默认构造函数的调用 
	person p1;
	person p2(10); 
	person p3(p2); 
	
	//显示法 
	person p4=person(10);
	person p5=person(p4);
	
	//其中person(10)这一类的记为匿名对象创建完了立刻就没了，直接析构
	person(10);
	cout<<"结束"<<endl; 
	
	//隐式转换法
	 
	
	
}

int main()
{
	test();
	
}

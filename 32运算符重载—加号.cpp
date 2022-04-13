#include<iostream>
using namespace std;
class person
{
	public:
//	person operator+(person &p)
//	{
//		person temp;
//		temp.a=this->a+p.a;
//		temp.b=this->b+p.b;
//		return temp;	
//	}
		int a;
		int b;
};



person operator+(person &p1,person &p2)
{
	person temp;
	temp.a=p1.a+p2.a;
	temp.b=p1.b+p2.b;
	return temp;	
}
person operator+(person &p1,int num)
{
	person temp;
	temp.a=p1.a+num;
	temp.b=p1.b+num;
	return temp;	
}
void show(person &p)
{
	cout<<"a的值为"<<p.a<<endl;
	cout<<"b的值为"<<p.b<<endl;
}


int main()
{
	person p1,p2;
	
	p1.a=1;
	p1.b=2;
	p2.a=1;
	p2.b=2;
	person p3=p1+p2;
	person p4=p1+1;
	show(p3);
	show(p4);
}

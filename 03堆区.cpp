#include<iostream>
using namespace std;
int *fun()
{
	int a=100;
	int *p=new int(a);
	return p;
} 
int main()
{
	int *p=fun();
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
}

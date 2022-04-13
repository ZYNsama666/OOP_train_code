#include<iostream>
using namespace std;
int *fun()
{
	int a=100;
	return &a;
} 
int main()
{
	int *p=fun();
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
}

#include<iostream>
using namespace std;
int *fun()
{
	int *p=new int[10];
	for(int i=0;i<10;i++)
	{
		p[i]=i+1;
	}
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<endl;
	}
	return p;
} 
int main()
{
	int *p=fun();
	cout<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
	cout<<*p<<endl;
	delete [] p;
	cout<<*p<<endl;
}

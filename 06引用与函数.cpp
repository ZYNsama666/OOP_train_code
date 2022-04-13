#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
	int p=a;
	a=b;
	b=p;
}
int main()
{
	int a=1;
	int b=2;
	swap(a,b);
	cout<<a<<endl<<b<<endl;
}

#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int c=20;
	int &b=a;
	b=c;
	cout<<a<<" "<<b<<" "<<c<<endl;
 
}

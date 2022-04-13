#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout<<a<<endl;
	int &b=a;
	b=20;
	cout<<a<<endl;
 } 

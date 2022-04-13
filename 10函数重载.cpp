#include<iostream> 
using namespace std;
int fun()
{
	cout<<"fun1" <<endl;
}

int fun(int a)
{
	cout<<"fun2" <<endl;
}

int fun(double a)
{
	cout<<"fun3" <<endl;
}

int main() 
{
	fun();
	fun(2);
	fun(2.22);
}

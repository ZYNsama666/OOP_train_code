#include<iostream>
using namespace std;

class bass{
	public:
		int a;
		int fun(){
			cout<<"这是主页面"<<endl;
		}
}; 
class java:public bass{
	public:
		int funjava(){
			cout<<"这是java"<<endl;
		}
}; 
class cpp:public bass{
	public:
		int funcpp(){
			cout<<"这是cpp"<<endl;
		}
}; 
int main()
{
	bass a;
	java j;
	cpp c; 
	j.fun();
	j.funjava();
	cout<<endl;
	c.fun();
	c.funcpp();
}

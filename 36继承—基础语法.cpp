#include<iostream>
using namespace std;

class bass{
	public:
		int a;
		int fun(){
			cout<<"������ҳ��"<<endl;
		}
}; 
class java:public bass{
	public:
		int funjava(){
			cout<<"����java"<<endl;
		}
}; 
class cpp:public bass{
	public:
		int funcpp(){
			cout<<"����cpp"<<endl;
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

#include<iostream>
using namespace std;
class bass{
	public:
		int m_a;
		void fun(){
			cout<<"father fun"<<endl; 
		} 
		void fun(int a){
			cout<<"father fun"<<endl; 
		} 
		bass(){
			m_a=200;
		}
}; 
class son:public bass{
	public:
		int m_a;
		void fun(){
			cout<<"son fun"<<endl; 
		}
		son(){
			m_a=100;
		}
};
int main()
{
	son x;
	cout<<x.m_a<<endl;
	cout<<x.bass::m_a<<endl;
	x.fun();
	x.bass::fun();
	x.bass::fun(100);
}

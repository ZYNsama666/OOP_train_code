#include<iostream>
using namespace std;
class bass{
	public:
		static int m_a;
		static void fun(){
			cout<<"father fun"<<endl; 
		} 
		void fun(int a){
			cout<<"father fun"<<endl; 
		} 
}; 
int bass::m_a=100; 
class son:public bass{
	public:
		static int m_a;
		static void fun(){
			cout<<"son fun"<<endl; 
		}
};
int son::m_a=200; 
int main()
{
	son x;
	cout<<x.m_a<<endl;//û�ر�˵���������� 
	cout<<x.bass::m_a<<endl;//˵����bass�������������ʸ��� 
	
	x.fun();
	x.bass::fun();
	x.bass::fun(10); 
	
	cout<<son::m_a<<endl;
	cout<<bass::m_a<<endl; 
	
}

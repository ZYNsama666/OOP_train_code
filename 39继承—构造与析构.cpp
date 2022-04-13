#include<iostream>
using namespace std;

class father{
	public:
		father(){
			cout<<"这是父类的构造函数"<<endl; 
		} 
		~father(){
			cout<<"这是父类的析构函数"<<endl; 
		}
}; 
class child:public father{
	public:
		child(){
			cout<<"这是子类的构造函数"<<endl; 
		} 
		~child(){
			cout<<"这是子类的析构函数"<<endl; 
		}
		
}; 

int main()
{
	//father a;
	child b; 
	//父构造-子构造-子析构-父析构 
}

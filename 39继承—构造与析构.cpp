#include<iostream>
using namespace std;

class father{
	public:
		father(){
			cout<<"���Ǹ���Ĺ��캯��"<<endl; 
		} 
		~father(){
			cout<<"���Ǹ������������"<<endl; 
		}
}; 
class child:public father{
	public:
		child(){
			cout<<"��������Ĺ��캯��"<<endl; 
		} 
		~child(){
			cout<<"�����������������"<<endl; 
		}
		
}; 

int main()
{
	//father a;
	child b; 
	//������-�ӹ���-������-������ 
}

#include<iostream>
using namespace std;

class father{
	public:
		int a;
	private:
		int b;
	protected:
		int c;
}; 
class childG:public father{
	public:
		int s;
		
}; 
class childS:private father{
	public:
		int s;
		
}; 
class childB:protected father{
	public:
		int s;
}; 

int main()
{
	father a;
	childG c1;
	childS c2;
	childB c3;
	cout<<"public�̳еĴ�С"<<sizeof(c1)<<endl; 
	cout<<"protected�̳еĴ�С"<<sizeof(c3)<<endl; 
	cout<<"provite�̳еĴ�С"<<sizeof(c2)<<endl; 
}

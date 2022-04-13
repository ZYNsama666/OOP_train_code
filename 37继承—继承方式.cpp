#include<iostream>
using namespace std;

class father{
	public:
		int a;
		int funG(){
			cout<<"这是public"<<endl;
		}
	private:
		int b;
		int funS(){
			cout<<"这是private"<<endl;
		}
	protected:
		int c;
		int funB(){
			cout<<"这是protected"<<endl;
		}
}; 
class childG:public father{
	public:
		int fun(){
			a=10;
			//b=10;
			c=10;
		}
		
}; 
class childS:private father{
	public:
		int fun(){
			a=10;
			//b=10;
			c=10;
		}
		
}; 
class childB:protected father{
	public:
		int fun(){
			a=10;
			//b=10;
			c=10;
		}
}; 

int main()
{
	father a;
	childG c1;
	childS c2;
	childB c3;
	c1.funG();
	//c1.funS();
	//c1.funB();
	
	//c2.funG();
	//c2.funS();
	//c2.funB(); 
	
	//c3.funG();
	//c3.funS();
	//c3.funB(); 
	
}

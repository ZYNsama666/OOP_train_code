#include<iostream>
using namespace std;
class bass1{
	public:
		int m_a1;
		bass1(){
			m_a1=1;
		}
	private:
		int m_b1;
	protected:
		int m_c1;
}; 
class bass2{
	public:
		int m_a2;
		bass2(){
			m_a2=2;
		}
	private:
		int m_b2;
	protected:
		int m_c2;
}; 
//记得每一个父类都要写一下继承方式，不写默认private 
class son:public bass1,public bass2{
	public:
		int show(){
			cout<<m_a1<<endl;
			cout<<m_a2<<endl;
		}
};
int main(){
	son s;
	s.show();
	s.
} 

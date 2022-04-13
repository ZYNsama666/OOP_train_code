#include<iostream>
using namespace std;
class grandfather{
public:
	int m_age;
}; 
class bass1:virtual public grandfather{
public:
	
}; 
class bass2:virtual public grandfather{
public:
	
};
class son:public bass1,public bass2{
public:
	void show(){
		bass1::m_age=77;
		bass2::m_age=66;
		cout<<bass1::m_age<<endl;
		cout<<bass2::m_age<<endl;
	}
};
int main(){
	grandfather g;
	g.m_age=100;
	son a;
	a.show();
} 

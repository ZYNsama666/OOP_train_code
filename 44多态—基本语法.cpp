#include<iostream>
using namespace std;
class animal{
public:
	virtual void speak(){//�麯�� 
		cout<<"animal speak"<<endl;
	} 
}; 
class cat:public animal{
public:
	void speak(){//������Ҫ��д������麯��������д�������أ� 
		cout<<"cat speak"<<endl;
	}
}; 
void letspeak(animal& a){
	a.speak();
}

int main(){
	cat c;
	letspeak(c);
} 

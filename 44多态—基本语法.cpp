#include<iostream>
using namespace std;
class animal{
public:
	virtual void speak(){//虚函数 
		cout<<"animal speak"<<endl;
	} 
}; 
class cat:public animal{
public:
	void speak(){//子类需要重写父类的虚函数（是重写不是重载） 
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

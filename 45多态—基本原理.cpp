#include<iostream>
using namespace std;
class animal{
public:
	virtual void speak(){
		cout<<"animal speak"<<endl;
	} 
};

class cat:public animal{
public:
	void speak(){
		cout<<"cat speak"<<endl;
	}
};
void letspeak(animal& a){
	a.speak();
}

int main(){
	cout<<"sizeof animal = "<<sizeof(animal)<<endl; 
	cout<<"sizeof cat = "<<sizeof(cat)<<endl; 
}

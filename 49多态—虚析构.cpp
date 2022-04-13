#include<iostream>
#include<string>
using namespace std;
class animal{
public:
	animal(){
		cout<<"animal 构造"<<endl;
	} 
	//此处是虚析构，若不加，只走animal的析构，不走cat的虚构，就删不了_name 
	virtual ~animal(){
		cout<<"animal 析构"<<endl;
	}
	virtual void speak(){//虚函数 
		cout<<"animal speak"<<endl;
	}
}; 
class cat:public animal{
public:
	string *_name;
	cat(string name){
		_name = new string(name);
		cout<<"cat 构造"<<endl;
	}
	~cat(){
		if(_name != NULL){
			delete _name; 
			_name=NULL;
		}
		cout<<"cat 析构"<<endl;
	}
	void speak(){//子类需要重写父类的虚函数（是重写不是重载） 
		cout<<*_name<<" cat speak"<<endl;
	}
}; 
void letspeak(animal& a){
	a.speak();
}

int main(){
	animal* a=new cat("Tom");
	a->speak();
	delete a;
}

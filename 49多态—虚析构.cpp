#include<iostream>
#include<string>
using namespace std;
class animal{
public:
	animal(){
		cout<<"animal ����"<<endl;
	} 
	//�˴����������������ӣ�ֻ��animal������������cat���鹹����ɾ����_name 
	virtual ~animal(){
		cout<<"animal ����"<<endl;
	}
	virtual void speak(){//�麯�� 
		cout<<"animal speak"<<endl;
	}
}; 
class cat:public animal{
public:
	string *_name;
	cat(string name){
		_name = new string(name);
		cout<<"cat ����"<<endl;
	}
	~cat(){
		if(_name != NULL){
			delete _name; 
			_name=NULL;
		}
		cout<<"cat ����"<<endl;
	}
	void speak(){//������Ҫ��д������麯��������д�������أ� 
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

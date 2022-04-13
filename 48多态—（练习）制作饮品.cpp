#include<iostream>
using namespace std;
class makedrink{
public:
	void boil(){
		cout<<"煮沸开水"<<endl;
	}
	virtual void make() = 0;
	void pour(){
		cout<<"倒入杯中"<<endl;
	}
	virtual void putsomething() = 0;
	void dowork(){
		boil();
		make();
		pour();
		putsomething();
	}
};

class maketea:public makedrink{
public:
	void make(){
		cout<<"加入茶叶"<<endl;
	}
	void putsomething(){
		cout<<"加入枸杞"<<endl;
	}
};
class makecoffee:public makedrink{
public:
	void make(){
		cout<<"加入咖啡"<<endl;
	}
	void putsomething(){
		cout<<"加入牛奶"<<endl;
	}
};
int main()
{
	makedrink*a=new maketea;
	a->dowork();
	delete a;
	cout<<"------------"<<endl;
	makedrink*b=new makecoffee;
	b->dowork();
	delete b;
}

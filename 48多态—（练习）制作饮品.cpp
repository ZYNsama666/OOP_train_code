#include<iostream>
using namespace std;
class makedrink{
public:
	void boil(){
		cout<<"��п�ˮ"<<endl;
	}
	virtual void make() = 0;
	void pour(){
		cout<<"���뱭��"<<endl;
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
		cout<<"�����Ҷ"<<endl;
	}
	void putsomething(){
		cout<<"�������"<<endl;
	}
};
class makecoffee:public makedrink{
public:
	void make(){
		cout<<"���뿧��"<<endl;
	}
	void putsomething(){
		cout<<"����ţ��"<<endl;
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

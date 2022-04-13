#include<iostream>
using namespace std;
class bass{
public:
	virtual void test() = 0;
};

class son:public bass{
	void test(){
		cout<<"this is a test"<<endl;
	}
};
int main()
{
	bass*a=new son;
	a->test();
}

#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;

class student
{
	
	public:
		void setname(string n)
		{
			name=n;
		}
		string getname()
		{
			return name;
		}
		int getage()
		{
			age=19; 
			return age;
		}
		void setlover(string l)
		{
			lover=l;
		}
	
	private:
		string name;// 可读可写 
		int age;// 只读 
		string lover;// 只写 
		
		
		
};

int main()
{
	student s1;
	s1.setname("张三");
	s1.setlover("李四");
	cout<<s1.getname()<<endl;
	cout<<s1.getage()<<endl;
} 

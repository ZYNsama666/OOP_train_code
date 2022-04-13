#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;

class student
{
	
	public:
		int num;
		string name;
		void print()
		{
			cout<<num<<endl<<name<<endl; 
		}
		void setname(string n)
		{
			name=n;
		}
		void setid(int n)
		{
			num=n;
		}
	
};

int main()
{
	student s1;
	s1.setname("张三");
	cout<<s1.name<<endl;
	student s2;
	s2.setid(1);
	s2.setname("李四");
	cout<<s2.name<<endl<<s2.num<<endl;
	
	
	
} 

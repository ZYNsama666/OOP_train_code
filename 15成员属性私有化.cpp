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
		string name;// �ɶ���д 
		int age;// ֻ�� 
		string lover;// ֻд 
		
		
		
};

int main()
{
	student s1;
	s1.setname("����");
	s1.setlover("����");
	cout<<s1.getname()<<endl;
	cout<<s1.getage()<<endl;
} 

#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;

class student
{
	
	public:
		string name;
	protected:
		string car;
	private:
		int id;
	public:
		void fun()
		{
			name="ÕÅÈı";
			car="±¦Âí" ;
			id=1234;
		}
};

int main()
{
	student s1;
	s1.fun();
	cout<<s1.name<<endl;
} 

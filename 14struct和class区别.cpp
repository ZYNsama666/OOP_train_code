#include<iostream>
#include<string>
using namespace std;
const double pi = 3.14;
//classÄ¬ÈÏprivate
//structÄ¬ÈÏpublic 
class c_student
{
	public:
		string c_name;
};

struct s_student
{
	string s_name;
};

int main()
{
	c_student s1;
	s_student s2;
	s1.c_name="zs";
	s2.s_name="ls";
} 

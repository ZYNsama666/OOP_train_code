#include<iostream>
using namespace std;
class person 
{
	public:
		int age;
		//���캯�� 
		person()
		{
			cout<<"���캯��test"<<endl;
		}
		person(int a)
		{
			age=a;
			cout<<"�вι��캯��test"<<endl;
		}
		//�������캯��
		person(const person &p)
		{
			age=p.age;
			cout<<"�������캯��test"<<endl;
		}
		~person()
		{
			cout<<"��������test"<<endl;
		}
};

void test()
{
	//Ĭ�Ϲ��캯���ĵ��� 
	person p1;
	person p2(10); 
	person p3(p2); 
	
	//��ʾ�� 
	person p4=person(10);
	person p5=person(p4);
	
	//����person(10)��һ��ļ�Ϊ�������󴴽��������̾�û�ˣ�ֱ������
	person(10);
	cout<<"����"<<endl; 
	
	//��ʽת����
	 
	
	
}

int main()
{
	test();
	
}

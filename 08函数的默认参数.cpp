#include<iostream> 
using namespace std;
//��a����Ĭ��ֵ��bc�����У��м䲻�ܿ�
//int a=10,int b,int c=20�ǲ��Ϸ��� 
int fun1(int a,int b,int c=20)
{
	return a+b+c;
}
int fun2(int a,int b=10,int c=20); 
int fun2(int a,int b,int c)
{
	return a+b+c;
}


int main() 
{
	int sum1=fun1(1,1);
	cout<<sum1<<endl;
	int sum2=fun2(1);
	cout<<sum2<<endl;
}

#include<iostream>
#include<string>
using namespace std;
class cube
{
	private:
		int m_l;
		int m_h;
		int m_w;
	public:
		void setl(int l)
		{
			m_l=l;
		}
		void setw(int w)
		{
			m_w=w;
		}
		void seth(int h)
		{
			m_h=h;
		}
		int getl()
		{
			return m_l;
		}
		int getw()
		{
			return m_w;
		}
		int geth()
		{
			return m_h;
		}
		int mathv()
		{
			int v=m_l*m_w*m_h;
			return v;
		}
		int maths()
		{
			int s=m_l*m_w+m_l*m_h+m_h*m_w;
			return s;
		}
		bool fun2(cube c2)
		{
		    if((m_h==c2.geth())&&(m_l==c2.getl())&&(m_w==c2.getw()))
		    return true;
		}
	
	
};

bool fun(cube c1,cube c2)
{
    if((c1.geth()==c2.geth())&&(c1.getl()==c2.getl())&&(c1.getw()==c2.getw()))
    return true;
}

int main()
{
	cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);
	cube c2;
	c2.setl(10);
	c2.setw(10);
	c2.seth(10);
	//利用全局函数 
	int b=fun(c1,c2);
	if(b)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	//利用类内函数 
	int b2=c1.fun2(c2);
	if(b2)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	//cout<<"体积:"<<c1.mathv()<<endl;
	//cout<<"表面积:"<<c1.maths()<<endl;
} 

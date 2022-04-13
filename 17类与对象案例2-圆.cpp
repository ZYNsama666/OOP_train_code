#include<iostream>
using namespace std;


class point
{ 
	public:
		void setx(int x)
		{
			p_x=x;
		}
		void sety(int y)
		{
			p_y=y;
		}
		int getx()
		{
			return p_x;
		}
		int gety()
		{
			return p_y;
		}
	private:
		int p_x;
		int p_y;
};
class circle
{
	public:
		void setr(int R)
		{
			r=R;
		}
		void setc(point c)
		{
			center=c;
		}
		int getr()
		{
			return r;
		}
		point getc()
		{
			return center;
		}
	private:
		point center;
		int r;
	
	
};

void math(circle &c,point &p)
{
	int l=((c.getc().getx())-p.getx())*((c.getc().getx())-p.getx())+((c.getc().gety())-p.gety())*((c.getc().gety())-p.gety());
	int r2=c.getr()*c.getr();
	if(r2>l)cout<<"在圆内"<<endl;
	else if(r2<l) cout<<"在圆外"<<endl;
	else cout<<"在圆上"<<endl;
}
int main() 
{
	circle c1;
	c1.setr(10);
	point p1,p2;
	p1.setx(0);
	p1.sety(0);
	p2.setx(11);
	p2.sety(0);
	c1.setc(p1);
	math(c1,p2);
	
	
}

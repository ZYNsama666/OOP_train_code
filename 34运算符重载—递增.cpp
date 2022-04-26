#include <iostream>
using namespace std;
class fun
{
    friend ostream &operator<<(ostream &cout,const fun& f);

public:
    fun() : m_a(0) {}
    fun &operator++()
    {
        ++m_a;
        return *this;
    }
    const fun operator++(int)
    {
        fun temp = *this;
        ++m_a;
        return temp;
    }

private:
    int m_a;
};

ostream &operator<<(ostream &ost,const fun& f)
{
    ost << f.m_a << endl;
    return ost;
}

void test01()
{
    fun f;
    cout << ++(++f);
}
void test02()
{
    fun f;
    cout << f++;
    cout << f;
}
int main()
{
    test02();
}

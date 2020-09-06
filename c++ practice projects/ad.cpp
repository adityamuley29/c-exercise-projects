#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:

    void set_data(int x, int y)
    {
        a=x;
        b=y;

    }
    void show_data()
    {
        cout<<"\na:"<<a<<"\nb:"<<b<<endl;

    }
    complex operator +(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(4,5);
    c3=c1+c2;
    c3.show_data();
    return 0;
}

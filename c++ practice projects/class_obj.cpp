#include<iostream>
using namespace std;

class complax
{
private :
    int a,b;

public:
    void set_data(int x , int y)
    {
        a=x; b=y;
    }
    void show_data()
    {
        cout<<"\n"<<a<<"\n "<<b;

    }
};

int main()
{
    complax c1;
    c1.set_data(3,4);
    c1.show_data();
}

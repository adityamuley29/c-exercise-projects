#include<iostream>
using namespace std;


class employe
{
private:
    int a,b,c;
public:
    int d,e;
    void set_data(int a1 ,int b1 , int c1);
    void get_data()
    {
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
        cout<<"the value of c "<<c<<endl;
        cout<<"the value of d "<<d<<endl;
        cout<<"the value of  e "<<e<<endl;
    }


};
void employe :: set_data(int a1 ,int b1 ,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}


int main()
{
    employe aditya;
    aditya.d = 19;
    aditya.e = 2001;

    aditya.set_data(29,1,01);
    aditya.get_data();

    return 0;
}

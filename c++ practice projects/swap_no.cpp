#include<iostream>
using namespace std;

void after_swap(int &a , int &b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"After Swapping of two no's :- a="<<a<<"b="<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two no :- "<<endl;
    cin>>a>>b;

    cout<<"No's before swapping :- a="<<a<<","<<"b="<<b<<endl;
    after_swap(a,b);

    return 0;
}

#include <iostream>

using namespace std;

int area(int , int);
float area(int);


int main()
{
    int r;
    cout << "Enter Radius of Circle ?" << endl;
    cin>>r;
    float A=area(r);
    cout<<"Area of Circle is :-"<<A<<endl;

    int l,b,a;
    cout<<"Enter Length And Breadth of Rectangle ?"<<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is :- "<<a<<endl;

    return 0;
}

float area(int R)
{

    return(3.14*R*R);
}

int area(int L ,int B)
{

    return(L*B);
}

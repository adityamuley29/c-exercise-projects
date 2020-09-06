#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(j>n-1-i && j<n-1+i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }


        }



        cout<<"\n";
    }
}

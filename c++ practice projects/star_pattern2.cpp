#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter The Value of n"<<endl;
    cin>>n;

    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
                 //only for number pattern replace "*" with i
                cout<<"*";


            }
            else
            {
                cout<<"";
            }

        }
        cout<<endl;

    }
}

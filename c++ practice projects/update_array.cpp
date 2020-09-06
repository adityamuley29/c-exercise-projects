#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n,i;
    cout<<"Enter a length of array"<<endl;
    cin>>n;
    cout<<"Enter Element of Array"<<endl;
    for(i=0 ;i<n ;i++)
    {
        cin>>a[i];
    }
    cout<<"The Element in the Array are :-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<endl;

    }

    // updation of element

    int position,number ;
    cout<<"Enter the position for which you want to perform the delete opration "<<endl;
    cin>>position;

    cout<<"Enter the number you want to update in the position "<<endl;
    cin>>number;

    a[position]=number;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }


    return 0;
}

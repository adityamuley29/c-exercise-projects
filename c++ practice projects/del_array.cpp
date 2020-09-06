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

    // deletion of element

    cout<<"Enter the position for which you want to perform the delete opration "<<endl;

    int position ;
    cin>>position;

    for(i=position ; i<n ; i++)
    {
        a[i]=a[i+1];
    }
    cout<<"The updated array is :-"<<endl;
    for (i=0 ; i<n-1; i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}

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

    //insertion of number

    int position ,number;

    cout<<"Enter the index position at which you want to enter the number"<<endl;
    cin>>position;
    cout<<"Enter The Number"<<endl;
    cin>>number;

    for(i=n-1 ;i>=position ; i--)
    {
        a[i+1]=a[i];
    }
    a[position]=number;

    cout<<"The Updated Array is :-"<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<" \n "<<a[i];
    }


    // deletion of element




    return 0;
}

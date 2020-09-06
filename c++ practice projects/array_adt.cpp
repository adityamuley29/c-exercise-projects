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
    int per;
    cout<<"Choose the following number to Perform the operation "<<endl;
    cout<<" 1. Insertion of element.\n 2. Deletion of element.\n 3. Updation of element"<<endl;
    cin>>per;

    if(per==1)
    {
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
        cout<<"\nThank You for Using Array As ADT ."<<endl;

    }
    else if(per==2)
    {
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
        cout<<"\nThank You for Using Array As ADT ."<<endl;
    }
    else if(per==3)
    {
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
        cout<<"\nThank You for Using Array As ADT ."<<endl;
    }
    else
    {
        cout<<"\nPlease Enter correct number to perform the operation ."<<endl;

    }



    return 0;
}

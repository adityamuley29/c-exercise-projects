#include<iostream>
using namespace std;


int main()
{
    int m[3][3],i,j;
    cout<<"Enter elements of array "<<endl;
    //acceptig elements form user
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            cin>>m[i][j];
        }
    }

    //displaying elements on screen
    cout<<"The Elements in the array are :-"<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            cout<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

#include<iostream>
using namespace std;

class bank
{
public:

    long int acc_no;
    float bal;
    char name[50],add[100];
    long int mo_no;


    void getdata();
    void checkdata();
    void display();

};
void bank::getdata()
{
    cout<<"Enter name of Clint "<<endl;
    cin>>name;
    cout<<"Enter Adress of Clint "<<endl;
    cin>>add;
    cout<<"Enter Mobile no."<<endl;
    cin>>mo_no;
    cout<<"Enter Account no."<<endl;
    cin>>acc_no;
    cout<<"Enter balence "<<endl;
    cin>>bal;

}

void bank::display()
{
    cout<<"Clint information is :- "<<endl;
    cout<<"Name :- "<<name<<endl;
    cout<<"Adress :- "<<add<<endl;
    cout<<"Mobile no. :- "<<mo_no<<endl;
    cout<<"Account no. :- "<<acc_no<<endl;
    cout<<"Account Balance :- "<<bal<<endl;
}




int main()
{
    int i,count=0;
    long int acc;
    bank aditya[2];
    for(i=0;i<2;i++)
    {

        aditya[i].getdata();
    }
    cout<<"Enter Account no. of :-"<<endl;
    cin>>acc;

    for(i=0;i<2;i++){
        if(aditya[i].acc_no == acc)
        {
          aditya[i].display();
          break;
        }
        count++;


    }
    if(count==2)
    {

        cout<<"Sorry...details not found"<<endl;

    }

    return 0;
}

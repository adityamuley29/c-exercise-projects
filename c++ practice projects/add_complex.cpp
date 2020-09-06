#include<iostream.h>

class arith
{
private: int a,b,r;
	 char op;
public:	void getdata();
	void operate();
	void display();
};
void arith::getdata()
	{
		cout<<"Enter Values of a & b"<<endl;
		cin>>a>>b;
	}
void arith::operate()
	{
	do
	{
	cout<<"Enter your choice + or - or * or / or Exit:"<<endl;
	cin>>op;
	switch(op)
		{
		  case '+':r=a+b;
			   display();
			   break;
		  case '-':r=a-b;
			   display();
			   break;
		  case '*':r=a*b;
			   display();
			   break;
		  case '/':r=a/b;
			   display();
			   break;

		  default :
			   cout<<"Wrong Choice"<<endl;
			   break;
		  }
       }while(op!='x');
     }
void arith::display()
{
 cout<<"Result ="<<r<<endl;
 }
int main()
{

  arith ar;
  ar.getdata();
  ar.operate();

  return 0;
}















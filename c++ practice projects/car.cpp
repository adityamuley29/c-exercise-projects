#include<iostream>
using namespace std;

class car
{
  public:
      string car_name;
      string car_model;
      int car_year;
};

int main()
{
    car car1;
    car1.car_name = "Baleno";
    car1.car_model = "Zeta";
    car1.car_year = 2020;

    car car2;
    car2.car_name = "venue";
    car2.car_model = "Sx";
    car2.car_year = 2019;

    cout<<"Your Car name is "<<car1.car_name<<" and it's model name is "<<car1.car_model<<" you have purched on "<<car1.car_year<<endl;
    cout<<"Your Car name is "<<car2.car_name<<" and it's model name is "<<car2.car_model<<" you have purched on "<<car2.car_year<<endl;


    return 0;
}

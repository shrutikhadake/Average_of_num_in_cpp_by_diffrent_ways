#include<iostream>
using namespace std;
class base
{
     public:
     int num,a;
     double sum=0,avg=0;
     public:
     virtual void get_data()
     {
         cout<<"Enter the elements"<<endl;
         cin>>num;
         cout<<"Enter numbers"<<endl;
         for(int i=0;i<num;i++)
         {
             cin>>a;
             sum=sum+a;
         }
         avg=sum/num;
         cout<<"Average is:"<<avg<<endl;
     }
};
class derived:public base
{
    public:
    void get_data()
    {
         cout<<"Enter the elements"<<endl;
         cin>>num;
         cout<<"Enter numbers"<<endl;
         for(int i=0;i<num;i++)
         {
             cin>>a;
             sum=sum+a;
         }
          avg=sum/num;
         cout<<"Average is:"<<avg<<endl;
     }
};
int main()
{
    base b;
    b.get_data();
    derived d;
    d.get_data();
}

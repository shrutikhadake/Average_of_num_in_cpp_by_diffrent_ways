//WAP to find the aveage of 5 numbers by using Inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    int num,a;
    double sum=0,avg=0;
    public:
    void get_sum()
    {
        cout<<"Enter the number of elements:"<<endl;
        cin>>num;
        cout<<"Enter the elements:"<<endl;
        for(int i=0;i<num;i++)
        {
            cin>>a;
            sum=sum+a;
            
        }
        avg=sum/num;
    }
};
class B:public A
{
    public:
   void  show_avg()
     {
        cout<<"The sum is :"<<sum<<endl;
        cout<<"The average is:"<<avg<<endl;
     }
};
int main()
{
    A a1;
    B b1;
    b1.get_sum();
    b1.show_avg();
}

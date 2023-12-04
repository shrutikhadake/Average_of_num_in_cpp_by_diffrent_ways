//WAP to find the aveage of 5 numbers by using Inheritance
#include<iostream>
using namespace std;
class A
{
   public:
    int num,a;
public:
void show()
{
    cout<<"Enter the number of elelments"<<endl;
    cin>>num;
    cout<<"enter the numbers"<<endl;
     cin>>a;  
    for(int i=0;i<=num;i++)
     {
       //cout<<"enter the numbers"<<endl;
       //cin>>a;  
     }
}
};
class B:public A
{
   public:
    double sum=0,avg=0;
public: 
    void sum_of()
   {
    sum=sum+a;
    cout<<"Average is:"<<sum<<endl;
   }
};
int main()
{
   B obj;
    obj.show();
    obj.sum_of();
    
}

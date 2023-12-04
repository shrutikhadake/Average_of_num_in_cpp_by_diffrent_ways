#include<iostream>
using namespace std;
class myclass
{
  public:
  int num,a;
  double avg=0,sum=0;
  public:
  void get_num()
  {
      cout<<"Enter the number of elements"<<endl;
      cin>>num;
      for(int i=0;i<=num;i++)
      {}
      cout<<"Enter the numbers:"<<endl;
      cin>>a;
      sum=sum+a;
      avg=sum/num;
      cout<<"Average is:"<<avg<<endl;
       try
      {
          if(sum<=0)
          {
              throw"Average must be greater than zero";
          }
      }
      catch(const char*msg)
      {
          cerr<<msg<<endl;
      }
  }
};
int main()
{
    myclass m1;
    m1.get_num();
    //m1.check_num();
}

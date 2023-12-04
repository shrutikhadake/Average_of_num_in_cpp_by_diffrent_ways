#include<iostream>
using namespace std;
class myclass
{
  private:    
  int num,a;
  double sum=0,avg=0;
  public:
  void show()
  {
  cout<<"Enter the no of elements:"<<endl;
  cin>>num;
  cout<<"Enter the numbers"<<endl;
  
  for(int i=0;i<num;i++)
  {
     cin>>a; 
     sum=sum+a;
      
  }
  }
  friend class frnd;
};
class frnd
{
    public:
    void sum_num(myclass& m_obj)
   {
     //  n_obj.sum=n_obj.sum+n_obj.avg;
       m_obj.avg=m_obj.sum/m_obj.num;
       cout<<"Average is:"<<m_obj.avg<<endl;
       
   }
   
};
int main()
{
    myclass m_obj;
    frnd f;
    m_obj.show();
    f.sum_num(m_obj);
}

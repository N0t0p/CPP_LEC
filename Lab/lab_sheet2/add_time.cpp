#include<iostream>
using namespace std;
class Time
{  
  public:
  int hour;
  int minute;
  int second;
  void gettime()
  {   
      cout<<"Enter the time"<<endl;
      cout<<"Hour :"<<endl;
      cin>>hour;
      cout<<"Minute :"<<endl;
      cin>>minute;
      cout<< "Second :"<<endl;
      cin>>second;
      
  }
  void sum(Time time1,Time time2)
  {
   second = time1.second + time2.second;
   minute = time1.minute + time2.minute + (second/60);
   hour = time1.hour + time2.hour + (minute/60);
   minute = minute%60;
   second = second%60;
  
   if (hour>12)
   {
     hour = hour - 12 ;
   }
   
  }
  void display()
  {
      cout<<"The time is "<<hour<<"hr-"<<minute<<"min-"<<second<<"sec"<<endl;
  }
};
int main()
{
    Time time1,time2,result;
    time1.gettime();
    time2.gettime();
    result.sum(time1,time2);
    result.display();
}
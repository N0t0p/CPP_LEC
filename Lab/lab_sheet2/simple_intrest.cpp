#include <iostream>
using namespace std;
float intr(float principle ,int time ,float rate = 15)
{
    return ((principle *time *rate )/100) ;
}
int main()
{
    float principle,rate,interest;
    int time ;
    
    cout <<"enter the principle :"<<endl;
    cin>>principle;
    cout<<"Enter the time in year  :"<<endl;
    cin>>time ;
    cout<<"Enter the rate :"<<endl;
    cin>>rate;
    if (rate>0)
    {
        interest = intr(principle,time,rate);
    }
    else
    {
      interest = intr(principle,time);
    }
    cout<<"The interest of the sum is Rs "<<interest<<endl;

    
}

#include<iostream>
using namespace std;
int main()
{
    int *pointint;
    float *pointfloat;
     
    
    pointint = new int ;
    pointfloat = new float ;
  
  
    cout<<"Address assigned to pointint is " <<pointint<<endl;
    cout<<"Address assigned to pointfloat is " <<pointfloat<<endl;
   
   
    *pointint = 45;
    *pointfloat = 46.5;
    
    
    cout<<"Address assigned to pointint is " <<*pointint<<endl;
    cout<<"Address assigned to pointfloat is " <<*pointfloat<<endl;
    
    
    delete pointint;
    delete pointfloat;


}
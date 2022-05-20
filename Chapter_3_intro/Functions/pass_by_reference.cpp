#include <iostream>
using namespace std;
 void normal (int a){
     a = 20 ;
     cout<<"Inside normal a is "<<a <<endl;
    
 }
 void refer (int &b){
      b = 15;
     cout<<"Inside refer b is "<<b <<endl;
    
 }
int main (){
int a=10;
int b=30;
normal (a);
refer (b);
cout<<"Inside main a is "<<a <<endl;
cout<<"Inside main b is "<<b <<endl;

}
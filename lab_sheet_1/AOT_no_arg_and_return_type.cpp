#include <iostream>
#include <cmath>
using namespace std;

float calculateArea (){
     float a,b,c,s,area;
    
     cout<<"Enter the first side a of the triangle "<<endl;
     cin>>a;
     cout<<"Enter the second side b of the triangle "<<endl;
     cin>>b;
     cout<<"Enter the third side c of the triangle" <<endl;
     cin>>c;
    
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;  
}
 int main (){
     float area ;
  area = calculateArea();
  cout<<"The area of triangle is"<<area;
 
 }
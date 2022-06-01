#include <iostream>
#include <cmath>
using namespace std;

void calculateArea (){
     float a,b,c,s,area;
    
     cout<<"Enter the first side a of the triangle "<<endl;
     cin>>a;
     cout<<"Enter the second side b of the triangle "<<endl;
     cin>>b;
     cout<<"Enter the third side c of the triangle" <<endl;
     cin>>c;
    
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area;   
}
 int main (){
    calculateArea();
 }
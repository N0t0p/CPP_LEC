#include <iostream>
#include <cmath>
using namespace std;

void calculateArea (float a,float b,float c){
    float s , area ;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area;   
}
 int main (){
     float a,b,c;
     cout<<"Enter the first side a of the triangle "<<endl;
     cin>>a;
     cout<<"Enter the second side b of the triangle "<<endl;
     cin>>b;
     cout<<"Enter the third side c of the triangle" <<endl;
     cin>>c;
     calculateArea(a,b,c);
 }
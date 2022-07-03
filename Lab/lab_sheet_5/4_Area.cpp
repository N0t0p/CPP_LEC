#include<iostream>
#include<math.h>
using namespace std ;

void calculateArea (float a,float b,float c){
    float s , area ;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area<<endl;   
}
void calculateArea (float l)
{
    cout<<"The area of square is "<<l*l<<endl;
}
void calculateArea (float l , float b)
{
    cout<<"The area of rectangle is "<<l*b<<endl;
}
int main ()
{
    calculateArea(5,6,7);
    calculateArea(5,6);
    calculateArea(5);
}

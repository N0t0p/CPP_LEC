#include<iostream>
#include<math.h>
using namespace std ;

void calculateArea (float a,float b,float c){
    float s , area ;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area<<endl;   
}
void calculateArea (float length)
{
    cout<<"The area of square is "<<length*length<<endl;
}
void calculateArea (float length , float breadth)
{
    cout<<"The area of rectangle is "<<length*breadth<<endl;
}
int main ()
{
    calculateArea(5,6,7);
    calculateArea(5,6);
    calculateArea(5);
}

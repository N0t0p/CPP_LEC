#include <iostream>
#include <cmath>
using namespace std;  

// Declaring a function with argument and return type to calculate area 
float calculateArea(float a,float b,float c){
float s ,area ;
 s = (a+b+c)/2;
 area = sqrt(s*(s-a)*(s-b)*(s-c));
 return area;
}

int main()
{
    float a , b ,c ,area ;
    cout<<"Enter the value of first side a of the triangle ;"<<endl;
    cin>>a;
    cout<<"Enter the value of second side b of the triangle ;"<<endl;
    cin>>b;
    cout<<"Enter the value of thord side c of the triangle ;"<<endl;
    cin>>c;
    // calling function and assigning value to area
    area = calculateArea(a ,b, c) ;
    cout<<"The area of the triangle is "<<area<<endl;
    
return 0;
}
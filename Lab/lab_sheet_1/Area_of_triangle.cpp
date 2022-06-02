#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a , b ,c ,s ,area ;
    cout<<"Enter the value of first side a of the triangle ;"<<endl;
    cin>>a;
    cout<<"Enter the value of second side b of the triangle ;"<<endl;
    cin>>b;
    cout<<"Enter the value of third side c of the triangle ;"<<endl;
    cin>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is "<<area<<endl;
return 0;
}

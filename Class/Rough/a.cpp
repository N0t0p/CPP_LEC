#include<iostream>
using namespace std;
int main()
{
    int a = 6;
    int b = 7;
    float c ;
    c = a/b;
    cout<<c;
    c = static_cast<float>(a)/b;
    cout<<c;

}
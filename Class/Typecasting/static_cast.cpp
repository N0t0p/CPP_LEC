#include <iostream>
using namespace std;
int main()
{
    int i;
    float f = 3.142f;
    char c = 'a';
    i = f;
    cout<<"value of float is : "<<f<<endl;
    cout<<"value of converted integer is : "<<i<<endl;

    i = static_cast<int>(f);
    cout <<"Value of integer is :"<<i<<endl;
    i = c;
    cout<<"value of converted char is : "<<i<<endl;

    i = static_cast<int>(c);
    cout <<"value of char is "<<i;

}
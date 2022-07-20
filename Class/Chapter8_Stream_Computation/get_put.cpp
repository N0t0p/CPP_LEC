#include <iostream>
using namespace std;
int main()
{
    char c ;
    char str[25];
    cout<<"Enter a character :";
    cin.get(c);
    cout<<"\n The entered character is ";
    cout.put(c);
    cout<<"Enter a string :";
    cin.get( str ,25);
    cout<<"\n The entered string is "<<str;
    return 0;
}
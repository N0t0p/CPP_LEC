#include<iostream>
using namespace std;
class Complex 
{
    public:
    float real;
    float imag;
    void getNumber()
    {
        cout<<"Enter the complex number "<<endl;
        cout<<"Real part :-";
        cin>>real;
        cout<<"Imaginary part :-";
        cin>>imag;
    }
    void displayResult(){
        cout<<"The sum is "<<real<<"+"<<imag<<"i"<<endl;
    }
};
Complex add(Complex num1,Complex num2)
{
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
int main()
{
    Complex num1,num2,sum;
    num1.getNumber();
    num2.getNumber();
    sum = add(num1,num2);
    sum.displayResult();
    }

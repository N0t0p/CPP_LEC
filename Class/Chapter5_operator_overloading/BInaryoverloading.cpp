#include <iostream> 
using namespace std;
class complex 
{
    private:
    float real,imag;
    public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    void getData(int x,int y)
    {
        real = x;
        imag = y;

    }
    void showData()
    {
        cout<<"The value is "<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator +(complex &obj)
    {   
        complex temp;
        cout<<"The value of temp is  "<<temp.real<<"+"<<temp.imag<<"i"<<endl;
        cout<<"The value is obj is  "<<obj.real<<"+"<<obj.imag<<"i"<<endl;
        cout<<"The value is c1 is  "<<real<<"+"<<imag<<"i"<<endl;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;

    }
};
int main()
{
    complex c1,c2,c3;
    c1.getData(12,23);
    c2.getData(13,45);
    c3 = c1 + c2;          
    c3.showData();
}
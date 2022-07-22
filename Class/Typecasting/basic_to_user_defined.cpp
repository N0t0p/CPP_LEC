#include <iostream>
using namespace std;
class Celsius {
    private :
    float temper;

    public:
    Celsius(){
        temper = 0;
    }
    Celsius(float ftmp){
        temper = (ftmp-32)*5/9;
    }
    void showData(){
        cout<<"Temperature is :"<<temper;
    }
};
int main()
{
    Celsius c;
    float ftmp;
    cout<<"Enter temperature in fahrenheit:"<<endl;
    cin>>ftmp;
    c = ftmp;
    c.showData();
}
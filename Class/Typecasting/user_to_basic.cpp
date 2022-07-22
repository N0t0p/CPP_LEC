#include <iostream>
using namespace std;
class Celsius {
    private :
    float temper;

    public:
    Celsius(){
        cout<<"Enter temperature in celcius:"<<endl;
        cin>>temper;
    }
    operator float (){
        float ftmp;
        ftmp = temper *9/5 + 32;
        return ftmp;
    }
    void showData(){
        cout<<"Temperature is :"<<temper;
    }
};
int main()
{
    Celsius c;
    float ftmp;
    
    ftmp = c;
    cout<<"Temperature is "<<ftmp;
}
#include<iostream>
using namespace std;
class OBJECT 
{
    public:
    OBJECT()
    {
      cout<<"creating an object"<<endl;
    }
    ~OBJECT()
    {
       cout<<"destroying an object"<<endl;
    }
};
int main()
{
    OBJECT();
}
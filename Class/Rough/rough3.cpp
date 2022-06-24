#include<iostream>
using namespace std;
class base 
{   
    public:
    int a;
    void getData()
    {
        cout<<"Enter the value:"<<endl;
        cin>>a;

    }
    void showData()
    {
        cout<<"The value of a is "<<a<<endl;
    }
    void SUM(base x ,base y)
    {
        
        a = x.a + y.a; 
        
    }
};
int main ()
{
  base obj1,obj2,obj3,obj4;
  obj1.getData();
  obj2.getData();
  obj3.SUM(obj1 , obj2);
  obj3.showData();


}
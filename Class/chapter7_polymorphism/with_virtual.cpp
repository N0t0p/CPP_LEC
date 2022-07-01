// when a function is made virtual it allows the program to decide at runtime which function to call based on the 
//    TYPE OF OBJECT POINTED BY THE POINTER rather than TYPE OF POINTER ITSELF
#include<iostream>
using namespace std;

class Shape 
{
    protected:
    int width , height;
    public :
    Shape (int a= 0 ,int  b=0 )
    {
      width = a;
      height = b ;
    }
    void virtual showData()
    {
        cout <<"The area is "<<endl;
    }
    
};
 
class  Rectangle : public Shape 
{
     protected:
    int width , height;
    public :
    Rectangle (int a ,int  b)
    {
      width = a;
      height = b ;
    }
    void virtual showData()
    {
        cout <<"The area of rectangle  is "<<width*height<<endl;

    }
};
class  Triangle : public Shape 
{
     protected:
    int width , height;
    public :
    Triangle (int a ,int  b)
    {
      width = a;
      height = b ;
    }
    void virtual showData()
    {
        cout <<"The area of triangle  is "<<(width*height)/2<<endl;

    }
};
int main ()
{
    Shape *s;
    Triangle obj1(12,12);
    Rectangle obj2(12,12);
    s = &obj1 ;
    s -> showData();
    s = &obj2;
    s -> showData();


}
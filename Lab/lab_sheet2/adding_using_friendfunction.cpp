#include<iostream>
using namespace std;
class floor2;
class floor1
{
    private:
    friend void sum(floor1,floor2);
    float length1;
    float breadth1;
    public:
    void getData()
    {   
        cout<<"For first floor"<<endl;
        cout<<"Enter the first value :- ";
        cin>>length1;
        cout<<"Enter the second value :-";
        cin>>breadth1;
    }
};
class floor2
{
     private :
    friend void sum(floor1,floor2);
    float length2;
    float breadth2;
    public:
    void getData2()
    {   
        cout<<"For second floor"<<endl;
        cout<<"Enter the first value :- ";
        cin>>length2;
        cout<<"Enter the second value :-";
        cin>>breadth2;
    }
};
void sum(floor1 obj1,floor2 obj2)
{
 cout<<"The sum of length of two floor is "<<obj1.length1 + obj2.length2<<endl;
 cout<<"The sum of breadth of two floor is "<<obj1.breadth1 + obj2.breadth2<<endl;
}
int main()
{
    floor1 obj1;
    floor2 obj2;
    obj1.getData();
    obj2.getData2();
    sum(obj1,obj2);
}

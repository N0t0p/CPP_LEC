#include<iostream>
using namespace std ;
class staff 
{   
    protected :
    int code ;
    char name [30] ;
    public :
    void getData()
    {
        cout <<"Enter the code of the staff :"<<endl;
        cin>>code;
        cout<<"Enter the name :";
        cin>>name;
    }
    void showData ()
    {   
        cout <<"Code :"<<code<<endl;
        cout <<"Name :"<<name<<endl;
    }
};
class Teacher : public staff 
{
    protected :
    char subject[20];
    char publication[20];
    public :
    void getData()
    {   
        cout<<"For Teacher"<<endl;
        staff::getData();
        cout<<"Enter the subject :"<<endl;
        cin>>subject;
        cout<<"Enter the publication of the book used:"<<endl;
        cin>>publication;
        
    }
    void showData ()
    {   
        cout<<"For Teacher"<<endl;
        staff::showData();
        cout<<"Subject :"<<subject<<endl;
        cout<<"Publication of the book used :"<<publication<<endl;

    }
};
class Officer : public staff 
{   
    protected:
    char grade[30] ;
    public:
    void getData()
    {   
        cout<<"For Officer"<<endl;
        staff::getData();
        cout<<"Enter the grade:"<<endl;
        cin>>grade;
    }
    void showData()
    {   
        cout<<"For Officer"<<endl;
        staff::showData();
        cout<<"The grade is "<<grade<<endl;
    }
};
class Typist : public staff 
{
    protected :
    int speed ;
    void getData ()
    {    
        staff::getData();
        cout<<"Enter the speed in wpm"<<endl;
        cin>>speed;
    }
    void showData ()
    {   
        staff::showData();
        cout<<"Typing speed in wpm"<<endl;
    }
};
class Casual : public Typist
{
    protected :
    float wages;
    public:
    void getData()
    {   
        cout<<"For Casual Typist"<<endl;
        Typist::getData();
        cout<<"Enter daily wages :"<<endl;
        cin>>wages;
    }
    void showData()
    {   
        cout<<"For Casual Typist"<<endl;
        Typist::showData();
        cout<<"Daily wages:"<<wages<<endl;
    }
};
class Regular : public Typist 
{
     protected :
    float wages ;
    public:
    void getData()
    {   
        cout<<"For Regular Typist"<<endl;
        Typist::getData();
        cout<<"Enter daily wages :"<<endl;
        cin>>wages;
    }
    void showData()
    {   
        cout<<"For Regular Typist"<<endl;
        Typist::showData();
        cout<<"wages:"<<wages<<endl;
    }
};
int main ()
{
    Teacher t1;
    Officer o1;
    Regular r1;
    Casual c1;
     t1.getData();
     o1.getData();
     r1.getData();
     c1.getData();
     t1.showData();
     o1.showData();
     r1.showData();
     c1.showData();


}
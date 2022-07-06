#include<iostream>
using namespace std;
class Media 
{
protected:
   char title [30],pub[30];
   public:
   virtual void readData()
   {
    cout<<"Enter title :";
    cin>>title;
    cout<<"Enter publication :";
    cin>>pub;
   }
   virtual void showData() = 0;

};
class Book : public Media
{
protected:
   int numpage ;
   public:
   void readData()
   {
    Media::readData();
    cout<<"Enter number of pages :";
    cin>>numpage;
   }
   void showData()
   {
    cout<<"----Data on book ----"<<endl;
    cout<<"Title of book :"<<title;
    cout<<"Publication of book :"<<pub<<endl;
    cout<<"Number of pages :"<<numpage<<endl;
   }
};
class DVD : public Media
{
protected:
   int dur ;
   public:
   void readData()
   {
    Media::readData();
    cout<<"Enter time duration of DVD :";
    cin>>dur;
   }
   void showData()
   {
    cout<<"----Data on DVD ----"<<endl;
    cout<<"Title of DVD :"<<title;
    cout<<"Publication of DVD :"<<pub<<endl;
    cout<<"Time duration of DVD :"<<dur<<endl;
   }
};
int main()
{
    Media *md;
    Book bk;
    md = &bk;
    cout<<"Enter data on Book"<<endl;
    md->readData();
    md->showData();
    
    
    DVD dv;
    md = &dv;
    cout<<"Enter data on DVD"<<endl;
    md->readData();
    md->showData();
}





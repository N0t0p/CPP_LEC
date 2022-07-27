#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int x;
    int y;
    public:
    fibonacci()
    {
        y=0;
        x=1;
    }
    void operator ++()
    {
        int temp;
        temp=y;//temp=1//temp=1
        y=x+y;//y=0+1//y=1+1
        x=temp;//x=1//x=1
    }
    void show()
    {
        cout<<y<<"\t";
    }
};
int main()
{
    fibonacci obj1;
    int n;
    cout<<"Enter the number of term in series:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        obj1.show();
        ++obj1;
    }

}
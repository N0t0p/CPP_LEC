#include<iostream>
using namespace std;
class Sample
{
private :
friend float mean(Sample);
float value1;
float value2;
public :
void getData()
{
    cout<<"Enter the first value :- ";
    cin>>value1;
    cout<<"Enter the second value :-";
    cin>>value2;
}
};
float mean(Sample m)
{
    return ((m.value1+m.value2)/2);
}
int main()
{   
    float meanvalue;
    Sample num;
    num.getData();
    meanvalue = mean(num);
    cout<<"The mean value is "<<meanvalue<<endl;
}
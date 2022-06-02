#include<iostream>
using namespace std;
class student {
    public :
    double marks;
    student (double m ){
        marks =m;
    }
}; 
void calculateAverage(student s1,student s2){
    double average;
    average = ( s1.marks + s2.marks )/2;
    cout <<"the average marks is "<<average ;
}

int main()
{
 student s1(50);
 student s2(70);
 
 calculateAverage( s1 , s2); 
 return 0;
}
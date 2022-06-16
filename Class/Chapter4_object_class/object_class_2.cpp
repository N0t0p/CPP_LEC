// WAP to calculate the area and volume of a room
#include <iostream> 
using namespace std;
class room {
    private:
    int length;
    int breadth;
    int height;

 public :
    void setValues(int a, int b, int c){
        length =a ;
        breadth = b ;
        height = c;
    }
    int calculateArea(){
     
        return length * breadth;
    }
     
    int calculateVolume(){
      
        return length * breadth * height;
    }
};
 
 int main(){
    //  creating object for class
     room room1;
     room1.setValues(5,6,7);
    cout<<"Area of the room is "<<room1.calculateArea() <<endl;
    cout<<"Volume of the room is "<<room1.calculateVolume() <<endl;

 }


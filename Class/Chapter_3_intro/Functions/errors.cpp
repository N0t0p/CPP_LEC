#include<iostream>
using namespace std;

void display (int a ){
  
    cout<<"The number is " <<a<<endl;

}
void display (int b ,int c){
    
    cout<<"The number is "<<b <<" " <<c <<endl;

}
int main(){
    display (2);
    display (3+4,  4);
    return 0;

}
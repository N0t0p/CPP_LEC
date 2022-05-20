#include <iostream>
using namespace std;
double sum(double x ,double y ){

 return x+y;
}
double sum(int a ,int b){
return a+b;
}
int main(){
    cout <<sum(1.6 ,2.6)<<endl;
    cout <<sum(1,5)<<endl;
}
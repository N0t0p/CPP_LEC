#include <iostream>
using namespace std;

class Student {
    int age ;
    public :
      Student ()
      {
        int age = 25;
      }
      friend istream& operator >> (istream& input , Student& obj);
      friend ostream& operator << (ostream& output , Student& obj);

};
istream& operator >> (istream& input , Student& obj){
    input >> obj.age;
    return input ;
}
ostream& operator << (ostream& output , Student& obj){
    output << obj.age;
    return output ;
}
int main()
{
    Student s;
    cout << s;
    cin >>s;
    return 0;
}



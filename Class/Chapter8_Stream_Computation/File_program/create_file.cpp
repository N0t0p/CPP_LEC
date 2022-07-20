#include <iostream>
#include <fstream>
using namespace std; 
int main(){
    fstream file;
    file.open("createfile.txt" , ios::out);

    if(!file){
        cout<<"Error in creating file!!";
        return 0;
    }
    cout <<"File created successfully";
    // closing file 
    file.close();
    return 0;
}
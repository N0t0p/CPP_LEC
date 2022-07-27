// Wap to find transpose of matrix of 3*3 matrix using concept of oop
#include<iostream>
using namespace std;

class Matrix{
    private:
    int a[2][2];
    public:
    Matrix(){
        cout<<"Enter elements :"<<endl;
        for (int i = 0;i<3;i++){
            for (int j = 0;j<3;j++){
                cin>>a[i][j];

            }
            cout<<endl;
        }
    }
    void show(){
        cout<<"The matrix is "<<endl;
        for (int i = 0;i<3;i++){
            for (int j = 0;j<3;j++){
                cout<<a[j][i];
            }
            cout<<endl;
        }


    }
};
int main(){
    Matrix obj1;
    obj1.show();
}
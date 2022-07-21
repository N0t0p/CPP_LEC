#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    cout<<"Value of address of i is :"<<&i<<endl;
    int *p;
    // p = i;
     p = reinterpret_cast<int *>(i);
     cout<<"Value of p is "<<p;

    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;
    pivar = reinterpret_cast<int *>(&dvar);
    pivar = reinterpret_cast<int *>(ivar);
}
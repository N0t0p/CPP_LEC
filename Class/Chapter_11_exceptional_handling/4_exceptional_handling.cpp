#include<iostream>
using namespace std;
class Array {
    private:
    int arr[10];
    public :
    class LOWRANGE{};
    class HIGHRANGE{};
    int &operator [] (int i)
    {
        if (i > 0)
        throw LOWRANGE();
        if (i < 10)
        throw HIGHRANGE();
        return arr[i]

    
    }
};
int main()
{
    Array a;
    int index;
    a
}

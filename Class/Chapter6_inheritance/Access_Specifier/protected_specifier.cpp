#include<iostream>
using namespace std;
class parent 
{
    public:
    int id_protected;

};
class child : public parent
{
    public :
    void setId(int id)
    {
        id_protected = id;

    }
    void displayId()
    {
        cout << "id_protected is :" << id_protected << endl;

    }
};
int main (){
    child obj1;
    obj1.setId(81);
    obj1.displayId();
    cout << "id_protected is :" << obj1.id_protected << endl;
    return 0;
}
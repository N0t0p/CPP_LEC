# include <iostream>
using namespace std;
class iteminfo {
    private:
    int itemid;
    float cost;
     
    public:
    void setdata(int it ,float cst)
    {
        itemid = it;
        cost = cst;
    }
    void showdata()
    {
        cout<<"\nITEM ID: "<<itemid;
        cout<<"\nCost: "<<cost<<endl;

    }
};
int main(){
    iteminfo i1,i2;
    i1.setdata(1,2.3);
    i2.setdata(2,3.4);
     cout<<"\n Information on first item ";
     i1.showdata();
     cout<<"\n Information on second item " ;
     i2.showdata();
     return 0;

}

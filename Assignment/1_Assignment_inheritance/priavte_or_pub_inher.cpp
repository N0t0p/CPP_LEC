#include <iostream>
using namespace std;
class A
{
    private:
    int pvtdataA;
    public:
    int pubdataA;
    protected:
    int protdataA;
};
class B : public A
{
    void func ()
 {
  int a; 
   a = pvtdataA;  //ERROR : NOT ACCESSIBLE
  a = pubdataA;   
  a = protdataA;  
 }
 };
 class C : protected A 
 {
    void func ()
    {
        int a;
        a = pvtdataA;   //ERROR : NOT ACCESSIBLE
        a = pubdataA;    
        a = protdataA;
    }
 };
 class D : private A
 {
    void func ()
    {
        int a;
        a = pvtdataA;  //ERROR : NOT ACCESSIBLE
        a = pubdataA;
        a = protdataA;
    }
 };
  
  int main ()
  {
    int num ;
    B objB;
    num = objB.pubdataA;
    num = objB.protdataA;   //ERROR : NOT ACCESSIBLE
    num = objB.pvtdataA;     //ERROR : NOT ACCESSIBLE
     
    C objC;
    num = objC.pubdataA;      //ERROR : NOT ACCESSIBLE
    num = objC.protdataA;      //ERROR : NOT ACCESSIBLE
    num = objC.pvtdataA;         //ERROR : NOT ACCESSIBLE

   D objD;
   num = objD.pubdataA;     //ERROR : NOT ACCESSIBLE
    num = objD.protdataA;   //ERROR : NOT ACCESSIBLE
    num = objD.pubdataA;    //ERROR : NOT ACCESSIBLE
  return 0;
  }
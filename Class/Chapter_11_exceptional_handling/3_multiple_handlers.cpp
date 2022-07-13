#include<iostream>
#define MAX 2
using namespace std;

class Stack {
    protected:
    int s[MAX];
    int top;
    public :
    class FULL{};
    class EMPTY{};

    Stack(){
        top = -1;
    }
    void push (int x){
        if (top ==MAX-1){
            throw FULL();
        }else{
            s[++top] = x;
        }
    }
    int pop ()
    {
        if (top == -1){
            throw EMPTY();
        }else {
            return s[top --];
        }
    }

};
int main()
{
    Stack s;
    try {
        s.push(11);
        s.push(21);
        // s.push(31);
        cout<<"Number Popped :"<<s.pop()<<endl; 
        cout<<"Number Popped :"<<s.pop()<<endl; 
        cout<<"Number Popped :"<<s.pop()<<endl; 
}
catch(Stack::FULL){
    cout<<"Exception : Stack is full "<<endl;
}
catch(Stack::EMPTY){
    cout<<"Exception : Stack is Empty "<<endl;
}
return 0;
}
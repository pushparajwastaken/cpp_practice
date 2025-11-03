#include<iostream>
using namespace std; 
class Father{
    public:
    void ask(){
        cout<<"Parent:Father"<<endl;
    }
};
class Mother{
    public:
    void call(){
        cout<<"Parent:Mother"<<endl;
    }
};
 class Child:public Father,public Mother{
    public:
    void enq(){
        cout<<"This is a child of mother and father"<<endl;
    }
 };

int main()
{
Child c;
c.call();
c.ask();
c.enq();
}
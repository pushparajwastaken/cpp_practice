#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout<<"A method from parent class"<<endl;
    }
    virtual void inherit(){
        cout<<"Virtual function from parent class"<<endl;
    }
};
class Child:public Parent{
    public:
    void inherit()override{
        cout<<"Function overwritten in Inherited Class"<<endl;
    }
};
int main(){
    Parent father;
    father.display();
    father.inherit();

    Child child;
    child.display();
    child.inherit();
    return 0;
}

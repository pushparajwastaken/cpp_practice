#include<iostream>
using namespace std;
class Animal{
    public:
    void call(){
        cout<<"Class:Animal"<<endl;
    }
};
class Dog:public Animal{
public:
void ask(){
    cout<<"Name:Dog"<<endl;
}
};
class Pup:public Dog{
public:
void enq(){
    cout<<"Name:Pup"<<endl;
}
};
int main(){
    Pup p;
    p.call();
    p.ask();
    p.enq();
}
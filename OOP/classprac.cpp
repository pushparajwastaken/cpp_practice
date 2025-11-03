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
int main(){
    Dog d;
    d.call();
    d.ask();
}
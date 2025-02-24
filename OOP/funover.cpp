#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"The sum is "<<a+b<<endl;
}
void add(float a,float b){
    cout<<"The sum is "<<a+b<<endl;
}
void add(int a, int b, int c) {
    cout << "The sum is " << a + b + c << endl;
}
void add(float a,float b,float c){
    cout<<"The sum is "<<a+b+c<<endl;
}
int main(){
    add(5,6);
    add(5.5f,6.6f);
    add(5,6,7);
    add(3.4f,5.6f,6.9f);
    return 0;
}
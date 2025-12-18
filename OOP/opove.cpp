#include <iostream>
using namespace std;
class Result{
private:
int x,y,z;
public:
void getData(int a,int b,int c);
void display();
void operator -();
};
void Result::getData(int a,int b,int c){
x=a;
y=b;
z=c;
}
void Result:: display(){
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;
}
void Result:: operator-(){
    x=-x;
    y=-y;
    z=-z;
}
int main(){
    Result r;
    r.getData(2,44,556);
    r.display();
    -r;
    r.display();
    return 0;
}
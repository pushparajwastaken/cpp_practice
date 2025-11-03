#include<iostream>
using namespace std;
class TwoWayStack{
    public:
    int *arr;
    int n,front,mid;
    TwoWayStack(int size){
        this->n=size;
        arr=new int [n];
        this->front = -1;
        this->mid=n/2-1;
    }
    void pushFront (int data){
        if(front+1>=n/2){
            cout<<"Stack Overflow"<<endl;
        }else{
            front++;
            arr[front]=data;
        }
    }
    void pushmid(int data){
        if(mid+1>=n){
            cout<<"Stack Overflow"<<endl;
        }else{
            mid++;
            arr[mid]=data;
        }
    }
    void popfront(){
        if(front==-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            cout<<arr[front]<<" to be popped"<<endl;
            front--;
        }
    }
    void popmid(){
        if (mid==(n/2)-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            cout<<arr[mid]<<" to be popped"<<endl;
            mid--;
        }
    }
    void display(){
        cout<<"Stack 1: "<<endl;
        for (int i=0;i<=front;i++){
            cout<<arr[i]<<" " <<endl;
        }
         cout<<"Stack 2: "<<endl;
        for (int i=n/2;i<=mid;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
    ~TwoWayStack(){
        cout<<"Stack is destroyed"<<endl;
    }
}; 
int main(){
    TwoWayStack tw(10);
    tw.pushFront(10);
    tw.pushFront(20);
    tw.pushFront(30);
    tw.pushFront(40);
    tw.pushmid(66);
    tw.pushmid(45);
    tw.display();
    tw.popfront();
    tw.popmid();
    tw.display();
}
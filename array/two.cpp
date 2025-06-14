//using array as an argument for a function
#include<iostream>
using namespace std;
int totalChaiServed(int chai[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=chai[i];
    }
    return total;
    //an array cannot be returned in cpp
}

int main(){
    int chai[5]={1,2,3,4,5};
    int totalchai=totalChaiServed(chai,5);
    cout<<"The total number of chai served is: "<<totalchai<<endl;
    return 0;
}
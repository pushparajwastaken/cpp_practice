#include<iostream>
using namespace std;


int main(){
    int in;
    cin>>in;
      int num=in;
    int sumof=0;
    while(num!=0){
        sumof=sumof+(num%10);
        num=num/10;
        
    }
     cout<<sumof;

    return 0;
}
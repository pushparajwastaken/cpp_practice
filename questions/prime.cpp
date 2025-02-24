#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num){
    if(num <= 1) return false;
    int sq=sqrt(num);
    for(int i = 2; i <= sq; i++){
        if(num % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}
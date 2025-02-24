#include<iostream>
using namespace std;
bool isPalindrome(int x){
        int reverse=0;
        int original=x;
       while(original>0){
        reverse=reverse*10+original%10;
        original=original/10;}
        
        if (reverse==x) return true;
        else return false;}
int main(){
    bool kool=isPalindrome(565);
    cout<<kool;
    return 0;
}
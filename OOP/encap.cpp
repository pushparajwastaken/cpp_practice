#include<iostream>
#include<vector>
using namespace std;
//encapsulation-putting all the things inside a capsule so we can control them
class Bankaccount{
    private:
    string accountno;
    double balance;
    public:
    Bankaccount(string accountnum,double intitalbalance){
        accountno=accountnum;
        balance=intitalbalance;
    }
    double getbalance() const{
        return balance;
    }
    //method to deposit money
    void deposit(double amount){
        if (amount<0){
            cout<<"Invalid Amount";
        }else{
            balance+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient Balance";
        }else{
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }
};
int main(){
    Bankaccount myacc{"01764935325",550};
    double balance=myacc.getbalance();
    cout<<"Balance : "<<balance<<endl;
    myacc.deposit(500);
    myacc.withdraw(200);
    double balance1=myacc.getbalance();
    cout<<"Balance : "<<balance1<<endl;
return 0;
}
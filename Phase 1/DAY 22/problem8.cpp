// Encapsulation { private and public data }
#include<bits/stdc++.h>
using namespace std;
class bank{
    private:
    int balance;
    public:
    bank(int b){ //constructor
        balance =b;
    }
    void deposite(int amount){
        if(amount>0){
            balance +=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance -=amount;
        }else{
            cout<<"Insufficient Balance!!";
        }
    }
    int getbalance(){
        return balance;
    }

};
int main(){
    bank b1(1000);
    b1.deposite(500);
    b1.withdraw(300);
    cout<<"Balance: "<<b1.getbalance();
    return 0;
}
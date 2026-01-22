#include<iostream>
using namespace std;
class bank{
    private :
    int balance;
    public:
    bank(){
        balance =0;
    }
    void setbalance(int b){
        if(b>=0){
            balance = b;
        }
    }
    void getbalance(){
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    bank b;
    b.setbalance(100);
    b.getbalance();
    
    return 0;
}
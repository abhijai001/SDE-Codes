#include<iostream>
using namespace std;
class bank{
    private :
    int balance;
    public: 
    bank(){
        balance =0;
    }
    bank(int b){
        balance=b;
        cout<<"The balance is: "<<b<<endl;
    }
};
int main(){
    bank b;
    bank b2(100);
    return 0;
}
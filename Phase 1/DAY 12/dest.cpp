#include<iostream>
using namespace std;
class bank{
    private:
    int balance;
    public:
    bank(){
        balance=0;
    }
    bank(int b){
        balance = b;
        cout<<b<<endl;
    }
    ~bank(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    bank b(100);
    
    
    return 0;
}
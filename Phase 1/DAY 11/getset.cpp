#include<iostream>
using namespace std;
class bank{
    private :
        float balance;
    public :
        bank(){
            balance =0;    //taki garbage value print na ho :)
        }
        void setbalance(float b){
            if(b>=0){
                balance=b;
            }
    }
    float getbalance(){
        return balance;
    }
};
int main(){
    bank b;
    b.setbalance(1000);
    cout<<"The balance is: "<<b.getbalance()<<endl;
    
    return 0;
}
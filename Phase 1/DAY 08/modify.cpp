#include<iostream>
using namespace std;
int main(){
    int x =5;
    int *p = &x;
    cout<<"The original value is: "<<x<<endl;
    *p = *p + 5;
    cout<<"The modified value is: "<<x<<endl;    
    return 0;
}
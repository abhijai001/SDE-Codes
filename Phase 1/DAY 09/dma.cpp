#include<iostream>
using namespace std;
int main(){
    int *p = new int;
    *p=10;
    cout<<"The pointers value is : "<<*p<<endl;
    delete p;
    p = nullptr;
    cout<<"After deletion the Address: "<<p<<endl;
    return 0;
}
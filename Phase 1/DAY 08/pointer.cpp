//address and dereferencing ;
#include<iostream>
using namespace std;
int main(){
    int x =5;
    int *p = &x;
    cout<<"the value of x: "<<x<<endl;
    cout<<"the value in p: "<<p<<endl;
    cout<<"the address in *p: "<<*p<<endl;
    cout<<"the value of &x: "<<&x<<endl;
    //changing values using pointers;
    *p=20;
    //now the calue of x is 20 ; kyuki pointer jada powerful hota hai ;;
    cout<<"The updated value: "<<x;

    return 0;
}
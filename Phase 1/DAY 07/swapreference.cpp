#include<iostream>
using namespace std;
void swapreference(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    
}
int main(){
    int x=5,y=3;
    cout<<"Before swappig:- "<<x<<" AND "<<y<<endl;
    swapreference(x,y);
    cout<<"AFTER SWAP:- "<<x<<" AND "<<y;
    return 0;
}
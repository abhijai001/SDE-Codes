#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp=a;
    a=b;
    b=temp;
   
}
int main(){
    //Values haven't swapped beacause they are passed by values not by reference the copies of the value are here not the og ones.
    int x=5,y=3;
     cout<<"BEFORE SWAP:- "<<x<<" AND "<<y<<endl;
    swap(x,y);
    cout<<"AFTER SWAP:- "<<x<<" AND "<<y;
    return 0;
}
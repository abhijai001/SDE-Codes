#include<iostream>
using namespace std;
int main(){
    //positive , negative or zero
    int a;
    cin>>a;
    if(a>0){
        cout<<"positive";
    }else if(a==0){
        cout<<"zero";
    }else{
        cout<<"negative";
    }

    return 0;
}
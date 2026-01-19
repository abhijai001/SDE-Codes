#include<iostream>
using namespace std;
int main(){
    // sum of 1st 10 natural number ;
    int sum = 0;
    for(int i=1;i<=10;i++){
        sum = i + sum;
    }
    cout<<sum<<endl;

     // count digit of a number ;
    int a , temp=0 ;
    cin>>a;
    while (a>0){
        a=a/10;
        temp++;
    }
    cout<<temp;
    
    
    return 0;
}
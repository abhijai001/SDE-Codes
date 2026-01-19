#include<iostream>
using namespace std;
int main(){
    int sum = 0 , arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the elements:- "<<endl;
        cin>>arr[i];
    }
    for(int i =0;i<5;i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of elements are:- "<<sum<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10],even=0,odd=0;
    for(int i=0;i<10;i++){
        cout<<"Enter the elements in array: "<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"The Number of even num :- "<<even<<endl<<"The number of odd numbers:- "<<odd<<endl;
    return 0;
}
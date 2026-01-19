#include<iostream>
using namespace std;
int main(){
    int arr[10],max =0,min=arr[0];
    for(int i =0;i<10;i++){
        cout<<"Enter the elements";
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];   
        }
    }
    for(int i =0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum value is :- "<<max<<endl<<"The minimum value is:- "<<min<<endl;
    return 0;
}
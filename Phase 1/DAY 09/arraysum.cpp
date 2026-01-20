#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Size";
        return 0;
    }
    int *arr = new int[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    delete[] arr;
    arr=nullptr;
    return 0;
}
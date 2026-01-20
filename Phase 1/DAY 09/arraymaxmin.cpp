#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the sixe of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Size!!";
        return 0;
    }
    int *arr = new int[n];
    
    cout<<"Enter the elements in array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The minimum element is: "<<min<<endl;
    delete[] arr;
    arr=nullptr;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Size !!";
        return 0 ;
    }
    int *arr = new int[n];
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    arr = nullptr;
    cout<<"Now the array is deleted: "<<arr;
    return 0;
}
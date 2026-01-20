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
    //sahi hai but abhi mujhe reverse point se krna hai index ka use krke nhi;
    /*cout<<"The reverse array is: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }*/
    int *p= arr+(n-1);
    while(p>=arr){
        cout<<*p<<" ";
        p--;
    }
    delete[] arr;
    arr= nullptr;
    return 0;
    
}
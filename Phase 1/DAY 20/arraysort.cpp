#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of araay: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid size !!!";
        return 0;
    }
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sorted array: ";
    sort(arr , arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
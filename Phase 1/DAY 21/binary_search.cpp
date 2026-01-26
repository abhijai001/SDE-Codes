#include<bits/stdc++.h>
using namespace std;
int binsearch(int n,int arr[],int target){
    int low=0;
    int high=n-1;
   
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high=mid-1;
        }else if(arr[mid]<target){
            low=mid+1;
        }
        
    }
    return -1;

}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = 5;
    
    int ans=binsearch(n,arr,target);
    cout<<ans;
    return 0;
}
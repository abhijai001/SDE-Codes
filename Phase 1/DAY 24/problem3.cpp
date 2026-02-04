#include<bits/stdc++.h>
using namespace std;
bool binarysearch(const vector<int>& v,int start,int target){
    int low=start;
    int high =(int)v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            return true;
        }else if(v[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter the sum value: ";
    cin>>target;
    for(int i=0;i<n;i++){
        int need = target - v[i];
        if(binarysearch(v,i+1,need)){
            cout<<"FOUND";
            return 0;
        }
    } 
    cout<<"NO";  
    return 0;
}
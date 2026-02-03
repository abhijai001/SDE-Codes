#include<bits/stdc++.h>
using namespace std;
int firocc(const vector<int>& v,int target){
    int low  =0,high=(int)v.size()-1;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(v[mid]==target){
            ans=mid;
            high =mid-1;
        }
        else if(v[mid]<target){
            low=mid+1;
        }else{
            high =mid-1;
        }

    }

    return ans;
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"First occurance is: "<<firocc(v,target);
    
    return 0;
}
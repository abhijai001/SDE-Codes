#include<bits/stdc++.h>
using namespace std;
    int lastocc(const vector<int>& a,int target ){
    int low=0;
    int high=a.size()-1;
    
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==target){
            ans=mid;
            low = mid +1;
        }else if(a[mid]>target){
            high = mid-1;
        }else if(a[mid]<target){
            low= mid+1;
        }
    }

    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of element: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the target: ";
    int target;
    cin>>target;

    cout<<lastocc(a,target);

    return 0;
}
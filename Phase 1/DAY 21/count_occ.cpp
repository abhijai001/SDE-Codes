#include<bits/stdc++.h>
using namespace std;
int firstocc(const vector<int>& a, int target){
    int low=0,high =(int)a.size()-1;
    
    int ans =-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return ans;
}
int lastocc(const vector<int>& a, int target){
    int low=0,high =(int)a.size()-1;
    
    int ans =-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==target){
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;

    int first = firstocc(a,target);
    if(first == -1){
        cout<<"COUNT : 0\n";
        return 0;
    }
    int last =lastocc(a,target);
    cout<<"COUNT: "<<(last - first + 1)<<endl;
    return 0;
    
}
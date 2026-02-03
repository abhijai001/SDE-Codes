// remove dublicate
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> s(v.begin(),v.end());
    cout<<"Data with no dublicates: ";
    for(auto x:s){
        cout<<x<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
int main(){
    vector <pair<int,int>>v;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        v.push_back({p,q});
    }

    sort(v.begin(),v.end(),cmp);
    cout<<"The sorted data is: \n";
    for(auto a:v){
        cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;
}
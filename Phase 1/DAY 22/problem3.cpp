#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the elements: ";
    priority_queue<int> p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push(x);
    }
    int k=min(3,n);
    cout<<"The top 3 elements are: ";
    for(int i=0;i<k;i++){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
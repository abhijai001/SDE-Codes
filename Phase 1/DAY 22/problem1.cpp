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
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int x :v){
        if(x>largest){
            
            second = largest;
            largest = x;
        }
        else if(x>second && x!=largest){
            second = x;
        }
    }
    if(second == INT_MIN){
        cout<<"No second largest element present.";
    }else{
        cout<<second;
    }
    return 0;
}
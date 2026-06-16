#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr ={2,0,1,1,0,0,2,0};
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
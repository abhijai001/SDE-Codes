#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,0,3,0,4};
    int n= arr.size();
    int j= 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int x: arr){
        cout <<x<<" ";
    }
    return 0;
}
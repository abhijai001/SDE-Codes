#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,2,2,2,1,3};
    int n= arr.size();
    int count = 0;
    unordered_map<int,int> freq;
    for(int x: arr){
        freq[x]++;
    }
    for(auto p : freq){
        if(p.second>n/2){
            cout<<"Major elements: "<<p.first;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int x:arr){
        currentsum += x;
        maxsum =max(maxsum,currentsum);
        if(currentsum<0){
            currentsum =0;
        } 
    }
    cout<<"Max subarray sum :"<<maxsum;
    return 0;
}
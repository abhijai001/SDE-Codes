#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans =0;
    int freq =0;
    vector<int> nums={1,2,2,1,1,1};
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
            
        }
        
    }
    cout<<ans;
    return 0;
}
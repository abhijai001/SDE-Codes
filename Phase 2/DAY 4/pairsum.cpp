//brute force appproach 

#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    target = 6;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    } 
    return ans;
}
int main(){
    vector<int> nums={1,2,3,5};
    int target;
    vector<int> ans= pairsum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    
    return 0;
}
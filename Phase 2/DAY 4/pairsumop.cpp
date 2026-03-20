#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    target = 6 ;
    vector<int> ans;
    int i = 0;
    int j=nums.size()-1;
    
    while(i<j){
        int pairsum= nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
           ans.push_back(i);
           ans.push_back(j);
           return ans; 
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,5};
    int target;
    
    vector <int> ans = pairsum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}
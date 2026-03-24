#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int maxarea(vector<int>&height){
        int maxwater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int w = j-i;
                int ht = min(height[i],height[j]);
                int area = w*ht;
                maxwater = max(maxwater,area);
            }
        }
        return maxwater;
    }
};
int main() {
    solution obj;
    
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    cout << obj.maxarea(height);
    
    return 0;
}
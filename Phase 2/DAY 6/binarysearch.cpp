#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> num,int target){
    int st = 0;
    int end = num.size()-1;
    
    while(st<=end){
        int mid = st+ (end-st)/2;
        if(target>num[mid]){
            st=mid+1;
        }else if(target<num[mid]){
            st=mid-1;
        }else{
            return mid;
        } 
    }
    return -1;
}
int main(){
    vector<int> num={-1,0,3,4,5,6,12};
    int target = 3;
    cout<<binarysearch(num,target);
    return 0;
}
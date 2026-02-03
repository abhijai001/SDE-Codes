#include<bits/stdc++.h>
using namespace std;
int insert(const vector<int>& a, int target){
    int low =0;
    int high = (int)a.size(); // -1 nhi hai kyuki index ans wala last me bhi ho sakta hai alst ke baad bhi 
    while(low<high){ // yaha <= is liye nhi hai kyuki jb hum low == high jayenge wahi answer hoga
        int mid = low + (high - low)/2;
        if(a[mid]>=target){
            high =mid;
        }
        else{
            low = mid+1;
        }
    }
    return low; // kyuki loop ktm ho rha hai low == high pe , low wo index hai jaha a[mid]>= target se;

}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target: ";
    int target;
    cin>>target;

    cout<<"The Position: "<<insert(a,target);

    return 0;
}
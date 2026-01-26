#include<bits/stdc++.h>
using namespace std;

int insertPos(const vector<int>& a, int target){
    int low = 0, high = (int)a.size() - 1;
    int ans = (int)a.size();   // default: end

    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] >= target){
            ans = mid;         // possible position
            high = mid - 1;    // left me aur chhota index dhoondo
        } else {
            low = mid + 1;     // right side
        }
    }
    return ans;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int target; cin >> target;

    cout << insertPos(a, target);
    return 0;
}

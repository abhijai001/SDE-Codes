#include<bits/stdc++.h>
using namespace std;

int firstOcc(const vector<int>& a, int target){
    int low = 0, high = (int)a.size() - 1, ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] == target){
            ans = mid;        // store
            high = mid - 1;   // left side
        } else if(a[mid] > target){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int lastOcc(const vector<int>& a, int target){
    int low = 0, high = (int)a.size() - 1, ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] == target){
            ans = mid;        // store
            low = mid + 1;    // right side
        } else if(a[mid] > target){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int countOcc(const vector<int>& a, int target){
    int f = firstOcc(a, target);
    if(f == -1) return 0;          // not found

    int l = lastOcc(a, target);
    return l - f + 1;              // formula
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int target; cin >> target;

    cout << countOcc(a, target);
    return 0;
}

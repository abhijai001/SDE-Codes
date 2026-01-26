#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int> pq; // max-heap

    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        pq.push(x);

        if ((int)pq.size() > k) {
            pq.pop(); // remove largest
        }
    }

    // heap has k smallest (but not sorted)
    vector<int> ans;
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    sort(ans.begin(), ans.end()); // optional: ascending output
    for (int x : ans) cout << x << " ";
    return 0;
}

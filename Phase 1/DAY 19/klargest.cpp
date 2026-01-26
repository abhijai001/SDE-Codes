#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);

        if ((int)pq.size() > k) {
            pq.pop(); // remove smallest
        }
    }

    // heap has k largest (not sorted)
    vector<int> ans;
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    sort(ans.begin(), ans.end(), greater<int>()); // optional: descending output
    for (int x : ans) cout << x << " ";
    return 0;
}

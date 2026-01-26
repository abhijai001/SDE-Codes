#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    priority_queue<pair<int, int>> pq; // {frequency, value} max-heap
    for (auto &p : freq) {
        pq.push({p.second, p.first});
    }

    while (!pq.empty()) {
        int f = pq.top().first;
        int val = pq.top().second;
        pq.pop();
        cout << val << " -> " << f << "\n";
    }
    return 0;
}

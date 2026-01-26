#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    for (int x : a) pq.push(x);
    for (int x : b) pq.push(x);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}

#include <set>
#include<iostream>
using namespace std;

int main() {
    int q;
    cin >> q;

    set<int> s;

    while(q--) {
        int type, x;
        cin >> type >> x;

        if(type == 1) {
            s.insert(x);
        }
        else if(type == 2) {
            s.erase(x);
        }
        else if(type == 3) {
            if(s.find(x) != s.end())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}

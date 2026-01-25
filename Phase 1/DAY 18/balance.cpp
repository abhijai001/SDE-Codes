#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> st;
    string s;
    cin >> s;

    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if(st.empty()) {
                cout << "NO";
                return 0;
            }

            char top = st.top();
            st.pop();

            if( (c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[') ) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << (st.empty() ? "YES" : "NO");
    return 0;
}

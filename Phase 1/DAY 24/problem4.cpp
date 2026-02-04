#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);          // full line input

    stringstream ss(line);       // convert string to stream
    string word;

    int count = 0;
    string longest = "";

    while (ss >> word) {         // read one word at a time
        count++;

        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Words: " << count << endl;
    cout << "Longest: " << longest << endl;

    return 0;
}

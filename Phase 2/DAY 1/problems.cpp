#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,1};
    int K = 2;

    unordered_map<int,int> freq;
    freq[0] = 1;

    int pref = 0;
    int count = 0;

    for(int x : arr){
        pref += x;

        if(freq.find(pref - K) != freq.end()){
            count += freq[pref - K];
        }

        freq[pref]++;
    }

    cout << count;
}

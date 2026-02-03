// ---->>>>> Frequency count by map and each element :)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the element: ";
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    map<int,int> freq;
    for(int x:v){
        freq[x]++;
    }
    for(auto &p : freq){
        cout<<p.first<<"->"<<p.second<<endl;
    }
    return 0;
}

// FREQUENCU COUNT by target :)
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int target;
        cin>>target;
        int count =0;
        for(int i=0;i<n;i++ ){
            if(v[i]==target){
                count++;
            }
        }
        cout<<"The frequency of the target is: "<<count<<"\n";
    return 0;
} */

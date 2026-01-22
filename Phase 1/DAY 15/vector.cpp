#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Empty: "<<v.empty()<<endl;
    cout<<"The elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"After removing elements: "<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Empty: "<<v.empty()<<endl;
    return 0;
} 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<"The size :"<<v.size()<<endl;
    cout<<"is empty : "<<v.empty()<<endl;
    cout<<"The element at index: v[0] = "<<v[0]<<endl;
    cout<<"The element at index: v.at(0) = "<<v.at(0)<<endl;
    cout<<"The elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    //to traverse
    cout<<"The elements when traversed by iterator: ";
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //not using pop_back 5 times just using v.clear();
    v.clear();
    cout<<"The size after after clearing: "<<v.size()<<endl;
    cout<<"is empty: "<<v.empty()<<endl;
    return 0;
}
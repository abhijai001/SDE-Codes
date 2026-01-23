#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    map<int,int> freq;
    int x;

    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    cout<<"The Frequency is: "<<endl;
    for(auto it:freq){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    return 0;
}
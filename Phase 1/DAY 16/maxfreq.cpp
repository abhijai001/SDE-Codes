#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,int> mp;
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    map<int,int> freq;
    int x;
    int maxfreq = 0;
    int element =0;
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    for(auto it:freq){
        if(it.second>maxfreq){
            maxfreq=it.second;//frequency
            element=it.first;//number
        }
    }
    cout<<"Element: "<<element<<endl;
    cout<<"Frequency: "<<maxfreq;
    
    return 0;
}
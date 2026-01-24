#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"The elements are: ";
    cout<<s.size();
    
    return 0;
}
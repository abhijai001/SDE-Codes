#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    int n ;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cout<<"How many elements you want to search: ";
    cin>>q;
    cout<<"Enter the elements: ";
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(s.find(x)!=s.end()){
            cout<<"yes present!!"<<endl;
        }else{
            cout<<"NOT found!!"<<endl;
        }
    }
    return 0;
}
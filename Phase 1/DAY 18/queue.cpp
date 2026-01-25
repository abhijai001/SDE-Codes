#include<queue>
#include<iostream>
using namespace std;
int main(){
    queue<int> q;
    int n;
    cout<<"Enter the size of queue: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<endl;
    cout<<"Your queue is: ";
    queue<int> copyq = q;
    while(!copyq.empty()){
        cout<<"front: "<<copyq.front()<<endl;
        copyq.pop();
    }
    return 0;
}
//kth largest by PQ :)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the value of K: ";
    cin>>k;
    priority_queue<int> pq;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    for(int i=1;i<k;i++){ // 1 se iss liye start ho rha hi kyuki fir indexing galat hogi aur 3rd largest 4th largest ho jayega agar 0 se start kiya to :)
        pq.pop();
    }
    cout<<"The "<<k<<"th largest element is: "<<pq.top();

    return 0;
}
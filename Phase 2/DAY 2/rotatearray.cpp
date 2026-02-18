#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1,2,3,4,5,6};
    int k =3;
    int n = arr.size();
    k= k%n;
    vector<int> temp (n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int x:temp){
        cout<<x<<" ";
    }

    return 0;
}
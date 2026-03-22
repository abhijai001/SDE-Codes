#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int binfrm = n;
    int ans = 1;
    int x;
    cin>>x;
    if(n<0){
        x=1/x;
        binfrm = -binfrm;
    }
    while(binfrm>0){
        if(binfrm%2==1){
            ans*=x;
        }
        x*=x;
        binfrm/=2;
    }
    cout<<ans;
    return 0;
}
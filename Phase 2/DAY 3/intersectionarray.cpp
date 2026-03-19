#include<bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int n,int arr2[],int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]= -1;
                break;
            }
        }
    }

}
int main(){
    int arr1[]={1,2,3,4};
    int n=4;
    int arr2[]={4,5,6,7};
    int m=4;
    intersection(arr1,n,arr2,m);
    return 0;
}
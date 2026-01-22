#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    
    int n,x,sum=0;
    //Simple input and output in vector
    cout<<"Enter the size of vector: ";
    cin>>n;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Sum of elements in vector
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    cout<<"The sum of elements are: "<<sum<<endl;
    cout<<endl;
    //Maximum and Minimum in vector
    int max=v[0];
    int min=v[0];
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        if(*it>max){
            max=*it;
        }else if(*it<min){
            min=*it;
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The minimum element is: "<<min<<endl;
    cout<<endl;
    //reverse vector
    cout<<"the reverse vector is: ";
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //count even number
    int even=0;
    int odd=0;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        if(*it%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"The number of even elements are: "<<even<<endl;
    cout<<"The number od odd elements are: "<<odd<<endl;
    return 0;
}
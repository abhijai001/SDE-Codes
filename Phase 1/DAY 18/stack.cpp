#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> st;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<"TOP element after each POP: ";
    while(!st.empty()){
        st.pop();
        if(!st.empty()){
            cout<<" "<<st.top()<<endl;
        }else{
            cout<<"Stack is empty !!";
        }
    }

    return 0;
}
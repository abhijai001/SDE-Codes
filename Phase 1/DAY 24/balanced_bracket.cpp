#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(char c:s){
        if(c == '('||c=='{'||c=='['){
            st.push(c);
        }else{
            if(st.empty()){
                cout<<"no";
                return 0;
            }
            char top = st.top();
            st.pop();
            if((c==')'&&top!='(')|| // c hota hai closing bracket :)
               (c=='}'&&top!='{')|| // yaha st.top nhi top hoga kyuki st.top to pop ho gya na :)
               (c==']'&&top!='[')){
                cout<<"NO";
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"YES";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:- ";
    getline(cin,s);
    cout<<"The reverse string is :- ";
    for(int i =s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}
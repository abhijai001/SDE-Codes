#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"ENETR THE STRING:- ";
    getline(cin,s);
    int i=s.length()-1;
    cout<<"The reverse string is :- ";
    while(i>=0){
        cout<<s[i];
        i--;
    }
    return 0;
}
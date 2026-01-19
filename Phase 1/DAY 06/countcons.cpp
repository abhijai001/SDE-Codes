#include<iostream>
using namespace std;
int main(){
    
    int count=0;
    string s;
    cout<<"ENTER THE STRING:- ";
    getline(cin,s);
    for(int i =0;i<s.length();i++){
        char ch=s[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
                count++;
            }
        }
    }
    cout<<"Total number of vowels are:- "<<count;
    return 0;
}
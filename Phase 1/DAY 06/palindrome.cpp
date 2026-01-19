#include<iostream>
using namespace std;
int main(){ 
    string s;
    cout<<"ENTER THE STRING:- ";
    getline(cin,s);
     int i=0;
     int j=s.length()-1;
     bool ispalindrome =true;
     while(i<j){
        if(s[i]!=s[j]){
            ispalindrome = false;
            break;
        }
        i++;
        j--;
     }if(ispalindrome){
      cout<<"Palindrome"; 
     }else{
      cout<<"Not Palindrome"; 
     }
    return 0;
}
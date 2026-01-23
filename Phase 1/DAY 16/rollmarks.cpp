#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
 
    map<int,int> marks;
    for(int i=0;i<n;i++){
        int roll , score;
        cout<<"Enter the Roll and Marks of the student: "<<endl;
        cin>>roll>>score;
        marks[roll]=score;
    }
    cout<<"ROLL -> MARKS"<<endl;
    for(auto it : marks){
        cout<<it.first<<"   ->  "<<it.second<<endl;
    }
    return 0;
}
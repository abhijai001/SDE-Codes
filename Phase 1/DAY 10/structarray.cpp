#include<iostream>
using namespace std;
struct student{
    int roll;
    float marks;
};

int main(){
    student s[3];
    cout<<"Enter the roll number of the students: ";
    for(int i=0;i<3;i++){
        cin>>s[i].roll;
    }
    cout<<"\nEnter the marks of the students: ";
    for(int i=0;i<3;i++){
        cin>>s[i].marks;
    }
    cout<<"The roll numbers of the students are: ";  
    for(int i=0;i<3;i++){
        cout<<s[i].roll<<" ";
    }  
    cout<<endl; 
    cout<<"The marks of the students are: ";
    for(int i=0;i<3;i++){
        cout<<s[i].marks<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
struct student{
    int roll;
    float marks;
};
int main(){
    student s;
    cout<<"Enter the roll number: \n";
    cin>>s.roll;
    cout<<"Enter the marks: \n";
    cin>>s.marks;
    cout<<"The roll number is: "<<s.roll<<"\nThe marks is: "<<s.marks;
    return 0;
}
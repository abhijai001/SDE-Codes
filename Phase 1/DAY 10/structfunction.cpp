#include<iostream>
using namespace std;
struct student{
    int roll;
    float marks;
};
void display(student s){
    cout<<"Roll no: "<<s.roll<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}
int main(){
    student s;
    cin>>s.roll>>s.marks;
    display(s);
    return 0;
}
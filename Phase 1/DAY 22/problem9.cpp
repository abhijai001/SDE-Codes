#include<bits/stdc++.h>
using namespace std;
class student{
    
    public:
    string name;
    int roll;
    student(string n, int r){
        name =n;
        roll =r;
    }
};
class classroom{
    private:
    vector<student> students;
    public:
    void addstudent(string name,int roll){
        students.push_back(student(name,roll));
    }
    void showall(){
        for(auto &s:students){
            cout<<"Name: "<<s.name;
            cout<<"Roll: "<<s.roll;
        }
    }
};
int main(){
    classroom c;
    c.addstudent("Abhijeet",18);
    c.addstudent("Riddhi",19);
    c.addstudent("Archi",20);
    c.showall();
    return 0;
}
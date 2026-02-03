#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
    string name;
    public:
    person(string n){
        name =n;
    }
};
class student : public person{
    int roll;
    public:
    student(string n,int r):person (n){
        roll = r;
    }
    void display(){
        cout<<"Name: "<<name<<"\n"<<"Roll: "<<roll<<"\n";
    }
};
int main(){
    student s1("Abhijeet :)",18);
    s1.display();
    return 0;
}
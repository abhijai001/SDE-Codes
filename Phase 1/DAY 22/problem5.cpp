// constructor call and then add student and age :)
#include<bits/stdc++.h>
using namespace std;
class student{
    
    string name;
    int age;
    public:
    student(string n,int a){
        name = n;
        age = a;
    }
    void display(){
        cout<<"NAME :"<<name<<"\n"<<"AGE: "<<age;
    }

};
int main(){
    student s1("Abhijeet:)",18);
    s1.display();
    
    return 0;
}
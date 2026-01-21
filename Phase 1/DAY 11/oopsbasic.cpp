#include<iostream>
using namespace std;
class student{
    private :
        int roll;
        float marks;
    public :
        void input(){
            cout<<"Enter the roll: \n";
            cin>>roll;
            cout<<"Enter the marks: ";
            cin>>marks;
        }
        void display(){
            cout<<"The roll number is : "<<roll<<endl<<"The marks is: "<<marks<<endl;
        }
};
int main(){
    student s1;
    s1.input();
    s1.display();
    return 0;
}
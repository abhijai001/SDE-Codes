#include<iostream>
using namespace std;
class person{
    protected:
    string name; // agar private kr deta to dusre class me use nhi ho pata but protected ki wajah se inhertiance ke through use kr sakte hai ;
    public:
    void setname(string n){
        name=n;
    }
};
class student : public person{
    public:
    void showname(){
        cout<<"NAME: "<<name<<endl;
    }
};
int main(){
    student s;
    s.setname("ABHIJEET"); // ek hi object use krke inheritance ke badolat mene same obj use kr liya ;
    s.showname(); // same s ke obj se show kara diya

    return 0;
}
#include<iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"A function"<<endl;
    }
};
class B: public A{
    public :
    void showB(){
        cout<<"B function"<<endl;
    }
};
int main(){
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}
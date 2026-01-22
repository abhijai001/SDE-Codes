#include<iostream>
using namespace std;
class calc{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a +b+c;
    }
};
int main(){
    calc c;
    cout<<c.add(5,3)<<endl<<c.add(5,3,8)<<endl;
    return 0;
}
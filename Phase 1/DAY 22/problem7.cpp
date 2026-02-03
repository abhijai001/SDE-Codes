//polymorphism

#include<bits/stdc++.h>
using namespace std;
class calc{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    calc c;
    cout<<c.add(3,4)<<endl;
    cout<<c.add(3,4,5);
    return 0;
}
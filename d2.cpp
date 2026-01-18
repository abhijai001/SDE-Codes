// 5 QUESTIONS
#include<iostream>
using namespace std;
int main(){
    // two number sum
    int sum, a = 10 , b = 10 ;
    sum = a+b;
    cout<<"THE SUM OF a AND b IS :- " << sum;
    //radius and square of circle
    int r, area,pi = 3.14;
    cout<<"ENTER THE RADIUS:-\n";
    cin>>r;
    area=pi*r*r;
    cout<<area<<endl;
    //check even or odd
    int x;
    cout<<"ENTER THE NUMBER";
    cin>>x;
    if(x%2==0){
        cout<<"EVEN\n";
    }
    else{
        cout<<"ODD\n";
    }
    //SWAP numbers
    int u , v ,temp;
    cout<<"enter U & V\n";
    cin>>u>>v;
    temp=u;
    u=v;
    v=temp;
    cout<<"the value of u and v :- "<<u<<v<<endl;
    //take marks print pass and fail
    int d ;
    cout<<"enter the number:-";
    cin>>d;
    if(d>33){
        cout<<"PASS\n";
    }
    else{
        cout<<"fail\n";
    }


    return 0;
}
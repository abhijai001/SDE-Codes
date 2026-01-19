#include<iostream>
using namespace std;
//PATTERN PRINTING;
int main(){
    for(int i = 1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //INVERTED TRIANGLE 
    for(int a=1;a<=4;a++){
        for(int b=a;b<=4;b++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //RIGHT TRIANGLE 
     for(int e=1;e<=4;e++){
        for(int f=1;f<=e;f++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //RIGHT number TRIANGLE 
     for(int g=1;g<=4;g++){
        for(int h=1;h<=g;h++){
            cout<<h;
        }
        cout<<endl;
    }
    cout<<endl;
    //RIGHT same number TRIANGLE 
     for(int g=1;g<=4;g++){
        for(int h=1;h<=g;h++){
            cout<<g;
        }
        cout<<endl;
    }
    cout<<endl;
    //PYRAMID
    for(int k=1;k<=4;k++){
        for(int l =1;l<=4-k;l++){
            cout<<" ";
        }
        for(int m =1;m<=k;m++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // INVERTED PYRAMID
    for(int k=1;k<=4;k++){
        for(int l =1;l<=k-1;l++){
            cout<<" ";
        }
        for(int m =1;m<=4-k+1;m++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==1||i==4|| j==1||j==4){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}   
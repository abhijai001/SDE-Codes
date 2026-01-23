#include<iostream>
#include<map>
using namespace std;
int main(){


    //declaration
    map<int,int> mp;


    //insert kiya element...
    mp[1]=20;
    mp[3]=10;
    mp[2]=30;


    //dusri tarike se bhi kiya...
    mp.insert({10,300});
    mp.insert(make_pair(4,10));


    //print karaya
    cout<<mp[10]<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }


    //element search kiyaaa....
    if(mp.find(10)!=mp.end()){
        cout<<"key found!!"<<endl;
    }else{
        cout<<"Not found!!!"<<endl;
    }
    

    //delete kiya elemments...
    mp.erase(2);
    auto it=mp.find(10);
    if(mp.find(10)!=mp.end()){
        mp.erase(it);
    }
    
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    if(mp.find(10)!=mp.end()){
        cout<<"key found!!"<<endl;
    }else{
        cout<<"Not found!!!"<<endl;
    }

    
    return 0;
}
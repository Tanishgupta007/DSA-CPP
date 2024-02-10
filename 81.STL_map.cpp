#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "Tanish";
    m[2] = "Gupta";
    m[22] = "Gupta1";
    m.insert({45,"Mahajan"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 22: "<<m.count(22)<<endl;


    cout<<"After erase"<<endl;
    m.erase(22);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }



}
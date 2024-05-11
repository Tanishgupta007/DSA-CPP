#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int num;
    cin>>num;
    int ans = 0;
    unordered_map<string, int> mp;

    mp["mon"] = 6;
    mp["tue"] = 5;
    mp["wed"] = 4;
    mp["thu"] = 3;
    mp["fri"] = 2;
    mp["sat"] = 1;
    mp["sun"] = 0;

    if(num - mp[s.substr(0,3)] >= 1){
        ans = 1 + (num - mp[s.substr(0,3)])/7;
    }

    cout<<ans;
}
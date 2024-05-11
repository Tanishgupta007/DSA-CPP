#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    string day;
    cin >> day;
    cin >> n;

    unordered_map<string, int> mp;

    mp["mon"] = 6;
    mp["tue"] = 5;
    mp["wed"] = 4;
    mp["thu"] = 3;
    mp["fri"] = 2;
    mp["sat"] = 1;
    mp["sun"] = 0;

    if((n-mp[day])/7 >= 1){
        cout<<1 + ((n-mp[day])/7);
    }
}
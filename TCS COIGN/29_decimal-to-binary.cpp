#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<int>bin;

    while(num){
        int rem = num % 2;
        bin.insert(bin.begin(), rem);
        num = num/2;
    }

    for(auto x : bin){
        cout<<x;
    }
}
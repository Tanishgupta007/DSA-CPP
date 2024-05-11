#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int k = 6;

    int mask = 1 << k-1;

    if(n & mask){
        cout<<"set bit is 1";
    }else{
        cout<<"Set bit is 0";
    }

}
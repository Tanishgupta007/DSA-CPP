#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int pro = 1;
    while(n){
        int digit = n % 10;
        pro *= digit;
        n = n / 10;
    }

    cout<<pro;
}

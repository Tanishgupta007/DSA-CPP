#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter Number: ";
    cin>>n;

    cout<<"Enter I-th bit: ";
    cin>>i;

    int mask = 1 << i-1;

    if(n & mask){
        cout<<"I-th bit is 1";
    }else{
        cout<<"I-th bit is 0";
    }

}
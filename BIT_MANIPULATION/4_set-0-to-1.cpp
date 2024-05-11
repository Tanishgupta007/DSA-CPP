#include<iostream>
using namespace std;

int main()
{

    int n,i;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter i: ";
    cin>>i;
    int mask = 1 << i-1;

    n = n | mask;

    cout<<n;




    // int n = 5; //0101
    // int i = 2;
    // int mask = 1 << i-1;//0010
    // // 0101 -> 5
    // // 0010 -> mask
    // //-------
    // // 0111 -> 7
    // //-------
    // n = n | mask;

    // cout<<n; 
}
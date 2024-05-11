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

    mask = ~mask;

    n = n&mask;
    cout<<n;

    /*
    long  n = 10;
    int i = 4;

    int mask = 1 << (i-1);

    mask = ~mask;
    //n = 1010
    //mask = 1000
    //~mask= 0111

    // n& mask
    // 1010 ->10
    // 0111
    // 0010 ->2
    n = n & mask;

    cout<<n;

*/
}
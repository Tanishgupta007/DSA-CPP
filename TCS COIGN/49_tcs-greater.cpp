#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int m=INT_MIN;
    int c = 0;
    while (n--)
    {
        cin>>a;
        if(a > m){
            m = a;
            c++;
        }
        
    }
    cout<<c;
}
 
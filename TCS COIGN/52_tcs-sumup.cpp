#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r;
    cin>>r;
    int sum = 0;
    while(n){
        int digit = n % 10;

        sum+=digit;

        n = n/10; 
    }
    int sum1 = 0;
    while(r--){
        sum1+=sum;
    }
    int ans = 0;
    while(sum1){
        int digit = sum1%10;
        ans+=digit;
        sum1 = sum1/10;
    }

    cout<<ans;

}
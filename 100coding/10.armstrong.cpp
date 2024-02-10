#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n;
    int sum = 0;
    while (n>0)
    {
        int digit = n%10;
        sum = sum+(digit*digit*digit);
        n = n/10;
    }
    if (temp == sum)
    {
        cout<<"True";
    }else
    {
        cout<<"False";
    }
    
    

    n = n/10;

}
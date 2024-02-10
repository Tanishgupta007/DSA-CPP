#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;
    
    int product = 1;
    int sum = 0;
    int digit;
    int diff;
    while (num > 0)
    {
        digit = num % 10;
        num = num/10;
        product = product * digit;
        sum = sum+digit;
    }
    diff = product - sum;
    cout<<diff;
}
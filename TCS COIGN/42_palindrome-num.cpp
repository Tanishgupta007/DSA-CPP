#include<iostream>
using namespace std;

int check(int n)
{
    int y = 0;
    while(n){
        int digit = n % 10;
        y = y * 10 + digit;
        n = n/10;
    }
    return y;
}

int main()
{
    int n;
    cin>>n;

    int temp = n;
    int y = check(n);
    if(temp == y){
        cout<<"Number is a palindrome...";
    }else{
        cout<<"Number is not a palindrome...";
    }

}
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int s = num;
    int temp = num;

    string str1 = to_string(s);
    
    int leng = str1.length();
    int prod = 1;
    int sum = 0;
    while(num){
        int digit = num%10;
        sum = sum + pow(digit,leng);
        num = num/10;
    }
    if(sum == temp){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}
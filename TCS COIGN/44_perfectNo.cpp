#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num;
    cin>>num;
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            sum+=i;
        }
    }
    if(sum == num){
        cout<<"Yes "<<num<<" is a perfect number...";
    }else{
        cout<<"No...";
    }
    
}
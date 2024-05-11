#include<iostream>
#include<cmath>
using namespace std;

bool prime(int num){
    if(num == 0 || num == 1){
        return 1;
    }

    for (int i = 2; i*i <= num; i++)
    {
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cin>>num;

    bool ans = prime(num);
    if(ans){
        cout<<sqrt(num);
    }else{
        cout<<num<<" is not a prime number...";
    }
}
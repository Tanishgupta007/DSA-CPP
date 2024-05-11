#include<iostream>
using namespace std;
void fib(int n){
    int first = 0;
    int second = 1;
    cout<<first<<" "<<second<<" ";
    for (int i = 2; i < n; i++)
    {
        int curr = first + second;
        first = second;
        second = curr;

        cout<<curr<<" ";

    }
    
}

int main()
{
    int n;
    cin>>n;

    fib(n);
}
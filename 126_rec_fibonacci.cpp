// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;

//     cin >> n;

//     cout<<fib(n);
// }

#include<iostream>
using namespace std;


int fib(int n){
    if(n == 0){
        return 0;

    }if(n == 1){
        return 1;
    }
    int sum,a=0,b=1;

    for (int i = 2; i <= n; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
        
    }
    return sum;    
}
int main()
{
    int n;
    cin>>n;

    cout<<fib(n);
}
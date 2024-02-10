#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return ;
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fibonacci(n);
}
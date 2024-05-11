#include <iostream>
using namespace std;
int fibo(int n)
{
    int i = 0;
    int j = 1;

    int k;
    for (int ind = 3; ind <= n; ind++)
    {
        k = i + j;
        i = j;
        j = k;
    }

    cout << k;
}
int prime(int n)
{
    int count = 0; 
    for (int i = 1; ; i++)
    {
        bool flag = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            count++;

            if (count == n)
            {
                cout<<i;
                break;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n;
    if(n == 1){
        return 1;
    }
    n+=2;
    e = n / 2;

    if (n % 2 == 0)
    {
        prime(e);
    }
    else
    {
        fibo(e + 1);
 
    }
}
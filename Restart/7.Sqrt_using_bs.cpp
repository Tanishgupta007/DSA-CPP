#include <iostream>
using namespace std;

int sqrt_bs(int x)
{
    int start = 0;
    int end = x;

    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;

    cout<<sqrt_bs(x);
}
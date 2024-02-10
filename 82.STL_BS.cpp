#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(19);

    cout << "FInding 6 : " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound index: " << lower_bound(v.begin(), v.end(), 20) - v.begin() << endl;
    cout << "Upper bound index: " << upper_bound(v.begin(), v.end(), 20) - v.begin() << endl;

    int a = 4;
    int b = 41;

    cout << "Max is " << max(a, b) << endl;
    cout << "Min is " << min(a, b) << endl;

    swap(a, b);

    cout << "Swapped value of a is: " << a << endl;
    cout << "Swapped value of b is: " << b << endl;

    string s = "Tanish";

    reverse(s.begin(), s.end());

    cout << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
}
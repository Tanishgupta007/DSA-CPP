#include <iostream>
using namespace std;

char getMaxOcc(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;//index
            maxi = arr[i];
        };
    }
    char finalAnswer = 'a' + ans;

    return finalAnswer;
}
int main()
{
    string s;
    cin >> s;
    cout<<getMaxOcc(s);
}

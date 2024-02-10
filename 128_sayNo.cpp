// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string arr[10] = {"Zero", "one", "two", "three", "four", "Five", "six", "seven", "eight", "nine"};
//     int n;
//     cin >> n;

//     string words[10];

//     int i = 0;
//     while (n > 0)
//     {
//         int digit = n % 10;

//         n = n / 10;
//         words[i++] = arr[digit];
//     }
//     reverse(words, words+i);
//     for (int j = 0; j < i; j++)
//     {
//         cout<<words[j]<<" ";
//     }

// }

#include <iostream>
using namespace std;
void sayWords(string arr[], int n)
{
    if (n == 0) // length of n
    {
        return;
    }

    int digit = n % 10;

    n = n / 10;

    sayWords(arr, n);
    cout << arr[digit];
}
int main()
{
    string arr[10] = {"Zero", "one", "two", "three", "four", "Five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    sayWords(arr, n);
}
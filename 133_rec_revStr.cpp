
#include <iostream>
using namespace std;

void rev(string &str, int i, int j)
{
    if (i>j)
    {
        return;
    }
    swap(str[i++], str[j--]);
    
    rev(str, i, j);
}
int main()
{
    string str = "Tanish";
    int i = 0, j = str.length() - 1;

    rev(str, i, j);

    cout << str;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// string rev(string str)
// {
//     int i = 0, j = str.length() - 1;

//     while (i < j)
//     {
//         swap(str[i++], str[j--]);
//     }
//     return str;
// }
// int main()
// {
//     string str = "Tanish";

//     cout << rev(str);
//     // reverse(str.begin(),str.end());

//     // cout<<str;
// }
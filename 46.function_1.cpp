// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << ans;
// }

#include<iostream>
using namespace std;

int power(int a, int b){
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer = answer*a;
    }
    return answer;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<answer;

    return 0;    
}
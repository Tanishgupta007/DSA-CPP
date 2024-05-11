#include<iostream>
using namespace std;

int main()
{
    string num;

    cout<<"Enter num: ";
    cin>>num;
    int prod = 1;

    for(auto x : num){
        prod *= (x - '0'); 
    }

    cout<<prod;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     string num;
//     cout << "Enter n: ";
//     cin >> num;

//     int n = stoi(num);
//     int prod = 1;
//     while (n)
//     {
//         int digit = n % 10;
//         prod *= (digit);
//         n = n / 10;
//     }

//     cout << prod;
// }
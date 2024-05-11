#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char *arr = new char[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr " << i << " ";
        cin >> arr[i];
    }

    map<char,int> mp;
    char ans;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x : mp){
        if(x.second % 2 != 0){
            ans = x.first;
            cout<<ans;  
            break;
        }
    }



}





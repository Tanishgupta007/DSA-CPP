#include <iostream>
using namespace std;


bool check(string str){
    for (int i = 0; i < str.length()-1; i++)
    {
        for (int j = i+1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
            
        }
        
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    if (check(str) == true)
    {
        cout<<"All unique characters";
    }
    else
    {
        cout<<"Not all characters are unique";
    }
    
    
}
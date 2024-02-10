#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s1){
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    if (s1 == s2)
    {
        return true;
    }else
    {
        return false;
    }
    
}
int main()
{
    string s1;
    cin>>s1;
    if(palindrome(s1)){
        cout<<"yes, the string is palindrome";
    }else
    {
        cout<<"No, the string is not palindrome";
    }
    

}
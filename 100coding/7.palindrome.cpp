#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str1){

    string str2= str1;

    reverse(str2.begin(),str2.end());
    
    if (str1 == str2)
    {
        return true;
    }else{
        return false;
    }

}
int main()
{
    string str1;
    // string str1;
    cin>>str1;

    if(palindrome(str1)){
        cout<<"Is palindrome";
    }
    else
    {
        cout<<"Is not palindrome";
    }
    

}
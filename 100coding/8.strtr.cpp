#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[100];
    char s2[100];

    cin>>s1;
    cin>>s2;

    char *p;

    p = strstr(s1,s2);
    if (p)
    {
        cout<<"Str found !!! "<<endl;
        cout<<"The first occurance of string "<<s2 <<" in string "<<s1<<" is "<<p<<endl;
        
    }
    else
    {
        cout<<"String not found";
    }
    
    
}
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // 3 will be skiped
        }
        cout<<i<<endl;
        
    }
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break; // only 1 and 2 will be printed
        }
        cout<<i<<endl;
        
    }
    
}
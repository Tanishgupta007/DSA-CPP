#include<iostream>
using namespace std;

int prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<<"Not a Prime Number";
            break;
        }

        cout<<"Prime number";
        break;
        
        
    }
    
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}
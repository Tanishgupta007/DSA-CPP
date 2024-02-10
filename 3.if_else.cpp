#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value a : ";
    cin >> a;
    if (a > 0)
    {
        cout<<a<<" is +";
    }else if (a == 0)
    {
        cout<<a<<" is 0";
    }
    else
    {
        cout<<a<<" is -";
    }
    
    
}
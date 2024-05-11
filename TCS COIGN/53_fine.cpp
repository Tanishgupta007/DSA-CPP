#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" :";
        cin>>arr[i];
    }
    
    int d,fine;
    cout<<"Enter d :";
    cin>>d;

    cout<<"Enter fine: ";
    cin>>fine;
    int oddC = 0,evenC = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0){
            evenC++;
        }else{
            oddC++;
        }
    }
    if(d%2 == 0){
        cout<<fine*oddC;
    }else{
        cout<<fine*evenC;
    }
    

}
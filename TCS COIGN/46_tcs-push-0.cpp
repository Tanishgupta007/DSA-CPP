#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }
    
    int j=0,zero = 0;
    for (int i = 0; i < n; i++)
    {       
        if(arr[i] != 0){
           arr[j++] = arr[i];
        }else{
            zero++;
        }
    }

    for (int i =j; i < n; i++)
    {
        arr[i] = 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
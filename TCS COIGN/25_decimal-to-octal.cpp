#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int num;
    cin>>num;

    int i = 0;

    while(num){
        int rem = num % 8;
        arr[i] = rem;
        num = num/8;

        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout<<arr[j];
    }
    
}
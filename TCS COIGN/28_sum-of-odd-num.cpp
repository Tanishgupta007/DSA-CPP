#include<iostream>
using namespace std;

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        if(arr[i] % 2 != 0){
            sum+=arr[i];
        }
    }
    cout<<sum;   
}
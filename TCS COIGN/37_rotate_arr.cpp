#include<iostream>
using namespace std;

void rotateArr(int *arr,int k,int n){

    int *temp = new int[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i+k)%n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int k;
    cout<<"Enter k: ";
    cin>>k;

    rotateArr(arr,k,5);   
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    
}
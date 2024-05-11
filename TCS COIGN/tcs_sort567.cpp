#include<iostream>
using namespace std;

void sort_567(int *arr,int n){
    int start =0;
    int mid = 0;
    int end = n-1;

    while(mid <= end){
        if(arr[mid] == 5){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }else if(arr[mid] == 6){
            mid++;
        }
        else if(arr[mid] == 7){
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr "<<i<<" ";
        cin>>arr[i];
    }

    sort_567(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
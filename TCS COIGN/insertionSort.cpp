#include<iostream>
using namespace std;


void insertionSort(int *arr,int n){
    
    
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >=0; j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }

    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
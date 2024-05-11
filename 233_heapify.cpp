#include<iostream>
using namespace std;

void heapify(int arr[], int i, int n){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i] ,arr[largest]);
        heapify(arr, largest, n);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        swap(arr[1], arr[size]);
        size--;

        //for correct position
        heapify(arr, 1, size);
    }
}

int main()
{
    int arr[6] = {-1, 4,5 ,3,2,1};
    int n = 5;
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr, i, n);
    }
    

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    heapSort(arr,n);
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
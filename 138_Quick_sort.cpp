
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = start + count;

    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void QuickSort(int arr[], int start, int end)
{
    // base case

    if (start >= end)
    {
        return; // only single element left
    }

    // partition

    int p = partition(arr, start, end);

    // left part

    QuickSort(arr, start, p - 1);

    // right part

    QuickSort(arr, p + 1, end);
}
int main()
{
    int arr[6] = {5, 1, 1, 2, 0,0};

    int size = 6;

    QuickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// #include <iostream>
// using namespace std;

// int partition(int arr[], int start, int end)
// {
//     int pivot = arr[start];

//     int count = 0;

//     for (int i = start + 1; i <= end; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     // Swapping pivot

//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);

//     // swapping left and right elements

//     int i = start;
//     int j = end;
//     // pivot = arr[start];
//         cout<<pivot<<endl;

//     while (i < pivotIndex && j > pivotIndex)
//     {
//         cout<<pivot<<endl;
//         /* code */
//         while (arr[i] <= pivot)
//         {
//             i++;
//         }
//         while (arr[j] >= pivot)
//         {
//             j--;
//         }

//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int start, int end)
// {
//     // base case
//     if (start >= end)
//     {
//         return;
//     }

//     // partition
//     int p = partition(arr, start, end);

//     // left
//     quickSort(arr, start, p - 1);

//     // right
//     quickSort(arr, p + 1, end);
// }
// int main()
// {
//     int arr[10] = {1, 5, 2, 2, 2, 2, 2, 42, 56};
//     int size = 9;

//     quickSort(arr, 0, size - 1);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

/*

Coding Ninjas - Quick Sort

#include <bits/stdc++.h>

int partition(vector<int>& arr,int start,int end){

    int pivot = arr[start];
    int count = 0;

    for(int i = start+1;i<=end;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }

    int pivotIndex = start+count;

    swap(arr[pivotIndex],arr[start]);

    //swapping

    int i = 0, j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
                i++;
        }
        while(arr[j] > pivot){
                j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void solve(vector<int>& arr,int start, int end){

    //base case

    if(start >= end){
        return;
    }

    //partition
    int p = partition(arr,start,end);

    //left part
    solve(arr,start,p-1);

    //right part
    solve(arr,p+1,end);

}
vector<int> quickSort(vector<int> arr)
{
    solve(arr,0, arr.size()-1);
    return arr;
}


*/
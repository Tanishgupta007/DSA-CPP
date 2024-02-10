#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while (start<end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid+1;
        }else
        {
            end = mid;
        }
        mid = (start+end)/2;
        
    }
    return start;
}
int main()
{
    int arr[5] = {3,4,5,6,1};
    cout<<pivot(arr,5);
}
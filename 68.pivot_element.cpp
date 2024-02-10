#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;

    while (start < end)
    {
        if (arr[mid]>= arr[0])
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
    int arr1[5] = {3,4,5,1,6};
    cout<<pivot(arr1,5);
}
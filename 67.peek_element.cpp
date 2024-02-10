#include<iostream>
using namespace std;
int peek(int arr[],int n){
    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;

    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
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
    int arr1[5] = {1,3,4,2,1};
    cout<<peek(arr1,5);
}
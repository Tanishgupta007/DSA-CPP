#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }else if (key>arr[mid])
        {
            start = mid+1;
        }else
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;

    }
    return ans;    
}
int lastOcc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }else if (key>arr[mid])
        {
            start = mid+1;
        }else
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;

    }
    return ans;    
}
int main()
{
    int arr1[10];
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
    int key;
    cin>>key;    
    int index = firstOcc(arr1,size,key);
    int index1 = lastOcc(arr1,size,key);
    cout<<"first occ "<<index;
    cout<<endl;
    cout<<"last occ " <<index1;
}
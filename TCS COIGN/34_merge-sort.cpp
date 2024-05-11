#include<iostream>
using namespace std;


void mergeB(int *arr,int start,int end){


    int mid = start+(end-start)/2;
    int len1 = mid-start+1;
    int len2 = end-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid+1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    int i = 0,j = 0;
    mainIndex = start;
    while (i < len1 && j < len2){
        if(first[i] <= second[j]){
            arr[mainIndex++] = first[i++];
        }else{
            arr[mainIndex++] = second[j++];
        }
    }

    while(i < len1){
        arr[mainIndex++] = first[i++];
    }

    while (j < len2){
        arr[mainIndex++] = second[j++];
    }
    

}

void mergeSort(int *arr,int start,int end){

    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    mergeSort(arr,start, mid);
    mergeSort(arr,mid+1,end);

    mergeB(arr,start,end);


}

int main()
{
    int n;
    cout<<"Enter N: "; cin>>n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
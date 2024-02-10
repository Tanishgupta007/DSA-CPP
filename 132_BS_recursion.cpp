#include<iostream>
using namespace std;

bool bSearch(int arr[],int start,int end,int target){
    int mid = start + (end-start)/2;

    if(start>end){
        return 0;
    }

    if(target == arr[mid]){
        return mid;
    }
    if(target > arr[mid]){
        //start = mid+1; 
        return bSearch(arr,mid+1,end,target);
    }else{
        // end = mid-1;
        return bSearch(arr,start,mid-1,target);
    }

}
int main()
{
    int arr[100];
    int size;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter arr"<<i<<" ";
        cin>>arr[i];
    }

    int start = 0;
    int end = size-1;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<bSearch(arr,start,end,target);
}















// #include<iostream>
// using namespace std;

// int bSearch(int arr[],int n,int target){

//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start)/2;
//     while (start<end)
//     {
//         if(target == arr[mid]){
//             return mid;
//         }
//         if(target < arr[mid]){
//             end = mid-1;
//         }else{
//             start = mid+1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return -1;
//     }

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int target = 9;
//     int ans = bSearch(arr,10,target);
//     cout<<ans;
// }
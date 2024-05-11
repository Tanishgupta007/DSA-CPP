#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int k=3, n = 5;
    for (int i = 0; i <= n-k; i++)
    {
        for (int j = i; j < i+k; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}

// #include<iostream>
// #include<unordered_map>
// using namespace std;


// int *removeDup(int *arr,int &n){
//     unordered_map<int,bool> mp;

//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]] = true;
//     }
//     int *newarr = new int[mp.size()];
//     int index = 0;
//     for(auto x : mp){
//         newarr[index++] = x.first;
//     }
//     n = index;
//     return newarr;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter arr"<<i<<" :";
//         cin>>arr[i];
//     }

//     int *newArr = removeDup(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<newArr[i]<<" ";
//     }
    
    
// }












// // #include<iostream>
// // using namespace std;

// // void fibo(int n){
// //     int first = 0;
// //     int second = 1;
// //     if(n == 1){
// //         cout<<first;
// //     }
// //     cout<<first<<" "<<second<<" ";

// //     for (int i = 2; i < n; i++)
// //     {
// //         int third = first+second;
        
// //         cout<<third<<" ";
// //         first = second;
// //         second = third;
// //     }
    
// // }

// // int main()
// // {
// //     int n;
// //     cin>>n;

// //     fibo(n);
// // }










// // #include<iostream>
// // using namespace std;

// // int binarySearch(int *arr,int start,int end,int target){

// //     while(start <= end){
// //         int mid = start+(end-start)/2;

// //         if(target == arr[mid]){
// //             return mid;
// //         }else if(target > arr[mid]){
// //             start = mid+1;
// //         }else{
// //             end = mid-1;
// //         }
// //     }
// //     return -1;
// // }

// // int main()
// // {

// //     int n;
// //     cout<<"Enter n: ";
// //     cin>>n;

// //     int *arr = new int[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<"Enter arr"<<i<<" ";
// //         cin>>arr[i];
// //     }
// //     int target;
// //     cout<<"Enter target: ";
// //     cin>>target;

// //     int index1 = binarySearch(arr,0,n-1,target);
// //     cout<<target<<" found at index "<<index1;

// // }




















// // #include<iostream>
// // using namespace std;

// // int fact(int num){

// //     if(num == 0){
// //         return 1;
// //     }
// //     else{
// //         return num*fact(num-1);
// //     }
// // }

// // int main()
// // {
// //     int num;
// //     cin>>num;

// //     int ans = fact(num);
// //     cout<<ans;
// // }



















// // #include<iostream>
// // #include<string>
// // #include<algorithm>
// // using namespace std;

// // int main()
// // {
// //     string num;
// //     cin>>num;
// //     string n = num;
// //     reverse(num.begin(),num.end());
// //     bool ans;
// //     if(num == n){
// //         ans = 1;
// //     }else{
// //         ans = 0;
// //     }
// //     if(ans){
// //         cout<<"Yes it is palindrome";
// //     }else{
// //         cout<<"No it is not palindrome";

// //     }
// // }
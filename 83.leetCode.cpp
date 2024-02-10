// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector<int> arr;
//     int m;

//     cout<<"Enter position: ";
//     cin>>m;

//     arr.push_back(12);
//     arr.push_back(14);
//     arr.push_back(16);
//     arr.push_back(18);
//     arr.push_back(120);

//     for(auto i : arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     reverse(arr.begin()+m,arr.end());

//     for(auto i : arr){
//         cout<<i<<" ";
//     }
// }

#include <iostream>
using namespace std;

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(int arr[], int N)
{

    int start = 0;
    int end = N - 1;
    for (int i = 0; i < N; i++) 
    {
        while (start <= end)
        {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
}
int main()
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,N);
    printArray(arr, N);
}
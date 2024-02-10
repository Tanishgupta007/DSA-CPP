#include<iostream>
using namespace std;
bool lSearch(int arr[],int size,int target){
    if(size<=0){
        return 0;
    }
    if(arr[0] == target){
        return 1;
    }else{
        return lSearch(arr+1,size-1,target);
    }


}
int main()
{
    int arr[5] = {1,2,3,4,5};

    int target;
    cin>>target;

    if(lSearch(arr,5,target)){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
}





















// #include <iostream>
// using namespace std;

// int lSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[5] = {1, 2, 4, 6, 7};
//     int target = 7;

//     cout<<lSearch(arr, 5, target);
// }
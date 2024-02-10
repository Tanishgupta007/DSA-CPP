#include<iostream>
using namespace std;

int sumRec(int arr[],int size){
    if (size == 0)
    {
        return 0;
    }
    if(size == 1){
        return *arr;
    }
    int sum = 0;

    sum += arr[0];

    return sum + sumRec(arr+1,size-1);

    
}
int main()
{
    int arr[5] = {1,2,3,4,5};

    cout<<sumRec(arr,5);
}
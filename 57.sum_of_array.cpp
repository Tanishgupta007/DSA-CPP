#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1+=arr[i];
    }
    return sum1;

}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter arr "<<i<<" :";
        cin>>arr[i];
    }
    cout<<"The sum of values of array is "<<sum(arr,size);
}
#include<iostream>
using namespace std;

int max_arr(int arr1[], int n){
    int max1 = arr1[0];
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr1[0])
            {
                max1 = arr1[i];
            }      
    }
    return max1;
}
int main()
{
    int n;
    cin>>n;
    int arr1[10];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr"<<i<<" : ";
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<endl;
    }

    int maxx = max_arr(arr1,n);
    
    cout<<"max is "<<maxx;
}
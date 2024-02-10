#include<iostream>
using namespace std;
// arrays share the address not the value
int update(int arr[],int n){
    arr[0] = 12;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printed inside the function"<<endl;

    
}
int main()
{
    int arr[3] = {1,2,3};
    update(arr,3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Printed inside the main"<<endl;
    
}
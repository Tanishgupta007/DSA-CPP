#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0,zer = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[j++] = arr[i];
        }else{
            zer++;
        }
    }

    for (int i = j; i < n; i++)
    {
        arr[i] = 0;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

}
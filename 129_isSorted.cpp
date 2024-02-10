#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size<=1){
        return 1;
    }
    if (arr[0]>arr[1])
    {
        return 0;
    }
    else{
        return isSorted(arr+1,size-1);
    }

}
int main()
{
    int arr[10] = {2,4,6,9,11,13};

    if(isSorted(arr,6)){
        cout<<"The array is sorted." << endl;
    }else{
        cout<< "The array is not sorted." <<endl ;
    }
}
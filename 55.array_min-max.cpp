#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n){
    int min = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
        
    }
    return min;
    
}

int main()
{
    int size;
    cout<<"Enter size: ";
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<num[i];
    // }
    cout<<"Minimum Value is "<<getMax(num,size)<<endl;
    cout<<"Minimum Value is "<<getMin(num,size)<<endl;
}
#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,5,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> elementCount;

    for (int i = 0; i < size; i++)
    {
        elementCount[arr[i]]++;
    }

    for(const auto&pair: elementCount){
        cout<<pair.first<<" is present "<<pair.second<<" times."<<endl;
    }
    
    
}
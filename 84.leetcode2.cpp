#include <iostream>
#include <vector>
using namespace std; 

void sort012(vector<int> arr, int n)
{
   int count0 = 0,count1 = 0,count2 = 0;
   for(int num :arr){
       if(num == 0){
           count0++;
       }else if(num == 1){
           count1++;
       }else{
           count2++;
       }
   }

   int i = 0;
   while(count0>0){
       arr[i++] = 0;
       count0--;
   }
      while(count1>0){
       arr[i++] = 1;
       count1--;
   }
      while(count2>0){
       arr[i++] = 2;
       count2--;
   }
    for(int i:arr){
        cout<<i<<" ";
    }
}


int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(0);

    sort012(arr,5);

}
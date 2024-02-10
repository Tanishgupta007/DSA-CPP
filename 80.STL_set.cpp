#include<iostream>
#include<set>
using namespace std;

int main()
{
   set<int> s;

   s.insert(5); 
   s.insert(5); 
   s.insert(15); 
   s.insert(5); 
   s.insert(50);


   for(int i:s){
    cout<<i<<" ";
   } 
    cout<<endl;
   s.erase(s.begin());
   for(int i:s){
    cout<<i<<" ";
   } 
}
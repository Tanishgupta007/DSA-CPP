#include<iostream>
using namespace std;

bool check(int year){
    if(year % 4 == 0){
       
       if(year % 100 == 0){
           if(year % 400 == 0){
                return 1;
           }else{
                return 0; 
           }
       }
       
       return 1;
       
       
    }else{
        return 0;
    }
}

int main()
{
    int year;
    cin>>year;
    bool c = check(year);

    cout<<c;
}

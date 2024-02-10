#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl; // value of num
}

void updateAdd(int *p){
    p = p+1;
    cout<<"address Inside: "<<p<<endl;
}

void updateVal(int *p){
    *p = *p+1;
    cout<<"Value Inside: "<<*p<<endl;
}
int main()
{
    int num = 5;

    int *p = &num;

    // print(p);
    cout<<"Address Before : "<<p<<endl;
    updateAdd(p);
    cout<<"address after : "<<p<<endl;

    cout<<"Value Before : "<<*p<<endl;
    updateVal(p);
    cout<<"value after : "<<*p<<endl;
}
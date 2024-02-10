#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<a+b;
}
int sum(int a,int b,int c){
    cout<< a+b+c;
}
int main()
{
    int sum1 = sum(20,30);
    int sum2 = sum(20,30,40);
}
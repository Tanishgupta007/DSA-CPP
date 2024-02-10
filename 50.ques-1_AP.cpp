#include<iostream>
using namespace std;

int AP(int num){
    int ans = 3*num+7;

    return ans;
}
int main()
{
    int num;
    cin>>num;

    cout<<AP(num);
}
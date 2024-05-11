#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans = 0;
    for(int i=1;i<=10;i++){
        ans+= (i*num);
    }
    cout<<ans;


}
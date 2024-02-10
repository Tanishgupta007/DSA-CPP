#include<iostream>
using namespace std;

long long int binarySearch(int x){
    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid = (s+e)/2;
    while(s<=e){
        if((mid*mid) == x){
            return mid;
        }
        if((mid*mid)>x){
            e = mid-1;
        }else{
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

double morePrecision(int n,int sol,int precision){
    double factor = 1;
    double ans = sol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j < n; j = j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int sol = binarySearch(x);

    cout<<morePrecision(x,sol,3);
    cout<<sol;

}

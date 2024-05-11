#include<iostream>
using namespace std;

int main()
{
    int v,w;
    cin>>v;
    cin>>w;

    float x = (4*v-w)/2;

    if((w & 1) || (w < 2) || (w <= v)){
        cout<<"Invalid input";
    }

    cout<<"The number of two wheeler are "<<x<<" and four wheeler are "<<v-x;
}
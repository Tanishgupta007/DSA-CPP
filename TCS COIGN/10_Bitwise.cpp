#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>> a>>b;
    int c = a&b;
    cout<<"and: "<<c<<endl;
    c = a|b;
    cout<<"or: "<<c<<endl;

    c = ~a;
    cout<<"compliment: "<<c<<endl;
    

}
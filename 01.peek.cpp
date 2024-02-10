#include<bits/stdc++.h>

using namespace std;

int main()
{
    istringstream name("Tanish Gupta");

    char c1 = name.peek();
    char c2 = name.get();
    char c3 = name.get();
    cout<<c1<<c2<<c3;
}
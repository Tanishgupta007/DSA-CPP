#include<iostream>
using namespace std;

// This is will print 1 2 3 4 5
// void print(int n){
//     if(n == 0) return ;

//     print(n-1);
//     cout<<n<<endl;

// }
// This is will print 5 4 3 2 1
void print(int n){
    if(n == 0) return ;

    cout<<n<<endl;
    print(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}
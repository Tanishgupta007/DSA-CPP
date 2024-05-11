#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter A: ";
    cin>>a;
    
    cout<<"Enter B: ";
    cin>>b;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b;
}



// #include<iostream>
// using namespace std;

// int main()
// {
//     int a , b;

//     cout<<"Enter a: "<<endl;
//     cin>>a;
    
//     cout<<"Enter b: "<<endl;
//     cin>>b;


//     int temp;

//     temp = a;
//     a = b;
//     b = temp;

//     cout<<"a is "<<a<<endl;
//     cout<<"b is "<<b<<endl;

// }
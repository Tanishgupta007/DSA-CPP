//no of bits to be flipped to convert A to B 

#include<iostream>
using namespace std;

int main()
{
    int a ,b;
    cin >> a >>b;

    int temp = a ^ b; // here temp contains 0 and 1, o means the bits are same and 1 are the bits that need to be flipped
    int count = 0;
    while (temp!=0)
    {
        if(temp&1)
            count++;
        temp = temp >> 1;
    }

    cout<<"No of bits to be flipped are "<<count;
}
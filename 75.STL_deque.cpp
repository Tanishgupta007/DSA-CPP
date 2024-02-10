#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for(int i:d){
        cout<<i;
    }
    cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i;
    }

    cout<<endl;
    cout<<"FIrst index element  is "<<d.at(1);
}
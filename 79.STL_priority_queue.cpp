#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Max-heap
    priority_queue<int> p;

    priority_queue<int , vector<int> , greater<int>> mini;

    p.push(11);
    p.push(2);
    p.push(32);
    p.push(4);

    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
// -----------------------------------mini
    mini.push(11);
    mini.push(2);
    mini.push(32);
    mini.push(4);

    int n1 = mini.size();
    for (int i = 0; i < n1; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    

    
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Tanish");
    q.push("Tanish1");
    q.push("Tanish2");

    cout<<"Size before pop : "<<q.size()<<endl;

    cout<<"First Element is : "<<q.front()<<endl;
    q.pop();
    cout<<"First Element is : "<<q.front()<<endl;
    cout<<"Size after pop : "<<q.size();

}
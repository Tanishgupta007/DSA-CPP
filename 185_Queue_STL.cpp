#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //create a queue
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    // cout<<q;


    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    

    if(q.empty()){
        cout<<"Queue is empty!!!"<<endl;
    }else{
        cout<<"Queue is not empty!!!"<<endl;

    }
}
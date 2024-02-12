// Interleave the first half of the queue using using stack;

//Note it will only work for even number  of elements in Queue. If there are odd numbers, then one element will be left out.
#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void interleave(queue<int> &q){

    if(q.size() % 2 != 0){
        cout<<"Initialize the queue with even number of elements."<<endl;
    }
    stack<int> s;
    //step1:store the first half of Q to stack

    int mid = q.size()/2;

    for(int i = 0;i<mid;i++){
        s.push(q.front());
        q.pop();
    }

    // step2: push the elements of stack to Q;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    //step3: pop first half of Q and push to back
    for (int i = 0; i < mid; i++)
    {
        int value  = q.front();
        q.push(value);
        q.pop();
    }
    
    //step4: first half of Q to stack;

    for (int i = 0; i < mid; i++)
    {
        s.push(q.front());
        q.pop();
    }

    //step5: combine
    while(!s.empty()){
        int value = s.top();
        q.push(value);
        s.pop();

        value = q.front();
        q.push(value);
        q.pop();

    }
    

}
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    interleave(q);

    int len = q.size();
    for (int i = 0; i < len; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
#include <iostream>
using namespace std;

class queue
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue(int s){
        this->size = s;
        arr = new int[s];
        front = -1; // front and rear both at -1 in circular queue
        rear = -1;
    }
    
    void push(int value){
        //for checking that the stack is full or not

        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))
        {
            cout<<"Queue is full !!!"<<endl;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] = value;
        }else if (rear == size-1 && front!=0){
            rear = 0;
            arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }
    int pop(){
        if(front == -1 && rear == -1){
            cout<<"Can't dequeue! Queue is empty."<<endl;
        }
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){//single element
            front = rear = -1; //releasing memory
        }else if(front == size-1){
            front = 0; //for cyclic nature of the queue
        }else{
            front++;
        }
        return ans;
    }

    void qfront(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<< arr[front];
        }
    }

};
int main()
{
    queue q(5);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    //here if we  try to push a fifth time, it will give an overflow error as the queue is full, so we will push after poping the front element
    
    q.pop();
    q.push(45);
    q.qfront();


}
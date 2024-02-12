// Queue implementatio using arrays

#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    queue(int s)
    {
        this->size = s;
        arr = new int[s];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int pop(){
        if(front == rear){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            int popped_element = arr[front];
            arr[front] = -1;
            front++;

            if(front == rear){
                front = 0;
                rear = 0;
            }
            return popped_element;
        }
    }

    int front1(){
        if(front == rear){
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return 1;
        }else{
            return 0;
        }
    }
};

int main()
{

    queue q(10);
    
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.front1()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.front1()<<endl;

    cout<<q.isEmpty();
}
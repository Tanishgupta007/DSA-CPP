// k-queues in an array

#include <iostream>
using namespace std;

class KQueue
{
public:
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

public:
    KQueue(int n, int k)
    {
        this->n = n;
        this->k = k;

        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freespot = 0;
    }
    void enqueue(int data, int qn)
    {
        // overflow
        if (freespot == -1)
        {
            cout << "No empty space is present!";
            return;
        }

        // find first free index;
        int index = freespot;

        // update the free spot
        freespot = next[index]; // because in next array , the element at index 'i' is pointed to by 'i+1'.

        // check whether first element

        if (front[qn - 1] == -1)
        {
            // empty queue so add it as first element
            front[qn - 1] = index;
            rear[qn - 1] = index;
        }
        else
        {
            // link new element  with last one
            next[rear[qn - 1]] = index;
        }
        // update next

        next[index] = -1; // because value is added so no freeSpace available

        // update rear

        rear[qn - 1] = index;

        // push element
        arr[index] = data;
    }
    int dequeue(int qn)
    {
        // underflow condition

        if (front[qn - 1] == -1)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // freeslot ko manage kro
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
int main()
{
    KQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);

    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
}
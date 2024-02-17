#include <iostream>
#include <queue>
using namespace std;

class KQueue
{
public:
    int *front;
    int *rear;
    int freespot;
    int *arr;
    int *next;
    int k; // parts
    int n; // total elements

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

        // next array update
        next = new int [n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1; // updating last index to -1 as no next free space left

        // initializing array
        arr = new int[n];
        freespot = 0;
    }

    void enqueue(int data, int qn)
    {
        if (freespot == -1) // queue is full and no space left
        {
            cout << "Queue is full" << endl;
            return;
        }
        int index = freespot;

        // update freespot
        freespot = next[index];

        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index; // if the element is first and there is no other element
            rear[qn - 1] = index;
        }
        else
        {
            // if it is not first element then
            next[rear[qn - 1]] = index;
        }

        // update freespot
        next[index] = -1; // because we have pushed the element at that space

        // update rear
        rear[qn - 1] = index;

        // push input
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        // index to pop

        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // freespot ko manage kro

        next[index] = freespot;
        freespot = index;

        // return
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
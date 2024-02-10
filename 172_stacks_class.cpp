#include <iostream>
using namespace std;

class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size]; // dynamic allocation
        top = -1;            // top is at -1 index as stack is empty initially.
    }
    // functions
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow! Can't Push.\n";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow!\nCan't Pop.";
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "No Elements in the Stack\n";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack s(5);

    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);
    s.push(55);//stack overflow as size is 5
    s.pop();
    cout << s.peek() << endl;
    if (s.isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }

}
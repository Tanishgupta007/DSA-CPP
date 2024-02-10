#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;  // top of the stack
    int size; // size of the stack

    Stack(int s)
    {
        this->size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int element)
    {
        // pushing element to the stack;

        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "The stack is full!! Can't push an element." << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout << arr[top] << " popped !" << endl;
            top--;
        }
        else
        {
            cout << "Stack underflow!!" << endl;
        }
    }
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " -> ";
        }
        cout << "X";
    }
};
int main()
{
    int size;
    cout << "Enter the size of the stack you want to create ?: " << endl;

    cin >> size;

    Stack s1(size);

    int choice;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements you want to push: " << endl;
        cin >> choice;

        s1.push(choice);
    }

    s1.print();
    cout << endl;
    cout << "Enter how many elements you want to pop: " << endl;
    cin >> choice;
    for (int i = 0; i < choice; i++)
    {
        s1.pop();
    }

    s1.print();
}

// Reverse a string using stack

#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int top;
    char *arr;

    Stack(int s)
    {
        this->size = s;
        top = -1;
        arr = new char[s];
    }

    void push(char element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack full" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            cout << arr[top] << " ";
            top--;
        }
        else
        {
            cout << "Stack empty" << endl;
        }
    }
};
int main()
{
    int size = 6;
    Stack s1(size);

    string str1;

    cout<<"Enter the string: ";
    cin>>str1;
    char element;
    for (int i = 0; i < size; i++)
    {

        element = str1[i];
        s1.push(element);
    }

    for (int i = 0; i < size; i++)
    {
        s1.pop();
    }
}


// Reverse a string using stack - char
/*

#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int top;
    char *arr;

    Stack(int s)
    {
        this->size = s;
        top = -1;
        arr = new char[s];
    }

    void push(char element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack full" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            cout << arr[top] << " ";
            top--;
        }
        else
        {
            cout << "Stack empty" << endl;
        }
    }
};
int main()
{
    int size = 6;
    Stack s1(size);

    char element;
    for (int i = 0; i < size; i++)
    {

        cin >> element;
        s1.push(element);
    }

    for (int i = 0; i < size; i++)
    {
        s1.pop();
    }
}
*/
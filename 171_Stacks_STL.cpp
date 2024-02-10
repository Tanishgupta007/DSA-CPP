#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s; // creation of stack

    s.push(5);
    s.push(10);

    s.pop();
    s.pop();

    cout << "Printing top element: " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}
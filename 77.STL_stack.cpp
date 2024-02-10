#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Tanish");
    s.push("Tanish1");
    s.push("Tanish2");

    cout << "Top element: " << s.top() << endl;
    s.pop();

    cout << "Top element: " << s.top() << endl;

    cout << "Size : " << s.size() << endl;
    cout << "Empty or not : " << s.empty();
}

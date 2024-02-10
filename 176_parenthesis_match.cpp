#include <iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char>s1;

    for (int i = 0; i < s.length(); i++)
    {
        // current character
        char ch = s[i];
        // if open bracket , push to the stack;
        // if close bracket, check stacktop and pop;

        if (ch == '(' || ch == '{' || ch == '[')
        {
            // if open bracket push to stack
            s1.push(ch);
        }
        else
        {
            // if close bracket
            if (!s1.empty())
            {
                char top = s1.top();

                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{'))
                {
                    s1.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if(s1.empty()){
        return true;
    }else{
        return false;
    }
}

int main()
{

    string s = "[()]}";
    if (isValidParenthesis(s))
    {
        cout << "The expression is valid." << endl;
    }
    else
    {
        cout << "The expression is not valid." << endl;
    }
}
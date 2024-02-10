//  Insert An Element At Its Bottom In A Given Stack

/*
#include <bits/stdc++.h>

void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();

    //poping top element
    s.pop();

    //Recursive call
    solve(s, x);

    //Pushing back the popped element
    s.push(num);

}
stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    solve(myStack,x);


    return myStack;
}
  */
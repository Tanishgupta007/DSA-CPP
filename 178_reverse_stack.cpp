// Reverse stack using recursion

/*
void insertatBottom(stack<int>&s,int num)
{
    //base case
    if(s.empty()){
        s.push(num);
        return;
    }

    int ele = s.top();

    s.pop();

    //recursive call
    insertatBottom(s, num);

    s.push(ele);
}


void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()){
        return;
    }

    //storing top and pop
    int num = stack.top();
    stack.pop();


    //recursive call
    reverseStack(stack);

    insertatBottom(stack,num);


}

*/
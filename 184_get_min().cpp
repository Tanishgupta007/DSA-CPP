/*
 Design a stack that supports getMin() in O(1) time and O(1) extra space

#include<stack>

class SpecialStack {

    stack<int>s;
    int mini;

    public:
        
    void push(int data) {
        //for 1st element 
        if(s.empty()){
            s.push(data);
            mini = data;
        }else{
            //for other element;

            if(data<mini){
                s.push(2*data-mini);
                mini = data;
            }else{
                s.push(data);
            }
        }
    }

    void pop() {
        // Implement the pop() function.
        if(s.empty()){
            return;
        }
        int curr = s.top();
        s.pop();
        if(curr < mini){
            mini = 2*mini - curr;
        }
    }


    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }

        int curr = s.top();

        if(curr < mini){

            return mini;
        }else{
            return curr;
        }
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }

        return mini;
    }  
};*/
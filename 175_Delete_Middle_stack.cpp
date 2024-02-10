// Delete middle element of the stack

#include <iostream>
#include <stack>
using namespace std;


void solve(stack<int>& s1,int count,int size){
    //base case
    if(count == size/2){
        s1.pop();
        return;
    }

    //store top element in another variable

    int num = s1.top();
    s1.pop(); // store and pop top element

    solve(s1,count+1,size);

    //restore the element
    s1.push(num);
}

void print(stack<int> s1)
{
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop(); 
    }cout<<endl;
}

int main()
{
    stack<int> s1;

    int size;
    cout<<"Enter size: ";
    cin>>size;

    int count = 0;

    int element;

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        s1.push(element);
    }

    solve(s1,count,size);

    print(s1);

}

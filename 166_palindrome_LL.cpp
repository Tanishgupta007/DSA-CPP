/*


//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*
class Solution{
  public:
    //Function to check whether the list is palindrom.
    
    int getLength(Node* &head){
        Node* temp = head;
        
        int length1 = 0;
        while(temp != NULL){
            length1 ++;
            temp = temp->next;
        }
        return length1;
    }
    bool isPalindrome(Node *head)
    {
        Node*temp = head;
        
        int length = getLength(head);
        int *arr = new int[length];
        int i = 0;
        while(temp!= NULL){
            arr[i] = temp->data;
            i++;
            temp = temp->next;
        }
        
        int start = 0;
        int end = length-1;
        
        while(start<end){
            if(arr[start] == arr[end]){
                start++;
                end--;
            }else{
                delete[] arr;
                return 0;
        }
        }
        delete[] arr;
        return 1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
/*
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

*/

// } Driver Code Ends



// -------------Approach 2

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*
class Solution{
  public:
    //Function to check whether the list is palindrom.
    
    int getLength(Node* &head){
        Node* temp = head;
        
        int length1 = 0;
        while(temp != NULL){
            length1 ++;
            temp = temp->next;
        }
        return length1;
    }
    bool isPalindrome(Node *head)
    {
        Node*temp = head;
        
        int length = getLength(head);
        int *arr = new int[length];
        int i = 0;
        while(temp!= NULL){
            arr[i] = temp->data;
            i++;
            temp = temp->next;
        }
        
        int start = 0;
        int end = length-1;
        
        while(start<end){
            if(arr[start] == arr[end]){
                start++;
                end--;
            }else{
                delete[] arr;
                return 0;
        }
        }
        delete[] arr;
        return 1;
    }
};

*/

//{ Driver Code Starts.
/* Driver program to test above function*/

/*
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}
*/

// } Driver Code Ends
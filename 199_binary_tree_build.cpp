#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

void buildFromLevelOrder(node* &root){

    queue<node*> q;

    int data;
    cout<<"Enter the data "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftdata;
        cout<<"Enter the left data of "<<temp->data<<endl;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        int rightdata;
        cout<<"Enter the right data of "<<temp->data<<endl;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

int main()
{
    node* root = NULL;
    
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
}
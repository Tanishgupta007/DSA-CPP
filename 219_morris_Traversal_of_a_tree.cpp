#include<iostream>
using namespace std;

class node{
    public:  
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node *root){
    int data;
    cout<<"Enter data : ";
    cin>>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the left of "<< root->data << endl;
    root->left = buildTree(root->left);

    cout<<"Enter the right of "<< root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrder(node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void morrisTraversal(node* root){
    if(root == NULL){
        return ;
    }

    node* current = root;

    while(current != NULL){
        if(current->left  == NULL){ //left not exists 
            cout<<current->data<<" ";
            current = current->right;
        }else{ //left exists

            node* pre = current->left;
            while (pre->right!=NULL && pre->right != current){
                pre = pre->right;
            }
            
            //temperory link creation
            if(pre->right == NULL){
                pre->right = current;
                current = current->left;
            }
            // temperory link removal
            else{
                pre->right = NULL;

                cout<<current->data<<" ";
                current = current->right;
            }
        }
    }

}


int main()
{
    node* root = NULL;

    root = buildTree(root);  //build the tree here

    inOrder(root);

    cout<<endl;

    morrisTraversal(root);
    
}
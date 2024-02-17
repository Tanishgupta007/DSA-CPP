#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter data: " << endl;

    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left of " << root->data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the right of " << root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
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

void inOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root;
    root = buildTree(root);

    levelOrderTraversal(root);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
}

// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {

// public:
//     int data;
//     node *left;
//     node *right;

//     // constructor

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildTree(node *root)
// {
//     int data;
//     cout << "Enter the data: ";
//     cin >> data;

//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "left to " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "right to " << data << endl;
//     root->right = buildTree(root->right);
// }

// void levelOrderTraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;

//             if (!q.empty())
//             {
//                 q.push(NULL); // for next line
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";

//             if (temp->left) // when not NULL
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right) // when not NULL
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void inOrder(node *root)
// {
//     //base case
//     if(root == NULL){
//         return ;
//     }

//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

// void preOrder(node *root){
//     if(root == NULL){
//         return ;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);

// }

// void postOrder(node *root){
//     if(root == NULL){
//         return;
//     }

//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// int main()
// {
//     node *root;

//     root = buildTree(root);

//     levelOrderTraversal(root);

//     inOrder(root);
//     cout<<endl;
//     preOrder(root);
//     cout<<endl;
//     postOrder(root);
//     cout<<endl;
// }
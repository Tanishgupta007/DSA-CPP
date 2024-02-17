#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data: ";
    int data;
    cin >> data;

    root = new node(data);

    // if data is -1 then return NULL
    if (data == -1)
    {
        return NULL;
    }
    // recursively build left and right subtrees
    cout << "For left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "For right of " << data << endl;
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

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL); //for next line
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
void inOrder(node * root){
    //base case
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

} 

void preOrder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void postOrder(node* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{

    node *root = NULL;

    root = buildTree(root);
    
    cout<<"Level order traversal: ";
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Inorder traversal: ";
    inOrder(root);
    cout<<endl;
    cout<<"preorder traversal: ";
    preOrder(root);
    cout<<endl;
    cout<<"postorder traversal: ";
    postOrder(root);
    cout<<endl;

    //1 3 7 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
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
//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;

//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "Enter the data to enter in left of " << data << ": ";
//     root->left = buildTree(root->left);

//     cout << "Enter the data to enter in right of " << data << ": ";
//     root->right = buildTree(root->right);

//     return root;
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
//         { // purana level complete ho chuka hai

//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }
// int main()
// {
//     node *root = NULL;
//     root = buildTree(root);

//     // 1 3 7 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1
//     // level order travel
//     levelOrderTraversal(root);
// }

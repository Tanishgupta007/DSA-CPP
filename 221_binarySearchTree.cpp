#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int d)
{

    // firest element
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right part
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void lvlOrderTraversal(Node *root)
{
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void inPre(Node *root,Node* &pre, int element)
{
    if (root == NULL)
    {
        return;
    }
    if(root->data == element){
        if(root->left != NULL){
            Node* temp = root->left;
            while(temp->right!=NULL){
                temp = temp->right;
            }

            pre = temp;
            return ;
        }
    }

    if (element > root->data)
    {
        pre = root;
        inPre(root->right,pre, element);
    }
    else
    {
        inPre(root->left,pre, element);
    }
}

void inSuc(Node* root, Node* &suc, int element){

    if(root == NULL){
        return;
    }
    if(root->data == element){
        if(root->right != NULL){
            Node* temp = root->right;

            while(temp->left!=NULL){
                temp = temp->left;
            }
            suc = temp;
            return;
        }
    }

    if(element < root->data){

        suc = root;
        inSuc(root->left,suc,element);
    }else{
        inSuc(root->right,suc,element);
    }

}

Node* deleteFromBST(Node* root,int ele){

    if(root == NULL){
        return root;
    }
    if(root->data == ele){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child

        if(root->left!=NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;

            root->data = mini;

            root->right = deleteFromBST(root->right, mini);

            return root;


        }





    }else if(root->data > ele){
        //left part
        root->left = deleteFromBST(root->left, ele);
        return root;
    }else{
        root->right = deleteFromBST(root->right, ele);
        return root;
    }
}



int main()
{
    Node *root = NULL;
    cout << "Enter data to store in BST: ";
    takeInput(root);
    // 10 8 21 7 27 5 4 3 -1
    lvlOrderTraversal(root);

    cout << "Minimum value is : " << minVal(root)->data << endl;
    cout << "Max  value is : " << maxVal(root)->data << endl;
    cout << "Inorder: ";
    inOrder(root);
    cout<<endl;

    Node* pre = NULL;
    inPre(root,pre, 27);
    if(pre!=NULL){
        cout << pre->data;
    }
    cout<<endl;
    Node* suc = NULL;
    inSuc(root,suc,10);

    if(suc!=NULL){
        cout<<suc->data;
    }


    root = deleteFromBST(root, 30);
    inOrder(root);
    cout<<endl;

}













// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *insertintoBST(Node *root, int d)
// {

//     if (root == NULL)
//     {
//         root = new Node(d);
//         return root;
//     }

//     if (d > root->data)
//     {
//         // right part
//         root->right = insertintoBST(root->right, d);
//     }
//     else
//     {
//         // left part
//         root->left = insertintoBST(root->left, d);
//     }
//     return root;
// }
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;

//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         { // new line print ---- press enter

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
// void takeInput(Node *&root)
// {
//     int data;
//     cin >> data;

//     while (data != -1)
//     {
//         root = insertintoBST(root, data);
//         cin >> data;
//     }
// }

// int main()
// {
//     Node *root = NULL;

//     cout << "Enter data to add in BST : " << endl;
//     takeInput(root);
//     levelOrderTraversal(root);
// }
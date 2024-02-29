#include <iostream>
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
        this->left = left;
        this->right = right;
    }
};
Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data: ";
    cin >> data;

    root = new Node(data);

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

void morris(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Node *current = root;
    while (current != NULL)
    {
        if (current->left == NULL)
        { // if left doesn't exists
            cout << current->data << " ";
            current = current->right;
        }
        else
        { // if  left exists
            Node *pre = current->left;
            while (pre->right != NULL && pre->right != current)
            {
                pre = pre->right;
            }
            // temp link creation
            if (pre->right == NULL)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                // temp link removal
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    inOrder(root);

    cout<<endl;

    morris(root);
}
    #include<iostream>
    #include<vector>
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
        if (root == NULL)
        {
            root = new Node(d);
            return root;
        }
        else
        {
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
    }

    void take_input(Node *&root)
    {
        int d;
        cin >> d;

        while (d != -1)
        {
            root = insertIntoBST(root, d);
            cin >> d;
        }
    }
    void inOrder(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }

        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }
    Node* buildPreOrder(Node* &root, vector<int> &ans, int &i){

        if( i >= ans.size()){

            return NULL;
        }
        root = new Node(ans[i++]);
            
        buildPreOrder(root->left, ans, i);
        buildPreOrder(root->right, ans, i);

        return root;

    }

    void preOrder(Node* root){

        if(root == NULL){
            return;
        }

        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);

    }
    int main()
    {
        Node *root = NULL;

        take_input(root);
        vector<int> ans;

        inOrder(root, ans);
        int i = 0;
        
       root = buildPreOrder(root, ans, i);

        preOrder(root);
    }
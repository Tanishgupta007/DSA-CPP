// Construct BST from Preorder Traversal - coding ninjas    

//Approach 1:(N2)

TreeNode* insertInBST(TreeNode* &root, int data){
    if(root == NULL){
        root = new TreeNode(data);
        return root;
    }

    if(data > root->data){
        root->right = insertInBST(root->right, data);
    }else{
        root->left = insertInBST(root->left, data);
    }
    return root;
}

void take_input(TreeNode* &root, vector<int> &preOrder, int &index){
    
    if(index<preOrder.size() && preOrder[index] != -1){

        int data = preOrder[index++];

        root = insertInBST(root,data);
        take_input(root, preOrder,index);
    }else{
        index++;
    }
    
}
TreeNode *preOrderTree(vector<int> &preOrder)
{
    TreeNode* root = NULL;
    int index=0;
    take_input(root, preOrder, index);

    return root;
}

//
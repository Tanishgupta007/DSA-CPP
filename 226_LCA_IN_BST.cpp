//prev gfg

//coding ninjas

//recursive method

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    if(root == NULL){
        return NULL;
    }


    if(root->data < P->data && root->data < Q->data){
        //right part
        return LCAinaBST(root->right, P, Q);
    }
    if(root->data > P->data && root->data > Q->data){
        //left part
        return LCAinaBST(root->left, P, Q);
    }
    
        return root;
    
}

//iterative method
TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
        //iterative method
    while(root!=NULL){
        if(root->data > P->data && root->data > Q->data){
            //left part
            root = root->left
        }else if (root->data < P->data && root->data < Q->data){
            root = root->right;      
        }else{

            return root;
        }
    }
}


bool isBST(BinaryTreeNode<int>* root, int min,int max){

    //base case
    if(root == NULL){
        return true;
    }

    if(root->data >= min && root->data <= max )
    {
        bool left = isBST(root->left, min, root->data-1);
        bool right = isBST(root->right, root->data+1, max);

        return left && right; 
        //if both are true that it will return true
    }else{
        return false;
    }

}

bool validateBST(BinaryTreeNode<int>* root) 
{
    return isBST(root,INT_MIN,INT_MAX);
}
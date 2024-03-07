//coding ninjas
void inOrder(TreeNode<int>* root, vector<int> &in)
{
    if(root == NULL){
        return;
    }

    inOrder(root->left, in);

    in.push_back(root->data);
    
    inOrder(root->right, in);

}
TreeNode<int>* inorderToBST(int s, int e, vector<int> in){
    //base case
    if(s>e){
        return NULL;
    }
    
    int mid = (s+e)/2;

    TreeNode<int>* root = new TreeNode(in[mid]);

    root->left = inorderToBST(s, mid-1, in);
    root->right = inorderToBST(mid+1, e, in);

    return root;

}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> in;

    inOrder(root, in);
    
    return inorderToBST(0,in.size()-1, in);


}
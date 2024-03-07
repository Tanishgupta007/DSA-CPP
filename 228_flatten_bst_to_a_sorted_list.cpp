// coding ninjas


void inOrder(TreeNode<int>* root, vector<int> &inOrderVal){
    if(root == NULL){
        return;
    }    

    inOrder(root->left,inOrderVal);
    inOrderVal.push_back(root->data);
    inOrder(root->right,inOrderVal);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    
    //1st store inorder 
    vector<int> inOrderVal;

    inOrder(root, inOrderVal);

    int n = inOrderVal.size();

    TreeNode<int>* newNode = new TreeNode<int>(inOrderVal[0]);
    TreeNode<int>* curr = newNode;
    //2nd left NULL and right next

    for(int i = 1;i <n;i++){
        TreeNode<int> *temp = new TreeNode<int>(inOrderVal[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    
    //3rd last element : left and right NULL
    curr->left = NULL;
    curr->right = NULL;
   
   return newNode;
}
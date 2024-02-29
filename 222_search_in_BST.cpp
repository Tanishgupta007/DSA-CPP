//Approach 1 : recursive approach

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL){
        return 0;
    }
    if(root->data == x){
        return 1;
    }
    if(root->data > x){
        return searchInBST(root->left, x);
    }else{
        return searchInBST(root->right, x)
    }
}

//Approach 2: iterative approach

bool searchInBST(BinaryTreeNode<int> *root, int x) {

    BinaryTreeNode<int> *temp = root;

    while(temp != NULL){

        if(temp->data == x){
            return 1;
        }
        if(x > temp->data){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }
    return 0;
}

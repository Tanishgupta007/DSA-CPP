//coding ninjas


void inOrder(BinaryTreeNode<int>* root,vector<int> &in){
    if(root == NULL){
        return;
    }
    inOrder(root->left, in);

    in.push_back(root->data);
    inOrder(root->right, in);
    
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inOrderStore;

    inOrder(root, inOrderStore);

    int i = 0;
    int j = inOrderStore.size()-1;
    while(i < j){

        int sum = inOrderStore[i] + inOrderStore[j];

        if(sum == target){
            return true;
        }
        if (sum < target) {
            i++;
        }else if(sum > target){
            j--;
        }
    }
    return 0;
}
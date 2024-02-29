void predeccor(TreeNode* root, TreeNode* &pre, int key){

    if(root == NULL){
        return;
    }

    if(root->data == key){
        if(root->left!=NULL){
            TreeNode* temp = root->left;
            while(temp->right != NULL){
                temp = temp->right;
            }
            pre = temp;
        }
        return;
    }

    if(root->data < key){
        pre = root;
        predeccor(root->right, pre, key);
    }else{
        predeccor(root->left, pre, key);
    }
}
void successor(TreeNode *root, TreeNode* &suc, int key){
    if(root == NULL){
        return;
    }    

    if(root->data == key){
        if(root->right != NULL){
            TreeNode* temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }

            suc = temp;
        }
        return;
    }

    if(root->data > key){
        suc = root;
        successor(root->left, suc, key);

    }else{
        successor(root->right, suc, key);
    }

}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    pair<int, int> ans;
    TreeNode* pre = NULL;
    TreeNode* suc = NULL;
    predeccor(root, pre,key);
    if(pre!=NULL){
        ans.first = pre->data;
    }else{
        ans.first = -1;
    }
    successor(root, suc,key);
    if(suc!=NULL){

        ans.second = suc->data;
    }else{
        ans.second = -1;
    }


    return ans;
}
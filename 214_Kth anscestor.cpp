/*Approach 1*/

void solve(Node* root, int k,int node,vector<int> &ans,int &val)
{
    if(root == NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->data == node){
        return;
    }
    solve(root->left,k,node,ans,val);
    solve(root->right,k,node,ans, val);
    int size = ans.size();
    for(int i = size-1;i>=k;i--){
        val = ans[size];
    }

}

int kthAncestor(Node *root, int k, int node)
{
    vector<int> ans;
    int val = 0;

    solve(root,k,node,ans, val);
    
    return val;
    
}



// Approach 2


Node* solve(Node* root,int &k ,int node){
    if(root == NULL){
        return NULL;
    }
    
    if(root->data == node){
        return root;
    }
    
    Node* leftAns = solve(root->left,k,node);
    Node* rightAns = solve(root->right,k,node);
    
    
    if(leftAns != NULL && rightAns == NULL){
        
        k--;
        if(k <= 0){
            //ans lock
            k = INT_MAX;
            
            return root;
        }
        
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL){
        
        k--;
        if(k <= 0){
            //ans lock
            k = INT_MAX;
            
            return root;
        }
        
        return rightAns;
    }
    return NULL;
}

// your task is to complete this function
int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root,k,node);
    if(ans == NULL || ans->data == node){
        return -1;
    }else{
        return ans->data;
    }
}
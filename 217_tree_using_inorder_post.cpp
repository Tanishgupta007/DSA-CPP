// ṭree using inorder and post order


void createMapping(int in[],map<int,int> &nodeToIndex,int n){
    for(int i = 0;i< n; i++){
        nodeToIndex[in[i]] = i;
    }
}
Node* solve(int in[],int post[],int &index,int inStart,int inEnd,map<int,int> &nodeToIndex,int n){
    if(index < 0 || inStart > inEnd){
        return NULL;
    }            
    
    int element = post[index--];
    
    Node* root = new Node(element);
    
    int position = nodeToIndex[element];
    
    root->right = solve(in,post,index,position+1,inEnd,nodeToIndex,n);
    root->left = solve(in,post,index,inStart,position-1,nodeToIndex,n);
    
    return root;
}
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    int postOrderIndex = n-1;
    map<int,int> nodeToIndex;
    
    createMapping(in,nodeToIndex,n);
    Node* ans = solve(in,post,postOrderIndex,0,n-1,nodeToIndex,n);
                                                  
    return ans;
}

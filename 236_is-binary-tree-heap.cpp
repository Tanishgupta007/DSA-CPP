// gfg - Is Binary tree heap: https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1


class Solution {
    
    
    int countNodes(struct Node* tree){
        if(tree == NULL){
            return 0;
        }
        
        int ans = 1 + countNodes(tree->left) + countNodes(tree->right);
        return ans;
    }    
    
    bool isCBT(struct Node* tree, int index, int totalNode){
        if(tree == NULL){
            return true;
        }
        if(index >= totalNode){ //out of range
            return false;
        }else{
            int left = isCBT(tree->left, 2*index+1, totalNode);
            int right = isCBT(tree->right, 2*index+2, totalNode);
            
            return (left && right);
        }
    }
    
    
    bool isMaxOrder(struct Node* tree){
        //3 conditions
        //leaf node
        //left child
        //both child
        
        //leaf node
        if(tree->left == NULL && tree->right == NULL){
            return true;
        }
        
        //left child exists
        if(tree->right == NULL){
            return (tree->data > tree->left->data);
        }else{//both exists
            
            return (tree->data > tree->left->data) && (tree->data > tree->right->data)
                    && isMaxOrder(tree->left) && isMaxOrder(tree->right);            
            
        }
}
  public:
    bool isHeap(struct Node* tree) {
        int index = 0;
        int totalNode = countNodes(tree);
    
        if(isCBT(tree, index, totalNode) && isMaxOrder(tree)){
            return true;
        }else{
            return false;
        }
    }
};
// max sum of non adjacent nodes;

class Solution{
  public:
  
    pair<int,int> solve(Node* root){
        //base case
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> ans;
        
        //first -> including
        ans.first = root->data + left.second + right.second;
        ans.second = max(left.first,left.second) + max(right.first,right.second);

        return ans;        
        
    }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        //first is maxsum by including nodes at current level 
        //second is maxsum by excluding nodes at current level
        
        pair<int,int> ans = solve(root);
        
        return max(ans.first,ans.second);
    }
};

// Construct a tree using inorder and preorder.
class Solution{
    public:
    
    int pos(int in[], int element,int inStart,int inEnd){
        for(int i = inStart;i<= inEnd;i++)
        {
            if(in[i] == element){
                return i;
            }
        }
        return -1;
    }
    Node* solve(int in[], int pre[], int &index, int inStart,int inEnd, int n)
    {
        //base case
        if(index >= n || inStart > inEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        
        int position = pos(in,element,inStart,inEnd);
        
        root->left = solve(in,pre,index,inStart,position-1, n);
        root->right = solve(in,pre,index,position+1,inEnd, n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        
        int preOrderIndex = 0;
        
        Node* ans = solve(in,pre, preOrderIndex, 0,n-1,n);
        
        return ans;
        
    }
};

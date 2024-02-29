//Burn tree

class Solution {
  public:
  
    Node *createParentMapping(Node* root,int target,map<Node*, Node*> &nodeToParent){
        Node* res = NULL;
        queue<Node*> q;
        
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            
            if(front->data == target){
                res = front;
            }
            if(front->left){
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return res;
    }
    
    int buildTree(Node*root, map<Node*,Node*>&nodeToParent ){
        int ans = 0;
        
        map<Node*, bool> visited;
        
        queue<Node*> q;
        
        q.push(root);
        visited[root] = 1;
        
        while(!q.empty()){
            int size = q.size();
            bool flag = 0;
            for(int i=0;i < size;i++){
                
                Node*front = q.front();
                q.pop();
            
                if(front->left && !visited[front->left]){
                    q.push(front->left);
                    visited[front->left] = 1;
                    
                    flag = 1;
                }
                if(front->right && !visited[front->right]){
                    q.push(front->right);
                    visited[front->right] = 1;
                    
                    flag = 1;
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = 1;
                    flag = 1;
                }
            }
            
            if(flag == 1){
                ans++;
            }
                    
        }
        return ans;
                    
    }
            
    
    
    
    int minTime(Node* root, int target) 
    {
        //Step1: create nodeToParent mapping
        //Step2: find target Node
        //Step4: burn the tree 
           
        map<Node*, Node*> nodeToParent;
        
        Node* target1 = createParentMapping(root,target,nodeToParent);
        
        int ans = buildTree(target1, nodeToParent);
        
        return ans;
    }
};
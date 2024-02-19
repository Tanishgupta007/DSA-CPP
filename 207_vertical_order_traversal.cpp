// vertical order traversal of binary tree

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //--hd------lvl---------list of nodes
        map<int,map<int, vector<int> > > nodes;
        
        //---------node---------hd---lvl
        queue<pair<Node*,pair<int,int> > > q; 
         
        vector<int> ans; //to store the end answer
        
        if(root == NULL)
            return ans;
        
        q.push(make_pair(root, make_pair(0,0)));
        
        
        while(!q.empty()){
            pair<Node* , pair<int,int> > temp = q.front();
            q.pop();
            Node* frontNode = temp.first; 
            int hd = temp.second.first;
            int lvl = temp.second.second; 
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)//if not NULL
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            
            if(frontNode->right)//if not NULL
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            
        }
        
        //now store in ans
        //nodes = <int, map<int,vactor<int> ans;
        for(auto i : nodes){
            for(auto j : i.second){
                for(auto k : j.second){
                    ans.push_back(k);
                }
            }
        }
        
        return ans;
    }
};
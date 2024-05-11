//Approach 1:
void inOrder(TreeNode* root, vector<int> &bst){
    if(root == NULL){
        return;
    }

    inOrder(root->left, bst);
    bst.push_back(root->data);
    inOrder(root->right, bst);
}

vector<int> mergeArray(vector<int> bst1, vector<int> bst2){
    vector<int> ans(bst1.size() + bst2.size());

    int i = 0, j = 0, k = 0;

    while(i < bst1.size() && j < bst2.size()){
        if(bst1[i] < bst2[j]){
            ans[k++] = bst1[i++];
        }else{
            ans[k++] = bst2[j++];
        }
    }    
    while(i<bst1.size()){
        ans[k++] = bst1[i++];
    }   
    while(j < bst2.size()){
        ans[k++] = bst2[j++];
    }

    return ans;
}

TreeNode* normalToBST(vector<int> &arr, int s, int e){

    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;

    TreeNode* root = new TreeNode(arr[mid]);

    root->left = normalToBST(arr, s, mid-1);
    root->right = normalToBST(arr, mid+1,e);

    return root;

}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int> bst1, bst2;

    inOrder(root1,bst1);
    inOrder(root2,bst2);

    vector<int> mergedArray = mergeArray(bst1,bst2);

    TreeNode* root = normalToBST(mergedArray, 0, mergedArray.size()-1);
    
    vector<int> res;
    inOrder(root,res);
    return res;
}


//Approach 2


void convertToDLL(TreeNode *root, TreeNode* &head){
    if(root == NULL){
        return;
    }

    convertToDLL(root->right, head);

    root->right = head;

    if(head !=NULL)
        head ->left = root;

    head = root;

    convertToDLL(root->left, head);
}

TreeNode *mergeLL(TreeNode* head1, TreeNode* head2){

    TreeNode *head = NULL;
    TreeNode *tail = NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->data < head2->data){
            
            if(head == NULL){
                head = head1;
                tail = head1;

                head1 = head1->right;
            }else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;

                head1 = head1->right;

            }
        }else{
            if(head == NULL){
                head = head2;
                tail = head2;

                head2 = head2->right;
            }else{
                tail->right = head2;
                head2->left = tail;

                tail = head2;

                head2 = head2->right;
                
            }
        }
    }
    while(head1!=NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2 != NULL){
        tail->right = head2;
        head2->left = tail;

        tail = head2;
        head2 = head2->right;        
    }
    return head;
}
int countNodes(TreeNode *head){
    int n = 0;

    while(head != NULL){
        n++;
        head = head->right;
    }
    return n;
}
TreeNode* sortedLLtoBST(TreeNode* head, int n){

    if(n <= 0 || head == NULL){
        return NULL;
    }

    TreeNode *left = sortedLLtoBST(head, n/2);
    TreeNode *root = head;

    root->left = left;

    head = head->right;

    root->right = sortedLLtoBST(head->right, n-n/2-1);

    return root;

}
void ans(TreeNode* head, vector<int> &res){
    if(head == NULL){
        return;
    }

    while(head){
        res.push_back(head->data);
        head= head->right;
    }

    }
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    TreeNode *head1 = NULL;
    TreeNode *head2 = NULL;
    //step1: convert bst into sorted linked list
    convert     ToDLL(root1, head1);
    head1->left = NULL; //(start from right)
    convertToDLL(root2, head2);
    head2->left = NULL; //(start from right)
    
    //step2: merge 2 sorted linkedlist
    TreeNode *head = mergeLL(head1, head2);

    //step3: Sorted LL to Balanced BST
    int n = countNodes(head);
    vector<int> res;
    
    ans(head, res);

    return res;
}
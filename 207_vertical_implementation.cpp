#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data " << endl;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the details of left child of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the details of right child of " << root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

vector<int> verticalOrder(Node *root)
{
    map<int, map<int, vector<int>>> m;

    queue<pair<Node *, pair<int, int>>> q;

    vector<int> ans;

    if(root == NULL){
        return ans;
    }
    // root                          hd  lvl
    q.push(make_pair(root, make_pair(0, 0)));

    while(!q.empty()){
        pair<Node*, pair<int,int>> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        m[hd][lvl].push_back(frontNode->data);

        if(frontNode->left){ // if not NULL
            q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
        }

        if(frontNode->right){
            q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
    }
    for(auto i : m){
        for(auto j : i.second){
            for(auto k : j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}

int main()
{
    Node *root;
    root = buildTree(root);

    vector<int> ans = verticalOrder(root);

    for(auto i: ans){
        cout<<i<<" ";
    }    

}

//input and output
/*
Enter data 
1
Enter the details of left child of 1
Enter data 
2
Enter the details of left child of 2
Enter data
4
Enter the details of left child of 4
Enter data
-1
Enter the details of right child of 4
Enter data
-1
Enter the details of right child of 2
Enter data
5
Enter the details of left child of 5
Enter data
-1
Enter the details of right child of 5
Enter data
-1
Enter the details of right child of 1
Enter data
3
Enter the details of left child of 3
Enter data
6
Enter the details of left child of 6
Enter data
-1
Enter the details of right child of 6
Enter data
8
Enter the details of left child of 8
Enter data
-1
Enter the details of right child of 8
Enter data
-1
Enter the details of right child of 3
Enter data
7
Enter the details of left child of 7
Enter data
-1
Enter the details of right child of 7
Enter data
9
Enter the details of left child of 9
Enter data
-1
Enter the details of right child of 9
Enter data
-1

output: 4 2 1 5 6 3 8 7 9


*/
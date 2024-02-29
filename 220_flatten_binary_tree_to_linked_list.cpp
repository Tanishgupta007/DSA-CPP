
class Solution
{
public:
    void flatten(Node *root)
    {
        Node *curr = root;

        while (curr != NULL)
        {
            // if left exists
            if (curr->left)
            {

                Node *prev = curr->left;

                while (prev->right)
                {
                    prev = prev->right;
                }

                prev->right = curr->right;
                curr->right = curr->left;

                // left part NULL
                curr->left = NULL;
            }
            // if left doesn't exists
            curr = curr->right;
        }
        /*
        //left part NULL
        curr = root;
        while(curr != NULL){

            curr->left = NULL;
            curr = curr->right;

        }
        */
    }
};
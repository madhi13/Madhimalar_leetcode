/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// Define operations values for convinience
#define OR_OP 2
#define AND_OP 3

class Solution {
public:
    bool Exec(TreeNode* root)
    {
        if(root->val == OR_OP)
        {
            return Exec(root->left) || Exec(root->right);
        }
        else if(root->val == AND_OP)
        {
            return Exec(root->left) && Exec(root->right);
        }
        else
        {
            return root->val;
        }
    }

    bool evaluateTree(TreeNode* root)
    {
        return Exec(root);
    }
};
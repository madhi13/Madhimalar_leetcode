/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int targetVal=target->val;
        queue<TreeNode*>q;
        q.push(cloned);

        while(!q.empty()){
            TreeNode* currNode=q.front();
            q.pop();

            if(currNode->val==targetVal) return currNode;

            if(currNode->left) q.push(currNode->left);
            if(currNode->right) q.push(currNode->right);
        }
        return NULL;
    }
};
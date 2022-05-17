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
    TreeNode* ans;
    
    void help(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(original == NULL) return;
        help(original->left,cloned->left,target);
        if(original == target) 
        {
            ans = cloned;
            return;
        }
        help(original->right,cloned->right,target);
        return;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        help(original,cloned,target);
        return ans;
    }
};
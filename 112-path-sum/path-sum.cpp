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
class Solution {
    bool path(TreeNode* root, int curr, int target){
        if(!root) return 0;
        curr += root->val;
        if(!root->left && !root->right && curr == target) return 1;
        return path(root->left, curr, target) || path(root->right, curr, target);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return path(root, 0, targetSum);
    }
};
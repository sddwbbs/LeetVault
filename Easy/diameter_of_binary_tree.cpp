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
public:
    int ans = 0; 

    int diameterOfBinaryTree(TreeNode* root) {
       if (!root) return 0; 
       height(root);
       return ans;
    }

    int height(TreeNode* root) {
        if (!root) return 0;
        
        int left = height(root->left);
        int right = height(root->right);

        ans = max(ans, left + right);
        return 1 + max(left, right);
    }
};

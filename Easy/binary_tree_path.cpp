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
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return {};
        
        vector<string> ans;
        return func(root, std::to_string(root->val), ans);
    }

    vector<string> func(TreeNode* node, string str, vector<string>& ans) {
        if (!node->left && !node->right) {
            ans.push_back(str);
        }
        
        if (node->left) func(node->left, str + "->" + std::to_string(node->left->val), ans);
        if (node->right) func(node->right, str + "->" + std::to_string(node->right->val), ans);

        return ans;
    }
};

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result; 
        long long sum = 0, count = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);

        while (!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            if (node) {
                ++count;
                sum += node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            } else {
                result.push_back(static_cast<double>(sum) / count);
                sum = 0;
                count = 0;
                q.push(nullptr);

                if (!q.front()) break;
            }
        }

        return result;
    }
};


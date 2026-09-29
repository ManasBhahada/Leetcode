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
    int averageOfSubtree(TreeNode* root) {
        int matchingNodesCount = 0;
        auto postOrder = [&](auto& self, TreeNode* node) -> pair<int, int> {
            if (!node) return {0, 0};
            auto left = self(self, node->left);
            auto right = self(self, node->right);
            int currentSum = left.first + right.first + node->val;
            int currentCount = left.second + right.second + 1;
            if (node->val == currentSum / currentCount) {
                matchingNodesCount++;
            }
            return {currentSum, currentCount};
        };
        postOrder(postOrder, root);
        return matchingNodesCount;
    }
};
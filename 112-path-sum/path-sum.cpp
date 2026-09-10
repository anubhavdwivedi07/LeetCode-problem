class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum, 0);
    }

private:
    bool helper(TreeNode* root, int targetSum, int sum) {
        if (root == nullptr) return false;

        sum = sum + root->val;  

        if (root->left == nullptr && root->right == nullptr) {
            return sum == targetSum;
        }

        return helper(root->left, targetSum, sum) || helper(root->right, targetSum, sum);
    }
};
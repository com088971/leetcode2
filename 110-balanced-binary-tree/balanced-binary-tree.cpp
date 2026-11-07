
class Solution {
public:

    int height(TreeNode* root) {

        if(root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        // If subtree is already unbalanced
        if(left == -1 || right == -1)
            return -1;

        // Check height difference
        if(abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {

        return height(root) != -1;
    }
};

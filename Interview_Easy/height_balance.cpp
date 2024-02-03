class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == nullptr) return 0; // Base case: height of a null node is 0
        int lH = getHeight(root->left);
        int rH = getHeight(root->right);
        if (lH == -1 || rH == -1 || abs(lH - rH) > 1) return -1; // Check if subtree is unbalanced
        return 1 + max(lH, rH); // Height of the current subtree
    }
    
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true; // An empty tree is balanced
        return getHeight(root) != -1; // Check if the tree is balanced
    }
};
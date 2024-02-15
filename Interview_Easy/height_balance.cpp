class Solution {
public:
    int minDepth(TreeNode* root) {
        // Base case: If the root is null, the depth is 0
        if (root == nullptr) return 0;
        
        // If the current node is a leaf node, its depth is 1
        if (root->left == nullptr && root->right == nullptr) return 1;
        
        // If the left subtree is empty, consider only the depth of the right subtree
        if (root->left == nullptr) return 1 + minDepth(root->right);
        
        // If the right subtree is empty, consider only the depth of the left subtree
        if (root->right == nullptr) return 1 + minDepth(root->left);
        
        // Otherwise, consider both subtrees and return the minimum depth
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
// if you want to get the depth of the nearest left node , then use min function to get the depth of the left node vas rightnode
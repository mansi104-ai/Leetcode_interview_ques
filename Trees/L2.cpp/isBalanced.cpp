#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 struct TreeNode {
 int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
int checkBalance(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftHeight = checkBalance(root->left);
        if (leftHeight == -1) return -1;  

        int rightHeight = checkBalance(root->right);
        if (rightHeight == -1) return -1;  

        if (abs(leftHeight - rightHeight) > 1) return -1;  

        return 1 + max(leftHeight, rightHeight);  
    }

    bool isBalanced(TreeNode* root) {
        return checkBalance(root) != -1;
    }

int main(){
  TreeNode* node = new TreeNode(1);
  node-> left = new TreeNode(2);
  node -> right = new TreeNode(3);
  node->left ->left = new TreeNode(4);
  node -> left-> right = new TreeNode(5);
  
  cout << isBalanced(node) <<endl;

  return 0;
}
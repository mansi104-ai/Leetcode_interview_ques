#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int data){
      val= data;
      left=right=NULL;
    }
};
class Solution{
  public:

   TreeNode* searchBST(TreeNode* root, int val){
    while(root!= NULL && root-> val!= val){
      root = val < root-> val ? root->left : root-> right;
    }
    return root;
   }
   
};

int main(){
  Solution s;

  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  TreeNode* sol = s.searchBST(root,5);

  cout  << sol << endl;
  return 0;

}
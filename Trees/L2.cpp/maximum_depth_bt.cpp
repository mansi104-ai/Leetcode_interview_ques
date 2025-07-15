#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int val){
    data = val;
    left = right = NULL;
  }
};

int maxDepth(Node* root){
  if(root == NULL){
    return 0;
  }
  int maxD = 0;
  int maxleft = maxDepth(root->left);
  int maxRight = maxDepth(root->right);

  return 1 + max(maxleft,maxRight);
  
}

int main(){
  Node* node = new Node(1);
  node-> left = new Node(2);
  node -> right = new Node(3);
  node->left ->left = new Node(4);
  node -> left-> right = new Node(5);
  
  cout << maxDepth(node) <<endl;

  return 0;
}
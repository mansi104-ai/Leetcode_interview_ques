#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct Node{
  int data;
  struct Node *left;
  struct Node *right;
  Node(int val){
    data = val;
    left=right=NULL;
  }
};

// Preorder Traversal 
void Preorder(Node* root){
  if(root == nullptr){
    return ;
  }

  cout << root->data <<endl;
  Preorder(root -> left);
  Preorder(root -> right);
}

//Inorder Traversal
void Inorder(Node* root){
  if(root == nullptr){
    return;
  }
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);

}

//LevelOrder Traversal

vector<vector<int>> LevelOrder(Node* root){
  vector<vector<int>>ans;
  if(root == NULL)return ans;
  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    int size = q.size();
    vector<int> level;
    for(int i =0;i<size;i++){
      Node* node = q.front();
      if(node-> left != NULL)q.push(node->left);
      if(node -> right != NULL)q.push(node->right);
      q.pop();
      level.push_back(node->data);
    }
    ans.push_back(level);

  }
  return ans;
}

void PostOrder(Node* root){
  if(root == nullptr){
    return ;
  }
  PostOrder(root->left);
  PostOrder(root-> right);
  cout << root->data <<" ";
  
}
int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  // PostOrder(root);
  vector<vector<int>> ans = LevelOrder(root);

  // Print the level order traversal
  for (const auto& level : ans) {
    for (int val : level) {
      cout << val << " ";
      }
      cout << endl;
    }
  return 0;
}
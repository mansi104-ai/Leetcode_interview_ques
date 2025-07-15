#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int val){
    data  = val;
    left = right = NULL;
  }
};
vector<int>  PreOrder(Node* root){
  vector<int> preorder;
  if(root == NULL){
    return preorder;
  }

  stack<Node*> st;
  st.push(root);
  while(!st.empty()){
    root= st.top();
    st.pop();
    preorder.push_back(root->data);
    if(root->right!= NULL){
      st.push(root->right);
    }

    if(root->left!= NULL){
      st.push(root -> left);
    }

  }

  return preorder;
}

int main(){
  Node* node = new Node(1);
  node -> left = new Node(2);
  node->right = new Node(7);
  node->left->left = new Node(3);
  node->left->right = new Node(4);
  node-> left->right->left = new Node(5);
  node-> left->right->right = new Node(6);

  vector<int> preorder = PreOrder(node);
  for(auto& t : preorder){
    cout << t <<endl;
  }

  return 0;
}
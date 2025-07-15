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
vector<int> Inorder(Node* root){
  stack<Node*> st;
  Node* node = root;
  vector<int> inorder;
  while(true){
    if(node!= NULL){
      st.push(node);
      node = node -> left;
    }else{
      if(st.empty()== true)break;
      node = st.top();
      st.pop();
      inorder.push_back(node->data);
      node = node->right;
    }
  }

  return inorder;
}

int main(){
  Node* node = new Node(1);
  node-> left = new Node(2);
  node -> right = new Node(3);
  node->left ->left = new Node(4);
  node -> left-> right = new Node(5);

  vector<int> output = Inorder(node);
  for(auto& t : output){
    cout << t <<endl;
  }

  return 0;
}
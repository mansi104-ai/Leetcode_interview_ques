#include <iostream>
#include <vector>
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


bool isLeaf(Node* node){
  return (node->left == nullptr && node ->right == nullptr);
}

//Funnction to collect leaves from the left boundary 
//top -down order

void collectBoundaryLeft(Node* root, vector<int>& res){
  //exclude leaf node
  if(root==nullptr || isLeaf(root)){
    return;
  }

  res.push_back(root->data);
  if(root->left){
    collectBoundaryLeft(root->left,res);
  }
  else if(root->right){
    collectBoundaryLeft(root->right,res);
  }
}

//Function to collect all leaf nodes
void collectLeaves(Node* root,vector<int> &res){
  //Boundary condition
  if(root == nullptr){
    return ;

  }
  //Main condition
  //Add leaf nodes
  if(isLeaf(root)){
    res.push_back(root->data);
    return;
  }
  collectLeaves(root->left,res);
  collectLeaves(root->right,res);
}

//Function to collect right boundary nodes
void CollectBoundaryRight(Node* root, vector<int> &res){
  if(root == nullptr||isLeaf(root)){
    return;
  }

  if(root->right){
    CollectBoundaryRight(root->right,res);
  }
  else if(root->left){
    CollectBoundaryRight(root->left,res);
  }
  res.push_back(root->data);
}

vector<int> boundaryTraversal(Node* root){
  vector<int> res;

  //If the tree is empty or does not exist
  if(!root){
    return res;
  }

  //Add root data if it's not a leaf
  if(!isLeaf(root)){
    res.push_back(root->data);
  }

  //Collect Left Boundary
  collectBoundaryLeft(root->left,res);
  
  //Collect leaf nodes
  collectLeaves(root,res);

  //Collect right nodes
  CollectBoundaryRight(root->right,res);

  return res;

}

int main() {

    // Hardcoded Binary tree
    //        20
    //       /  \
    //      8    22
    //     / \     \
    //    4   12    25
    //       /  \
    //      10   14
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right->right = new Node(25);

    vector<int> boundary = boundaryTraversal(root);

    for (int x : boundary)
        cout << x << " ";

    return 0;
}
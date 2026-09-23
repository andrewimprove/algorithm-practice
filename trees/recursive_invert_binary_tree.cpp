#include <iostream>
#include <queue>



using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};


void print_order(TreeNode* root){

  if (root == nullptr){
      return; 
  }

  cout << root->data;
    print_order(root->left);
  print_order(root->right);

 }

TreeNode* invert_binary_tree(TreeNode* root){

  //4
  if (root == nullptr){
    return root; 
  }

  TreeNode* temp = root->left;
  root->left = root->right;
  root->right = temp; 

  invert_binary_tree(root->right);
  invert_binary_tree(root->left);


  return root;

 };

int main(){

  TreeNode* t = new TreeNode{4, nullptr,nullptr};
  t->left = new TreeNode{2, nullptr,nullptr};
  t->right = new TreeNode{7,nullptr,nullptr};
  t->left->left = new TreeNode{1,nullptr,nullptr};
  t->left->right = new TreeNode{3,nullptr,nullptr};
  t->right->left = new TreeNode{6,nullptr,nullptr};
  t->right->right = new TreeNode{9,nullptr,nullptr};

 TreeNode* res = invert_binary_tree(t); 

 print_order(res);


}

#include <iostream>
#include <queue>
#include <stdlib.h>



using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};

int check_depth(TreeNode* root){

  if (root == nullptr){
    return 0;
  }
  int leftHeight = check_depth(root->left);
  int rightHeight = check_depth(root->right);

  if (leftHeight == -1 || rightHeight == -1){
    return -1;
  }

  if (abs(leftHeight - rightHeight) > 1){
    return -1;
  }
  
  return 1 + max(leftHeight,rightHeight);

}

bool balanced_binary_tree(TreeNode* root){
 
  return check_depth(root) != -1;

  };


int main(){

  TreeNode* t1 = new TreeNode{1, nullptr,nullptr};
  t1->left = new TreeNode{2, nullptr,nullptr};
  t1->right = new TreeNode{2,nullptr,nullptr};
  t1->left->left = new TreeNode{3,nullptr,nullptr};
  t1->left->right = new TreeNode{3,nullptr,nullptr};
  t1->left->left->left = new TreeNode{4,nullptr,nullptr};
  t1->left->left->right = new TreeNode{4,nullptr,nullptr};
  cout << balanced_binary_tree(t1);
}

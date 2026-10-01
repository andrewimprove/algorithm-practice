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

  queue <TreeNode*> qLeft;
  queue <TreeNode*> qRight;

  if (root->left != nullptr){
      qLeft.push(root->left);
  }

  if (root->right != nullptr){
      qRight.push(root->right);
  }

  int level_size = 0; 
  int count_left = 0; 
  int count_right = 0; 

  //check left first 
  while (!qLeft.empty()){

    level_size = qLeft.size();
    for (int i = 0; i < level_size; i++){
      TreeNode* curr = qLeft.front();
      
      if (curr->left != nullptr){
        qLeft.push(curr->left);
      }
      if (curr->right != nullptr){
        qLeft.push(curr->right);
      } 
      qLeft.pop();
    }
    count_left++;
  }
   while (!qRight.empty()){

    level_size = qRight.size();
    for (int i = 0; i < level_size; i++){
      TreeNode* curr = qRight.front();
      
      if (curr->left != nullptr){
        qRight.push(curr->left);
      }
      if (curr->right != nullptr){
        qRight.push(curr->right);
      } 
      qRight.pop();
    }
    count_right++;
  } 
  return abs(count_left - count_right);
}

bool balanced_binary_tree(TreeNode* root){

 if (root == nullptr){
    return true;
 }

 if (!balanced_binary_tree(root->left) || !balanced_binary_tree(root->right)){
    return false;
  }

 if (check_depth(root) > 1){
  return false;
}
  return true;
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

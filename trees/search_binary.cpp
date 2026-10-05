#include <iostream>
#include <queue>
#include <stack>

using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};


TreeNode* search_binary(TreeNode* root, int val){

  if (root == nullptr){
    return root;
  }

  if (root->data == val){
    return root;
  }

  if (root->data < val){
    return search_binary(root->right,val);
  }
  
  return search_binary(root->left,val);
 };


void print_order(TreeNode* root){

  if (root == nullptr){
      return; 
  }
    cout << root->data;

  print_order(root->left);
  print_order(root->right);
}


int main(){

  TreeNode* t1 = new TreeNode{4, nullptr,nullptr};
  t1->left = new TreeNode{2,nullptr,nullptr};
  t1->right = new TreeNode{7,nullptr,nullptr};

  TreeNode* t2 = t1->left;
  t2->left = new TreeNode{1,nullptr,nullptr};
  t2->right = new TreeNode{3,nullptr,nullptr};

  TreeNode* res = search_binary(t1,2);

  print_order(res);


}

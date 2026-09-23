#include <iostream>
#include <queue>
#include <algorithm>


using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};


void print_order(TreeNode* root){

   if (root == nullptr || root->left == nullptr || root->right == nullptr){
    return;  
  }
   cout << root->data << " left and right ";
  print_order(root->right);
    cout << " right: " << root->right->data;

  print_order(root->left);
  cout << " left: " << root->left->data;
};


int maxDepth(TreeNode* root){

  if (root == nullptr){
     return 0;
  }

  int res = 1+ max(maxDepth(root->left), maxDepth(root->right));

  return res;
}

int main(){

  TreeNode* t = new TreeNode{3, nullptr,nullptr};
  t->left = new TreeNode{9, nullptr,nullptr};
  t->right = new TreeNode{20,nullptr,nullptr};
  t->right->left = new TreeNode{15,nullptr,nullptr};
  t->right->right =  new TreeNode{7,nullptr,nullptr};

 int res = maxDepth(t); 

 cout << res << " ";
}

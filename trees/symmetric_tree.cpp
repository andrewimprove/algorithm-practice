#include <iostream>
#include <queue>



using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};

bool sym_tree(TreeNode* root){ 

  
};
int main(){

  TreeNode* t1 = new TreeNode{4, nullptr,nullptr};
  t1->left = new TreeNode{2,nullptr,nullptr};
  t1->right = new TreeNode{2,nullptr,nullptr};

  t1->left->left = new TreeNode{3,nullptr,nullptr};
  t1->left->right = new TreeNode{4,nullptr,nullptr};

  t1->right->left = new TreeNode{4,nullptr,nullptr};
  t1->right->right = new TreeNode{5,nullptr,nullptr};


  cout << sym_tree(t1) << " ";


}

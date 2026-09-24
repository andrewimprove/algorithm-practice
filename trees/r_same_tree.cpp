#include <iostream>
#include <queue>



using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};



bool same_tree(TreeNode* root, TreeNode* root_two){

  if (root == nullptr && root_two == nullptr){
    return true;
  }
  if (root == nullptr && root_two != nullptr || root_two == nullptr && root != nullptr){
         return false;
      }

   if (root->data != root_two->data){
    return false;
  }

  bool res = same_tree(root->left, root_two->left);
  bool res_two =same_tree(root->right,root_two->right);
  
  if (res && res_two){
    return true;
  }
  return false;
};
int main(){

  TreeNode* t1 = new TreeNode{4, nullptr,nullptr};
  t1->left = new TreeNode{2, nullptr,nullptr};
  t1->right = new TreeNode{7,nullptr,nullptr};

  TreeNode* t2 = new TreeNode{4, nullptr,nullptr};
  t2->left = new TreeNode{2, nullptr,nullptr};
  t2->right = new TreeNode{7,nullptr,nullptr};


  cout << same_tree(t1,t2) << " ";


}

#include <iostream>

using namespace std;

struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};



bool Is_mirror(TreeNode* root, TreeNode* root_two){

  if (root == nullptr && root_two == nullptr){
        return true;
  }

  if (root == nullptr || root_two == nullptr){
    return false;
  }

  if (root->data != root_two->data){
    return false;
  }

  return Is_mirror(root->left,root_two->right) && Is_mirror(root->right, root_two->left);
}

bool symm_tree(TreeNode* root){

  if (root == nullptr){
      return true;  
  }
 
  return Is_mirror(root->left,root->right);

};

int main(){


  TreeNode* t1 = new TreeNode{4, nullptr,nullptr};
  t1->left = new TreeNode{2,nullptr,nullptr};
  t1->right = new TreeNode{2,nullptr,nullptr};

  t1->left->left = new TreeNode{3,nullptr,nullptr};
  t1->left->right = new TreeNode{4,nullptr,nullptr};

  t1->right->left = new TreeNode{4,nullptr,nullptr};
  t1->right->right = new TreeNode{5,nullptr,nullptr};


  cout << symm_tree(t1) << " ";

}

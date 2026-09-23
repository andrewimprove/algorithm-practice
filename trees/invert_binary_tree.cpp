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

    print_order(root->left);
  cout << root->data;
  print_order(root->right);

 }

TreeNode* invert_binary_tree(TreeNode* root){
  queue <TreeNode*> q; 

  int level_size = 0;
  q.push(root); 

  while (!q.empty()){
    level_size = q.size();
    for (int i = 0; i < level_size; i++){
      TreeNode* curr = q.front();

      if (curr != nullptr){
         TreeNode* temp = curr->left;
         curr->left = curr->right;
         curr->right = temp;
         if (curr->left != nullptr){
              q.push(curr->left);
         }
         if (curr->right != nullptr){
           q.push(curr->right);
         }
         q.pop();
      }
   }

  }
  return root; 
 };

int main(){

  TreeNode* t = new TreeNode{4, nullptr,nullptr};
  t->left = new TreeNode{2, nullptr,nullptr};
  t->right = new TreeNode{7,nullptr,nullptr};
  t->left->left = new TreeNode{1,nullptr,nullptr};
  t->left->right = new TreeNode{3,nullptr,nullptr};

 TreeNode* res = invert_binary_tree(t); 

 print_order(res);


}

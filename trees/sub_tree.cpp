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

bool is_same_tree(TreeNode* root, TreeNode* sub_root){

  queue <pair <TreeNode*, TreeNode*>> q;
  q.push({root,sub_root});

  int level_size = 0;
  while (!q.empty()){
    TreeNode* curr = q.front().first; 
    TreeNode* curr_second = q.front().second;
    level_size = q.size();
    q.pop();

      if (curr == nullptr && curr_second == nullptr){
        return true; 
      }
      if (curr != nullptr && curr_second == nullptr || curr == nullptr && curr_second != nullptr){
        return false; 
      }
      if (curr->data != curr_second->data){
        return false; 
    }
    q.push({curr->left,curr_second->left});
    q.push({curr->right,curr_second->right});
  }
  return true; 
}


bool sub_tree(TreeNode* root, TreeNode* sub_root){

  //initialise a stack 
  stack <TreeNode*> stk; 
  stk.push(root);
  while (!stk.empty()){
    TreeNode* curr = stk.top();
    stk.pop();
    if (curr == nullptr){
       continue;
    }
    if (is_same_tree(curr,sub_root)){
      return true;
    };
    stk.push(curr->left);
    stk.push(curr->right);
  }
  return false;
};
int main(){

  TreeNode* t1 = new TreeNode{3, nullptr,nullptr};
  t1->left = new TreeNode{4, nullptr,nullptr};
  t1->right = new TreeNode{5,nullptr,nullptr};

  TreeNode* t2 = t1->left;
  t2->left = new TreeNode{1, nullptr,nullptr};
  t2->right = new TreeNode{2,nullptr,nullptr};
  cout << sub_tree(t1,t2) << " ";


}

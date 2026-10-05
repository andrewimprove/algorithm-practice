#include <iostream>
#include <stack>
#include <vector>

using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};


vector<int> binary_tree(TreeNode* root){
    
  stack <TreeNode*> stk;
  vector <int> ans;
  TreeNode* curr = root; 

  while (curr != nullptr || stk.empty() == false){
      
    while (curr != nullptr){
      stk.push(curr);
      curr = curr->left;
    }

    curr = stk.top();
    stk.pop();

    ans.push_back(curr->data);

    curr = curr->right; 
  }

  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }
  return ans;
 };

int main(){

  TreeNode* t1 = new TreeNode{1, nullptr,nullptr};
  t1->right = new TreeNode{2,nullptr,nullptr};
  t1->right->left = new TreeNode{3,nullptr,nullptr};
 
  vector <int> res = binary_tree(t1);

 }

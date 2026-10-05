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


vector<int> binary_tree(TreeNode* root) {
    // Base case: if the node is null, return an empty vector
    if (root == nullptr) {
        return {};
    }

    // 1. Recursively get the results from the left subtree
    vector<int> leftResult = binary_tree(root->left);
    
    // 2. Recursively get the results from the right subtree
    vector<int> rightResult = binary_tree(root->right);

    // 3. Combine everything into a single result vector (In-order: Left -> Root -> Right)
    vector<int> res;
    
    // Append left subtree data
    res.insert(res.end(), leftResult.begin(), leftResult.end());
    
    // Append current node data
    res.push_back(root->data);
    
    // Append right subtree data
    res.insert(res.end(), rightResult.begin(), rightResult.end());

    return res;
}

int main(){

  TreeNode* t1 = new TreeNode{1, nullptr,nullptr};
  t1->right = new TreeNode{2,nullptr,nullptr};
  t1->right->left = new TreeNode{3,nullptr,nullptr};
 
  vector <int> res = binary_tree(t1);

  for (int i = 0; i < res.size(); i++){
    cout << res[i] << " ";
  }
 }

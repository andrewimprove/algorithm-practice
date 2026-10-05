#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};


TreeNode* buildBST(vector<int> &nums,int left,int right){

  if (left > right){
    return nullptr;
  }

  int mid = left + (right - left)/2;

  TreeNode* root = new TreeNode{nums[mid], nullptr,nullptr};

  root->left = buildBST(nums,left,mid-1);
  root->right = buildBST(nums,mid+1,right);

  return root; 
}


TreeNode* con_sorted(vector<int>& nums){

  if (nums.empty()){
    return nullptr;
  }

  return buildBST(nums,0,nums.size()-1);

}

void print_order(TreeNode* root){

  if (root == nullptr){
    return;
  }

  print_order(root->left);
        cout << root->data << " ";

  print_order(root->right);

}



int main(){

  vector <int> vec = {-10,-3,0,5,9};

  TreeNode* res = con_sorted(vec);

  print_order(res);
}

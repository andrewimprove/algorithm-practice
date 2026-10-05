#include <iostream>
#include <queue>

using namespace std;

//Binary Tree
struct TreeNode {
  int data;
  TreeNode* left;
  TreeNode* right; 
};

int computeHeight(TreeNode* root){

  queue <TreeNode*> qLeft;
  queue <TreeNode*> qRight;

  if (root->left != nullptr){
      qLeft.push(root->left);
  }

  if (root->right != nullptr){
      qRight.push(root->right);
  }

  int level_size = 0; 
  int count_left = 0; 
  int count_right = 0; 
  int res_left = 0;
  int res_right = 0;
  //check left first 
  while (!qLeft.empty()){

    level_size = qLeft.size();
    for (int i = 0; i < level_size; i++){
      TreeNode* curr = qLeft.front();
      
      if (curr->left != nullptr){
        qLeft.push(curr->left);
        count_left++;
      }
      if (curr->right != nullptr){
        qLeft.push(curr->right);
        count_right++;
      }
      res_left = max(count_left,count_right);
      qLeft.pop();
    }
  }

  count_left = 0;
  count_right = 0; 
   while (!qRight.empty()){

    level_size = qRight.size();
    for (int i = 0; i < level_size; i++){
      TreeNode* curr = qRight.front();
      
      if (curr->left != nullptr){
        qRight.push(curr->left);
        count_left++;

      }
      if (curr->right != nullptr){
        qRight.push(curr->right);
        count_right++;
      }
        res_right = max(count_left,count_right);
      qRight.pop();
    }
  } 
  
  int res = res_left + res_right;

  return res; 

}

int diameterBinary(TreeNode* root){ 

  if (root == nullptr){
    return 0; 
  }

  queue <TreeNode*> q;
  q.push(root);

  int level_size = 0;
  int count = 0;
  while (!q.empty()){

    level_size = q.size();
 
    for (int i = 0; i < level_size; i++){
        TreeNode* curr = q.front();

        if (curr->left !=nullptr){
          q.push(curr->left);
        }
        if (curr->right != nullptr){
          q.push(curr->right);
        }
        q.pop();
    }
    count++;
  }

  if (computeHeight(root) > count){
      return computeHeight(root);
  }
  return count;
};
int main(){

  TreeNode* t1 = new TreeNode{1, nullptr,nullptr};
  t1->left = new TreeNode{2,nullptr,nullptr};
  t1->left->left = new TreeNode{3,nullptr,nullptr};
  t1->left->left->left = new TreeNode{4,nullptr,nullptr};
  t1->left->left->right = new TreeNode{5,nullptr,nullptr};

   cout << diameterBinary(t1) << " ";
}

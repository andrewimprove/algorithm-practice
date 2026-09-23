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

  queue <pair <TreeNode*,TreeNode*>> t1;

  t1.push({root,root_two});

  while (!t1.empty()){
    
    int level_size = t1.size();
    TreeNode* first = t1.front().first;
    TreeNode* second = t1.front().second;
    t1.pop();

    for (int i = 0; i < level_size; i++){
      if (first == nullptr && second == nullptr){
         continue;
      }
      if (first == nullptr && second != nullptr || second == nullptr && first != nullptr){
         return false;
      }
      if (first->data != second->data){
        return false;
      }
      t1.push({first->left, second->left});
      t1.push({first->right,second->right});
    }
  }
            return true;

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

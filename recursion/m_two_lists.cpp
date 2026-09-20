#include <iostream>


using namespace std;

struct ListNode {
  int data;
  ListNode* next;
};



ListNode* merge_two_lists(ListNode* head_a, ListNode* head_b){

  //base case 
  if (head_b == nullptr){
    return head_a; 
  }

  if (head_a == nullptr){
    return head_b;
  }

  if (head_a->data < head_b->data){
    head_a->next = merge_two_lists(head_a->next, head_b);
    return head_a;
  }
  head_b->next = merge_two_lists(head_a,head_b->next);


  return head_b;

};



int main(){

  ListNode* headA = new ListNode{1,nullptr};
  headA->next = new ListNode{2,nullptr};
  headA->next->next = new ListNode{3,nullptr};
  headA->next->next->next = new ListNode{4,nullptr};
 
  ListNode* headB = new ListNode{5,nullptr};
  headB->next = new ListNode{6,nullptr};
  headB->next->next = new ListNode{7,nullptr};
  headB->next->next->next = new ListNode{8,nullptr}; 



 ListNode* res = merge_two_lists(headA,headB);

 while (res != nullptr){
   cout << res->data << " ";
   res = res->next;
 }
}

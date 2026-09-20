#include <iostream>

using namespace std;


struct ListNode {
  int data;
  ListNode* next;
};


ListNode* print_reverse(ListNode* lst){

  //base base
  if (lst == nullptr || lst->next == nullptr){
    return lst;
  }

  ListNode* final_res = print_reverse(lst->next);

  lst->next->next = lst; 
  lst->next = nullptr;

  return final_res;
}




int main(){

  ListNode* head = new ListNode{1,nullptr};
  head->next = new ListNode{2,nullptr};
  head->next->next = new ListNode{3,nullptr};
  head->next->next->next = new ListNode{4,nullptr}; 

 ListNode* res = print_reverse(head);

 while (res != nullptr){
   cout << res->data << " ";
   res = res->next;
 }
}

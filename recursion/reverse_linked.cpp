#include <iostream>

using namespace std;
struct ListNode {
  int data;
  ListNode* next;
};


void print_reverse(ListNode* lst){

  //base base
  if (lst == nullptr){
    return;
  }


  print_reverse(lst->next);

  cout << lst->data << " ";

}




int main(){

  ListNode* head = new ListNode{1,nullptr};
  head->next = new ListNode{2,nullptr};
  head->next->next = new ListNode{3,nullptr};
  head->next->next->next = new ListNode{4,nullptr}; 

 print_reverse(head);
}

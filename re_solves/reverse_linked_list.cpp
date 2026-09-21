#include <iostream>

using namespace std;

struct ListNode{
  int data;
  ListNode* next;
};



ListNode* reverse_linked_list(ListNode* head){

  //base case 
  if (head == nullptr || head->next == nullptr){
    return head; 
  }

  //2
  ListNode* saved = head->next;
  ListNode* newHead = reverse_linked_list(saved);
  head->next->next = head; 
  head->next = nullptr;

  return newHead;

}


int main(){

  ListNode* head = new ListNode{1,nullptr};
	head->next = new ListNode{2,nullptr};
	head->next->next = new ListNode{3, nullptr};
  head->next->next->next = new ListNode{4, nullptr};


  ListNode* res = reverse_linked_list(head);

  while (res != nullptr){
    cout << res->data << " ";
    res = res->next;
  }

}

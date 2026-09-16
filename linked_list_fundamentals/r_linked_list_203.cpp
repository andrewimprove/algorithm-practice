#include <iostream>


using namespace std;


  struct ListNode{
  int data; 
  ListNode* next;
  };


 ListNode* removeElements(ListNode* head, int val){

   ListNode* dummy = new ListNode{0,head};
   dummy->next = head; 
   ListNode* prev = dummy; 
   ListNode* curr = head; 


   while (curr != nullptr){
     if (curr->data == val){
       prev->next = curr->next;
       curr = curr->next;
     }
     else{
       prev = prev->next; 
       curr = curr->next; 
     }
   }
   return dummy->next; 
 }; 



int main(){
 
  ListNode* head = new ListNode{1, nullptr};
  head->next = new ListNode{2,nullptr};
  head->next->next = new ListNode{3,nullptr};
  head->next->next->next = new ListNode{4,nullptr};
  

  int num = 1; 

  ListNode* res = removeElements(head,num);
   
  while (res != nullptr){
  cout << res->data  << " "; 
  res = res->next;
  }
  return 0;
}

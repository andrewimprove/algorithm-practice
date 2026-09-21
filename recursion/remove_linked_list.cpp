#include <iostream>


using namespace std;

struct ListNode{
  int data;
  ListNode* next; 
};

ListNode* remove_linked_list(ListNode* a, int target){

   //BASE CASE 
   if (a == nullptr){
     return a; 
   }

   //3 == 3 
   if (target == a->data){
     //4 = 
     ListNode* res = remove_linked_list(a->next,target);
     return res;
   }

   remove_linked_list(a->next,target);
   return a;
  }


int main(){

  ListNode* head = new ListNode{1,nullptr};
  head->next = new ListNode{2,nullptr};
  head->next->next = new ListNode{3,nullptr};
  head->next->next->next = new ListNode{4,nullptr};

  ListNode* res = remove_linked_list(head,3);

  while (res != nullptr){
    cout << res->data << " ";
    res = res->next;
  }
}

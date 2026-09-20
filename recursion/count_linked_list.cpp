#include <iostream>
 

using namespace std;

struct ListNode{

  int data;
  ListNode* next;
};

int count_nodes(ListNode* lst){


  if (lst == nullptr){
    return 0;
  }

  return 1 + count_nodes(lst->next);
 
}



int main(){

  ListNode* head = new ListNode{1,nullptr};
  head->next = new ListNode{2,nullptr};
  head->next->next = new ListNode{3,nullptr};
  head->next->next->next = new ListNode{4,nullptr};


  cout << count_nodes(head) << " ";
}

#include <iostream>

using namespace std; 
struct ListNode {
  int data;
  ListNode* next;

};


ListNode* IntersectingNodes(ListNode* HeadA, ListNode* HeadB){

  //TODO:
  //iterate through the second list first
  //check if the first list contains an intersecting node by checking if each of the node holds the same memory address
  //if it does return it 
  //else return nullptr 
  while (HeadB != nullptr){
    ListNode* temp = HeadA;
    while (temp){
      if (temp == HeadB)
          return HeadB;
      temp = temp->next; 
    }
    HeadB = HeadB->next;
  }
  return nullptr;
}

int main(){

  ListNode* Intersecting = new ListNode{10,nullptr};
  ListNode* lst_1 = new ListNode{2,nullptr};
  lst_1->next = new ListNode{3,nullptr};
  lst_1->next->next = Intersecting;

  ListNode* lst_2 = new ListNode{8,nullptr};
  lst_2->next = new ListNode{6,nullptr};
  lst_2->next->next = Intersecting;

 ListNode* res = IntersectingNodes(lst_1,lst_2);


 while (res != nullptr){
   cout << res->data << " ";
   res = res->next;
 }

  return 0;
}

#include <iostream>
#include <cmath>


//horners method 
using namespace std;
struct ListNode {

  int data;
  ListNode * next; 

};


int getDecimal (ListNode* head){

  ListNode* temp = head; 

  int res = 0;

  while (temp != nullptr){
    res = res * 2 + temp->data;
    temp = temp->next;
};
return res;
}

int main(){

  ListNode* a = new ListNode{1,nullptr};
  a->next = new ListNode{0,nullptr};
  a->next->next = new ListNode{1,nullptr};
  a->next->next->next = new ListNode{1,nullptr};


  cout << getDecimal(a) << " ";
};

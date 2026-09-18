#include <iostream>
#include <cmath>

using namespace std;
struct ListNode {

  int data;
  ListNode * next; 

};


int getDecimal (ListNode* head){

  ListNode* temp = head; 

  int count = 0; 
  int accum = 0;
  int final_res = 0;
  ListNode* countTemp = head; 
  while (countTemp != nullptr){
    count++;
    countTemp = countTemp->next;
  }

  while (temp != nullptr){
    if (temp->data == 1){
      count--;
      accum = pow(2,count);
      final_res = final_res + accum;
      temp = temp->next;
    }else{
    //
    temp = temp->next;
    count--;
    }
  }
  return final_res; 
};


int main(){

  ListNode* a = new ListNode{1,nullptr};
  a->next = new ListNode{0,nullptr};
  a->next->next = new ListNode{1,nullptr};
  a->next->next->next = new ListNode{1,nullptr};


  cout << getDecimal(a) << " ";
};

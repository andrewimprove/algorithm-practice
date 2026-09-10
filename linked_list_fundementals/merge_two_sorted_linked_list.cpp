#include <iostream>


using namespace std;

struct ListNode{
    int data;
    ListNode* next;
};

ListNode* MergeTwoLists(ListNode* lst,ListNode* lst_two){

	ListNode* head = lst; 
	ListNode* head_two = lst_two;
	ListNode* dummy = new ListNode{0,nullptr};
	ListNode* tail = dummy;


	while (head != nullptr && head_two != nullptr){
		if (head->data > head_two->data){
			tail->next = new ListNode{head_two->data,nullptr};
			head_two = head_two->next;
			tail = tail->next;
		}else{
		     tail->next = new ListNode{head->data,nullptr};
		     head = head->next;
		     tail = tail->next;
		}
	}
	if (head != nullptr){
		tail->next = head;
	}
	else{
		tail->next = head_two;
	}

	return dummy->next;

}
int main(){

  ListNode* first = new ListNode{1,nullptr};
  first->next = new ListNode{3,nullptr};
  first->next->next = new ListNode{5,nullptr};

  ListNode* second = new ListNode{2,nullptr};
  second->next = new ListNode{4,nullptr};
  second->next->next = new ListNode{6,nullptr};

  ListNode* res = MergeTwoLists(first,second);
   
  while (res != nullptr){
	cout << res->data << " ";
	res = res->next;
  }

  return 0;
}

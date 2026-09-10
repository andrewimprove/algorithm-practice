#include <iostream>

using namespace std;
struct ListNode {
    int data;
    ListNode* next;
};

ListNode* remove_duplicate(ListNode* head){

	ListNode* temp = head; 
	while(temp != nullptr && temp->next != nullptr){
	    if (temp->data == temp->next->data){
		    ListNode* saved = temp->next;
		    temp->next = saved->next; 
	    }
	    else{
		temp = temp->next;
	    }
	}
	return head; 
}




int main(){

	ListNode* lst = new ListNode{1,nullptr};
	lst->next = new ListNode{1,nullptr};
	lst->next->next = new ListNode{2,nullptr};
	lst->next->next->next = new ListNode{2,nullptr};
	lst->next->next->next->next = new ListNode{2,nullptr};
	lst->next->next->next->next->next = new ListNode{3,nullptr};

	remove_duplicate(lst); 

	ListNode* a = lst; 

	while (a != nullptr){
		cout << a->data << " ";
		a = a->next;
	}

	return 0;
}

#include <iostream>


using namespace std;

struct ListNode{
    int data;
    ListNode* next;
};

ListNode* middleNode(ListNode* head){


	ListNode* slow = head;
	ListNode* fast = head;


	while (fast != nullptr && fast->next != nullptr){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->data << " ";
	return slow;
}

int main(){

	ListNode* head = new ListNode{1,nullptr};
	head->next = new ListNode{2,nullptr};
	head->next->next = new ListNode{3, nullptr};
	head->next->next->next = new ListNode{4,nullptr};
	head->next->next->next->next = new ListNode{5,nullptr};
	head->next->next->next->next->next = new ListNode{6,nullptr};

	ListNode* temp = head; 

	cout << middleNode(temp) << " ";
	

}

#include <iostream>


using namespace std;

struct ListNode{
    int data;
    ListNode* next; 
};


bool detectCycle(ListNode* head){

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr){
	    slow = slow->next;
	    fast = fast->next->next;

	    if (slow == fast){
		return true;
	    }	    
    }
    return false;
}



int main(){

    ListNode* head = new ListNode{1,nullptr};
    head->next = head;
    //head->next = new ListNode{2,nullptr};
    //head->next->next = new ListNode{3,nullptr};
    //head->next->next->next = new ListNode{4,head->next->next};

    cout << detectCycle(head) << " ";
}

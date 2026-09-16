#include <iostream>

struct Node{
int data;
Node* next;
};

using namespace std;
int main(){

    Node* head = new Node{10,nullptr};
    head->next = new Node{20,nullptr};
    head->next->next = new Node{30,nullptr};

    Node* prev = nullptr;
    Node* temp = head; 

    while (temp != nullptr){
	Node* saved = temp->next;
	temp->next = prev;
	prev = temp;
	temp = saved;
    }

    temp = prev; 

    while (temp!= nullptr){
	cout << temp->data << " "; 
	temp = temp->next;
    }
}

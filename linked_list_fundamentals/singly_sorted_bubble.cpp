#include <iostream>

using namespace std;

struct Node {
int data; 
Node* next;
};



int main(){
 
Node* head = new Node{10,nullptr};
head->next = new Node{8,nullptr};
head->next->next = new Node{6,nullptr};

Node* temp = head; 

int count = 0;
while (temp != nullptr){
count++;
temp = temp ->next;
}

temp = head;
for (int i = 0; i < count - 1; i++){
    temp = head;
    bool swapped = false;
    for (int j = 0; j < count - 1; j++){
	        if(temp->data > temp->next->data){
	            int saved = temp->data;
	            temp->data = temp->next->data;
	            temp->next->data = saved;
		    swapped = true;
                }
    if(!swapped){
        break;
    }
    temp = temp->next;
    }
}

temp = head;
while (temp != nullptr){
   cout << temp->data << " ";
   temp = temp->next;
}
return 0;

}

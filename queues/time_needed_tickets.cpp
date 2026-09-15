#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//LOGIC
//Figure out a way to keep track of the curr index of the ticket line
//The ticket line will switch depending on the queue using a tracked variable
//Searched up pointer can be used for tracking. 
//

//2
//3
//2

class Solution{
public: 
	int timeRequired(vector<int> &tickets, int k){
		queue <int> ticket_queue;
		int time = 0;
		int original_size = tickets.size();
		int pop = 0;

		for (int i = 0; i < original_size; i++){
		    ticket_queue.push(tickets[i]);
		}
		

		//{3,2,1}

		while (!ticket_queue.empty()){
		    if (pop % original_size == k){
			    return time;
		    }
		    else{
		       ticket_queue.pop();
		       pop++;
		       time++;
		       ticket_queue.push(ticket_queue.front() - 1);
		    }
		    return time;
		}

		return time;
	}
};



int main(){
    Solution mySolution;

    vector <int> v; 
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);

    cout << mySolution.timeRequired(v,2) << " ";

}

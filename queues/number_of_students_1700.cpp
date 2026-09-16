#include <queue> 
#include <iostream>
#include <vector>


//[1,1,1,0,0,1] [1,0,0,0,1,1]
//i = 1 [1,1,0,0,1] [0,0,0,1,1]
//i = 2 [1,0,0,1,1] [0,0,0,1,1]
//i = 3 [0,0,1,1,1] [0,0,0,1,1]
//i = 4 [0,1,1,1] [0,0,1,1]
//i = 5 [1,1,1] [0,1,1]

using namespace std; 

class Solution{

public:
  int countStudents(vector<int>& students, vector<int>&sandwiches){

    queue <int> sandwich_queue; 

    int rotations = 0;
    int sandwich_index = 0; 
    for (int i = 0; i < students.size(); i++){
      sandwich_queue.push(students[i]);
    }

    while (!sandwich_queue.empty() && rotations < sandwich_queue.size()){
           int top_sandwich = sandwiches[sandwich_index];
           if (sandwich_queue.front() == top_sandwich){
               sandwich_queue.pop();
               sandwich_index++;
               rotations = 0;
           }
           else{
             sandwich_queue.push(sandwich_queue.front());
             rotations++;
             sandwich_queue.pop();
           }
     }
    //I will loop through the queue with the array to check if the current student wants the current sandwich 
    //TODO: 
    //Loop through the array with the student queue
    //Check if the everyone has already looped through once if the loop == maximum student size; 
    //if it is a dead loop return the amount of students that have got their desired sandwich 
    //otherwise continue to match the condition that sandwich_queue.front() == sandwiches[i];
    //if the queue is empty, return the total number of student size as all have gotten their sandwiches 
    return sandwich_queue.size();
  }
};

int main(){

  Solution mySolution;
  vector <int> test_students; 
  test_students.push_back(1);
  test_students.push_back(1);
  test_students.push_back(1);
  test_students.push_back(0);
  test_students.push_back(0);
  test_students.push_back(1);

  vector <int> test_sandwiches; 
  test_sandwiches.push_back(1);
  test_sandwiches.push_back(0);
  test_sandwiches.push_back(0);
  test_sandwiches.push_back(0);
  test_sandwiches.push_back(1);
  test_sandwiches.push_back(1);

  cout << mySolution.countStudents(test_students,test_sandwiches) << " ";

}
